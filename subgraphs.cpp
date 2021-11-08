#include <iostream>
#include <vector>
#include <fstream>
#include <bitset>
#include <time.h>

using namespace std;

const int G_SIZE = 22;
const int TRESHOLD = 10;
const int TRESHOLD_MAX_SUB = 20;
const int MAX_SUBGRAPHS_NUM = 10000000;

class Subgraph {
public:
    std::fstream file;
    int count;

    explicit Subgraph(const vector<vector<int>> &g) : g(g) {
        can_be_added = bitset<G_SIZE>();
        was_start = bitset<G_SIZE>();
        visited = bitset<G_SIZE>();

        file.open("subgraphs.txt", std::fstream::out | std::ofstream::trunc);
        file.close();
        file.open("subgraphs.txt", std::fstream::out | std::ofstream::trunc);
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
        if (nodes.count() > TRESHOLD) {
            subgraphs.push_back(nodes);
            if (subgraphs.size() > MAX_SUBGRAPHS_NUM) {
                to_file();
            }
        }
        if (nodes.count() > TRESHOLD_MAX_SUB) {
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
            file << sub_g.to_string() << endl;
        }
        subgraphs.clear();
    }

};

vector<vector<int>> read_matrix() {
    vector<vector<int>> matrix;
    std::fstream file;
    file.open("matrix.txt", std::fstream::in);
    if (!file.is_open()) {
        std::cout << "Failed to open file" << std::endl;
    }
    string line;
    while(getline(file,line)){
        vector<int>tmp;
        for (const auto& c: line) {
            if (c == ' ' || c == '\n') continue;
            tmp.push_back(atoi(&c));
        }
        matrix.push_back(tmp);
    }
    file.close();
    return matrix;
}

int main() {
    clock_t tStart = clock();
    cout << "Started search of subgraphs" << endl;
    vector<vector<int>> matrix = read_matrix();
    auto s = Subgraph(matrix);
    cout <<"Matrix size: " << matrix.size() << endl;
    for (int i = 0; i < matrix.size(); i++) {
        cout <<"Step " << i << "/" << matrix.size() - 1 << endl;
        s.subgraphs_with_node(i);
    }
    cout << "Number of subgraphs: " << s.count << endl;
    cout << "Finished search of subgraphs in " << (double)(clock() - tStart)/CLOCKS_PER_SEC << " seconds" << endl << endl;
    s.file.flush();
    s.file.close();
    return 0;
}

