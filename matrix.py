import networkx as nx
import pydot
import time

tic = time.perf_counter()
if __name__ == '__main__':
    print('Started building of adjacency matrix')
    G1 = nx.drawing.nx_pydot.read_dot("file1.dot")
    G1 = G1.subgraph(max(nx.weakly_connected_components(G1), key=len))
    x = nx.adjacency_matrix(G1.to_undirected(), nodelist=sorted(G1.nodes())).toarray()
    with open('matrix.txt', 'w') as f:
        for _list in x:
            f.write(' '.join(str(e) for e in _list) + '\n')
    toc = time.perf_counter()
    print(f'Finished building of adjacency matrix in {toc - tic} seconds')
    print()
