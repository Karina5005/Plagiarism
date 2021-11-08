import networkx as nx
import time

tic = time.perf_counter()


def read_subgraphs(nodes):
    subgraphs = []
    with open('subgraphs.txt', 'r') as file:
        for line in file:
            subgraph = []
            l = line.replace('\n', '')[::-1]
            for i, c in enumerate(l):
                if c == '1':
                    subgraph.append(nodes[i])
            subgraphs.append(subgraph)
    return subgraphs


if __name__ == '__main__':
    print('Started search of isomorphism')
    G2 = nx.drawing.nx_pydot.read_dot("file2.dot")
    G2 = G2.subgraph(max(nx.weakly_connected_components(G2), key=len))
    G1 = nx.drawing.nx_pydot.read_dot("file1.dot")
    G1 = G1.subgraph(max(nx.weakly_connected_components(G1), key=len))
    G1_subgraphs = read_subgraphs(sorted(G1.nodes()))
    max_iso = 0
    for SG in sorted(G1_subgraphs, key=lambda x: len(x), reverse=True):
        SG = G1.subgraph(SG)
        GM = nx.algorithms.isomorphism.DiGraphMatcher(G2, SG)
        if list(GM.subgraph_isomorphisms_iter()):
            max_iso = SG.number_of_nodes()
            break
    print("Result: ", max_iso / (min(G1.number_of_nodes(), G2.number_of_nodes())))

toc = time.perf_counter()
print(f"Finished search of isomorphism in {toc - tic} seconds")

