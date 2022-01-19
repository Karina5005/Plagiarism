import sys
import os
import time

import networkx as nx

tic = time.perf_counter()
if __name__ == '__main__':
    print('Started building of adjacency matrix')
    files = [f for f in os.listdir(sys.argv[1] + '/graph') if os.path.isfile(os.path.join(sys.argv[1] + '/graph', f))]
    for i, file in enumerate(files):
        G1 = nx.drawing.nx_pydot.read_dot(sys.argv[1] + '/graph/' +  file)
        G1 = G1.subgraph(max(nx.weakly_connected_components(G1), key=len))
        x = nx.adjacency_matrix(G1.to_undirected(), nodelist=sorted(G1.nodes())).toarray()
        filename = sys.argv[1] + '/matrix/' + f'{i}.txt'
        os.makedirs(os.path.dirname(filename), exist_ok=True)
        with open(filename, 'w') as f:
            for _list in x:
                f.write(' '.join(str(e) for e in _list) + '\n')
    toc = time.perf_counter()
    print(f'Finished building of adjacency matrix in {toc - tic} seconds, moving next')
    print()
