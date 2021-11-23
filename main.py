import os

import networkx as nx
import time

tic = time.perf_counter()
G_SIZE = 256


def read_subgraphs(nodes, path, size):
    subgraphs = []
    with open(path, 'rb') as file:
        bytes = file.read(G_SIZE // 8)
        while bytes != b'':
            subgraph = []
            ind = []
            l = (''.join(format(byte, '08b')[::-1] for byte in bytes))[:size]
            l1 = (''.join(format(byte, '08b')[::-1] for byte in bytes))
            for i, c in enumerate(l):
                if c == '1':
                    ind.append(i)
                    subgraph.append(nodes[i])
            subgraphs.append((subgraph, ind))
            bytes = file.read(G_SIZE // 8)
    return subgraphs


if __name__ == '__main__':
    print('Started search of isomorphism')
    files1 = sorted([f for f in os.listdir('pdg1/graph') if os.path.isfile(os.path.join('pdg1/graph', f))])
    files1_s = sorted([f for f in os.listdir('pdg1/subgraph') if os.path.isfile(os.path.join('pdg1/subgraph', f))])
    files2 = [f for f in os.listdir('pdg2/') if os.path.isfile(os.path.join('pdg2/', f))]
    nodes_iso = [False] * G_SIZE
    for i, file1 in enumerate(files1):
        print(f'Step {i+1}/{len(files1)}')
        sum = 0
        max_iso_sum = 0
        for k, file2 in enumerate(files2):
            print(f'SubStep {k+1}/{len(files2)}')
            G2 = nx.drawing.nx_pydot.read_dot('pdg2/' + file2)
            G2 = G2.subgraph(max(nx.weakly_connected_components(G2), key=len))
            G1 = nx.drawing.nx_pydot.read_dot('pdg1/graph/' + file1)
            sum = G1.number_of_nodes()
            G1 = G1.subgraph(max(nx.weakly_connected_components(G1), key=len))
            G1_subgraphs = read_subgraphs(sorted(G1.nodes()), 'pdg1/subgraph/' + files1_s[i], len(G1.nodes()))
            max_iso = 0
            l_n = 0
            for j, SG in enumerate(sorted(G1_subgraphs, key=lambda x: len(x[0]), reverse=True)):
                print(f'SubSubStep {j+1}/{len(G1_subgraphs)}')
                GM = nx.algorithms.isomorphism.DiGraphMatcher(G2, G1.subgraph(SG[0]))
                if GM.subgraph_is_isomorphic():
                    for node in SG[1]:
                        if not nodes_iso[node]:
                            nodes_iso[node] = True
                            l_n += 1
                if l_n == sum:
                    break
            print("Result: ", l_n / sum)
toc = time.perf_counter()
print(f"Finished search of isomorphism in {toc - tic} seconds")

