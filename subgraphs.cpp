#include <iostream>
#include <vector>
#include <fstream>
#include <bitset>
#include <filesystem>
#include <set>
#include "thread_pool.hpp"


using namespace std;

const int G_SIZE = 256;
const int TRESHOLD = 9;
const long long MAX_SUBGRAPHS_NUM = 3000000;
const int TO_FILE = 100000;

class Subgraph {
public:
    std::fstream file;
    int count;

    explicit Subgraph(const vector<vector<int>> &g, int i, const string &p) : g(g) {
        can_be_added = bitset<G_SIZE>();
        was_start = bitset<G_SIZE>();
        visited = bitset<G_SIZE>();
        n = i;

        string path = p;
        filesystem::create_directory(path);
        path.append("/");
        path.append(to_string(n));
        file.open(path, std::fstream::out | std::ofstream::trunc | ios::binary);
        file.close();
        file.open(path, std::fstream::out | std::ofstream::trunc | ios::binary);
        if (!file.is_open()) {
            std::cout << "Failed to open file" << std::endl;
        }

        count = 0;
    }

    bool subgraphs_with_node(int node) {
        can_be_added = bitset<G_SIZE>();
        visited = bitset<G_SIZE>();
        for (int j = 0; j < g[node].size(); j++) {
            if (g[node][j] == 0) continue;
            can_be_added[j] = true;
        }
        auto b = bitset<G_SIZE>();
        b[node] = true;
        auto res = build_subgraphs(b);
        was_start[node] = true;
        if (not res) return false;
        to_file();
        return true;
    }

    vector<bitset<G_SIZE>> &getSubgraphs() {
        return subgraphs;
    }

private:
    vector<bitset<G_SIZE>> subgraphs{};
    bitset<G_SIZE> can_be_added;
    bitset<G_SIZE> was_start;
    bitset<G_SIZE> visited;
    vector<vector<int>> g;
    int n;


    void add_neighbours(const bitset<G_SIZE> &nodes, int cur_node) {
        can_be_added[cur_node] = false;
        for (int i = 0; i < g[cur_node].size(); i++) {
            if (g[cur_node][i] > 0 and !was_start[i] && !nodes[i] && not can_be_added[i] and i != cur_node and
                !visited[i]) {
                can_be_added[i] = true;
            }
        }
    }

    bool build_subgraphs(bitset<G_SIZE> nodes) {
        if (nodes.count() >= TRESHOLD) {
            subgraphs.push_back(nodes);
            if (subgraphs.size() >= TO_FILE){
                to_file();
            }
            if (count + subgraphs.size() > MAX_SUBGRAPHS_NUM) {
                return false;
            }
            return true;
        }
        for (int i = 0; i < g.size(); i++) {
            if (!can_be_added[i] || was_start[i] || nodes[i] || visited[i]) continue;
            nodes[i] = true;
            auto tmp_visited = bitset<G_SIZE>(visited);
            auto tmp_can_be_added = can_be_added;
            add_neighbours(nodes, i);
            auto res = build_subgraphs(nodes);
            if (not res) return false;
            can_be_added = tmp_can_be_added;
            visited = tmp_visited;
            visited[i] = true;
            nodes[i] = false;
        }
        return true;
    }

    void to_file() {
        count += (int) getSubgraphs().size();
        for (const auto &sub_g: getSubgraphs()) {
            file.write((char *) &sub_g, G_SIZE / 8);
        }
        subgraphs.clear();
    }

};

vector<vector<vector<int>>> read_matrix(const string &p) {
    vector<vector<vector<int>>> res;
    const string& path = p;
    auto cmp = [](const string& s1, const string& s2){
        if (s1.length() < s2.length())
            return true;
        if (s2.length() < s1.length())
            return false;
        else
            return (s1 < s2);
    };
    set<filesystem::path, decltype(cmp)> sorted_by_name(cmp);
    for (auto &entry : filesystem::directory_iterator(path))
        sorted_by_name.insert(string(entry.path()));
    for (const auto &entry: sorted_by_name) {
        string f = entry;
        if (f.find("matrix") == string::npos){
            continue;
        }
        vector<vector<int>> matrix;
        std::fstream file;
        file.open(entry, std::fstream::in);
        if (!file.is_open()) {
            std::cout << "Failed to open file" << std::endl;
        }
        string line;
        while (getline(file, line)) {
            vector<int> tmp;
            for (const auto &c: line) {
                if (c == ' ' || c == '\n') continue;
                tmp.push_back(atoi(&c));
            }
            matrix.push_back(tmp);
        }
        file.close();
        res.push_back(matrix);
    }
    return res;
}

void make_sub(const string& path){
    vector<vector<vector<int>>> matrix = read_matrix(path);
    for (int i = 0; i < matrix.size(); i++) {
        auto s = Subgraph(matrix[i], i, path);
        for (int j = 0; j < matrix[i].size(); j++) {
            auto res = s.subgraphs_with_node(j);
            if (not res) {
                auto p = path;
                p.append("/bad.txt");
                std::fstream file;
                file.open(p, std::fstream::out | std::ofstream::trunc);
                file.close();
                cout << "finish for bad file " << path << endl;
                return;
            }
        }
        s.file.flush();
        s.file.close();
    }
    auto p = path;
    p.append("/finish.txt");
    std::fstream file;
    file.open(p, std::fstream::out | std::ofstream::trunc);
    file.close();
    cout << "finish for " << path << endl;
}

int main(int, char *argv[]) {
    thread_pool pool(*argv[2]);
    for (const auto &entry: filesystem::directory_iterator(argv[1])) {
        string p = entry.path();
        p.append("/finish.txt");
        ifstream f(p.c_str());
        if (!f.good()) {
            pool.push_task(make_sub, entry.path());
        }
    }
    pool.wait_for_tasks();
    return 0;
}

