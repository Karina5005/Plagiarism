import os

import networkx as nx
import time

tic = time.perf_counter()


def read_subgraphs(nodes, path, size):
    subgraphs = []
    with open(path, 'r') as file:
        for line in file:
            subgraph = []
            l = line.replace('\n', '')[::-1][0:size]
            for i, c in enumerate(l):
                if c == '1':
                    subgraph.append(nodes[i])
            subgraphs.append(subgraph)
    return subgraphs


if __name__ == '__main__':
    print('Started search of isomorphism')
    files1 = [f for f in os.listdir('pdg1/graph') if os.path.isfile(os.path.join('pdg1/graph', f))]
    files1_s = [f for f in os.listdir('pdg1/subgraph') if os.path.isfile(os.path.join('pdg1/subgraph', f))]
    files2 = [f for f in os.listdir('pdg2/') if os.path.isfile(os.path.join('pdg2/', f))]
    nodes_iso = set()
    sum = 0
    max_iso_sum = 0
    for i, file1 in enumerate(files1):
        for file2 in files2:
            G2 = nx.drawing.nx_pydot.read_dot('pdg2/' + file2)
            G2 = G2.subgraph(max(nx.weakly_connected_components(G2), key=len))
            G1 = nx.drawing.nx_pydot.read_dot('pdg1/graph/' + file1)
            G1 = G1.subgraph(max(nx.weakly_connected_components(G1), key=len))
            G1_subgraphs = read_subgraphs(sorted(G1.nodes()), 'pdg1/subgraph/' + files1_s[i], len(G1.nodes()))
            max_iso = 0
            for SG in sorted(G1_subgraphs, key=lambda x: len(x), reverse=True):
                SG = G1.subgraph(SG)
                GM = nx.algorithms.isomorphism.DiGraphMatcher(G2, SG)
                if list(GM.subgraph_isomorphisms_iter()):
                    for node in SG.nodes():
                        nodes_iso.add(node)
            sum += (min(G1.number_of_nodes(), G2.number_of_nodes()))

    print("Result: ", len(nodes_iso) / sum)
toc = time.perf_counter()
print(f"Finished search of isomorphism in {toc - tic} seconds")

