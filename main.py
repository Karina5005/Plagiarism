import itertools

import networkx as nx
import sys

if __name__ == '__main__':
    G1 = nx.drawing.nx_pydot.read_dot(f'{sys.argv[1]}').to_undirected()
    G2 = nx.drawing.nx_pydot.read_dot(f'{sys.argv[2]}').to_undirected()
    
    all_connected_subgraphs_1 = []
    for nb_nodes in range(2, G1.number_of_nodes()):
        for SG in (G1.subgraph(selected_nodes) for selected_nodes in itertools.combinations(G1, nb_nodes)):
            if nx.is_connected(SG):
                all_connected_subgraphs_1.append(SG)
    print("Count subgraphs of graph1: ", len(all_connected_subgraphs_1))

    all_connected_subgraphs_2 = []
    for nb_nodes in range(2, G2.number_of_nodes()):
        for SG in (G2.subgraph(selected_nodes) for selected_nodes in itertools.combinations(G2, nb_nodes)):
            if nx.is_connected(SG):
                all_connected_subgraphs_2.append(SG)
    print("Count subgraphs of graph2: ", len(all_connected_subgraphs_2))

    isomorphic = []
    for g1 in all_connected_subgraphs_1:
        for g2 in all_connected_subgraphs_2:
            DiGM = nx.algorithms.isomorphism.GraphMatcher(g1, g2)
            if DiGM.is_isomorphic():
                isomorphic.append((g1, g2))

    print("Count isomorphism: ", len(isomorphic))

    print("Result: ", len(isomorphic) / len(all_connected_subgraphs_1) / len(all_connected_subgraphs_2)*100)
