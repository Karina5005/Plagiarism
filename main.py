import os

import networkx as nx
import time
from progress.bar import IncrementalBar
from isomorphism import fix_labels
from threading import Thread
from pathos.multiprocessing import ProcessingPool as Pool

start_time = time.perf_counter()
G_SIZE = 256


def read_subgraphs(nodes, path, size, G):
    subgraphs = []
    with open(path, 'rb') as file:
        bytes = file.read(G_SIZE // 8)
        count=0
        while bytes != b'':
            count += 1
            subgraph = []
            ind = []
            check = True
            for v_i, c in enumerate((''.join(format(byte, '08b')[::-1] for byte in bytes))[:size]):
                if c == '1':
                    ind.append(v_i)
                    subgraph.append(nodes[v_i])
                    if 'method' in G.nodes[nodes[v_i]]['label'].lower():
                        check = False
                        break
            if check:
                subgraphs.append((subgraph, ind))
            bytes = file.read(G_SIZE // 8)
    print(len(subgraphs))
    print(count)
    return subgraphs


def prepare_graph(path):
    G = nx.drawing.nx_pydot.read_dot(path)
    if next(nx.weakly_connected_components(G), None) is not None:
        G = G.subgraph(max(nx.weakly_connected_components(G), key=len))
    if G.number_of_nodes() < 1:
        return None
    fix_labels(G)
    return G

def run(G, G_sub, sub, bar):
    GM = nx.algorithms.isomorphism.DiGraphMatcher(G_sub, G.subgraph(sub[0]),
                                                  node_match=lambda n1, n2: n1['label'] == n2['label'],
                                                  edge_match=lambda n1, n2: n1[0]['label'] == n2[0]['label'])
    bar.next()
    if GM.subgraph_is_isomorphic():
        G_tmp = G.subgraph(sub[0])
        types = []
        for n in G_tmp.nodes:
            types.append(G_tmp.nodes[n]['label2'])
        return sub[1]
    return []


if __name__ == '__main__':
    files1 = sorted([f for f in os.listdir('pdg1/graph') if os.path.isfile(os.path.join('pdg1/graph', f))])
    files1_s = sorted([f for f in os.listdir('pdg1/subgraph') if os.path.isfile(os.path.join('pdg1/subgraph', f))])
    files2 = [f for f in os.listdir('pdg2/') if os.path.isfile(os.path.join('pdg2/', f))]
    for i, file1 in enumerate(files1):
        G1 = prepare_graph('pdg1/graph/' + file1)
        if G1 is None:
            print('Skip pdg1/graph/'+ file1)
            continue
        s = G1.number_of_nodes()
        nodes_iso = [False]*s
        covered = 0
        G1_subgraphs = read_subgraphs(sorted(G1.nodes()), 'pdg1/subgraph/' + files1_s[i], len(G1.nodes()), G1)
        for file2 in files2:
            arg = []
            bar = IncrementalBar(file1 + file2, max=len(G1_subgraphs))
            G2 = prepare_graph('pdg2/' + file2)
            if G2 is None:
                print('Skip pdg2/'+ file2)
                continue
            for SG in G1_subgraphs:
                arg.append((G1, G2, SG, bar))
            pool = Pool(7)
            f = lambda x: run(*x)
            res = pool.map(f, arg)
            for r in res:
                for node in r:
                    if not nodes_iso[node]:
                        nodes_iso[node] = True
                        covered += 1
            if covered == s:
                break
        for key, value in enumerate(nodes_iso):
            if not value:
                print(G1.nodes[sorted(G1.nodes())[key]]['label2'])
        print()
        print(f"Result: {covered} / {s}")
        print()
print("--- %s seconds ---" % (time.perf_counter() - start_time))


