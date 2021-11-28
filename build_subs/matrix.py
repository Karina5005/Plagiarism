import os

import networkx as nx

if __name__ == '__main__':
    dirs = sorted([f for f in os.listdir('subs') if os.path.isdir(os.path.join('subs', f))], key=int)
    for dir in dirs:
        files = sorted([f for f in os.listdir('subs/' + dir) if os.path.isfile(os.path.join('subs/' + dir, f))],
                       key=lambda x: int(x.replace('-pdg.dot', '')))
        for i, file in enumerate(files):
            print(file)
            G1 = nx.drawing.nx_pydot.read_dot('subs/' + dir + '/' + file)
            if list(nx.weakly_connected_components(G1)) and G1.number_of_nodes() > 0 and G1.number_of_edges() > 0:
                G1 = G1.subgraph(max(nx.weakly_connected_components(G1), key=len))
            x = nx.adjacency_matrix(G1.to_undirected(), nodelist=sorted(G1.nodes())).toarray()
            filename = 'subs/' + dir + '/' + f'{i}_matrix.txt'
            os.makedirs(os.path.dirname(filename), exist_ok=True)
            with open(filename, 'w') as f:
                for _list in x:
                    f.write(' '.join(str(e) for e in _list) + '\n')
