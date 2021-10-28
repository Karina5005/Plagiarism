import networkx as nx
import time


tic = time.perf_counter()


class Subgraphs:
    def __init__(self, G):
        self.subgraphs_set = set()
        self.can_be_added = {}
        self.graph = G

    def build_subgraphs(self, nodes=frozenset()):
        if nodes not in self.subgraphs_set:
            self.subgraphs_set.add(nodes)
        else:
            return

        for node in [k for k, v in self.can_be_added.items() if v]:
            if node not in nodes:
                node_neighbours = []
                for edge in self.graph.edges(node):
                    if edge[1] not in nodes and (edge[1] not in self.can_be_added.keys() or not self.can_be_added[edge[1]]):
                        node_neighbours.append(edge[1])
                        self.can_be_added[edge[1]] = True
                copy_nodes = set(nodes.copy())
                copy_nodes.add(node)
                self.can_be_added[node] = False
                self.build_subgraphs(frozenset(copy_nodes))
                self.can_be_added[node] = True
                for node_n in node_neighbours:
                    self.can_be_added[node_n] = False

    def all_nodes(self, node):
        self.can_be_added = {}
        s = set()
        s.add(node)
        for edge in self.graph.edges(node):
            self.can_be_added[edge[1]] = True
        self.build_subgraphs(frozenset(s))
        return self.subgraphs_set


if __name__ == '__main__':
    G2 = nx.drawing.nx_pydot.read_dot("file2.dot").to_undirected()
    G2 = G2.subgraph(max(nx.connected_components(G2), key=len))
    G1 = nx.drawing.nx_pydot.read_dot("file1.dot").to_undirected()
    G1 = G1.subgraph(max(nx.connected_components(G1), key=len))
    sub = Subgraphs(G1)
    for node in G1.nodes:
        G1_subgraphs = list(sub.all_nodes(node))
        toc = time.perf_counter()
        print(f"Found {len(G1_subgraphs)} subgraphs in: {toc - tic} seconds")
        max_iso = 0
        for SG in sorted(G1_subgraphs, key=lambda x: len(x), reverse=True):
            SG = G1.subgraph(SG)
            GM = nx.algorithms.isomorphism.GraphMatcher(G2, SG)
            if list(GM.subgraph_isomorphisms_iter()):
                max_iso = SG.number_of_nodes()
                break
        if max_iso > 0.9:
            print("Result: ", max_iso / (min(G1.number_of_nodes(), G2.number_of_nodes())))
            break

toc = time.perf_counter()
print("In time: ", toc - tic)
