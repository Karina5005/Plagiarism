#include <iostream>
#include <vector>
#include <fstream>
#include <bitset>
#include <filesystem>
#include <thread>


using namespace std;

const int G_SIZE = 256;
const int TRESHOLD = 9;
const int MAX_SUBGRAPHS_NUM = 100000;

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
        path.append("/subgraph/");
        filesystem::create_directory(path);

        path.append(to_string(n));
        //path.append(".txt");
        file.open(path, std::fstream::out | std::ofstream::trunc | ios::binary);
        file.close();
        file.open(path, std::fstream::out | std::ofstream::trunc | ios::binary);
        if (!file.is_open()) {
            std::cout << "Failed to open file" << std::endl;
        }

        count = 0;
    }

    void subgraphs_with_node(int node) {
        can_be_added = bitset<G_SIZE>();
        visited = bitset<G_SIZE>();
        for (int j = 0; j < g[node].size(); j++) {
            if (g[node][j] == 0) continue;
            can_be_added[j] = true;
        }
        auto b = bitset<G_SIZE>();
        b[node] = true;
        build_subgraphs(b);
        was_start[node] = true;
        to_file();
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

    void build_subgraphs(bitset<G_SIZE> nodes) {
        if (nodes.count() >= TRESHOLD) {
            subgraphs.push_back(nodes);
            if (subgraphs.size() > MAX_SUBGRAPHS_NUM) {
                to_file();
            }
            return;
        }
        for (int i = 0; i < g.size(); i++) {
            if (!can_be_added[i] || was_start[i] || nodes[i] || visited[i]) continue;
            nodes[i] = true;
            auto tmp_visited = bitset<G_SIZE>(visited);
            auto tmp_can_be_added = can_be_added;
            add_neighbours(nodes, i);
            build_subgraphs(nodes);
            can_be_added = tmp_can_be_added;
            visited = tmp_visited;
            visited[i] = true;
            nodes[i] = false;
        }
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
    string path = p;
    path.append("/matrix/");
    for (const auto &entry: filesystem::directory_iterator(path)) {
        entry.path();
        vector<vector<int>> matrix;
        std::fstream file;
        file.open(entry.path(), std::fstream::in);
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

void make_sub(Subgraph s, unsigned long size){
    for (int j = 0; j < size; j++) {
        s.subgraphs_with_node(j);
    }
    s.file.flush();
    s.file.close();
}

int main(int, char *argv[]) {
    vector<vector<vector<int>>> matrix = read_matrix(argv[1]);
    vector<thread>threads(matrix.size());
    for (int i = 0; i < matrix.size(); i++) {
        threads[i] = thread(make_sub, Subgraph(matrix[i], i, argv[1]), matrix[i].size());
    }
    for (int i = 0; i < matrix.size(); i++) {
        threads[i].join();
    }
    return 0;
}
