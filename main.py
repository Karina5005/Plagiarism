import networkx as nx


class Subgraphs:
    def __init__(self, G):
        self.subgraphs_set = []
        self.can_be_added = {}
        self.graph = G

    def build_subgraphs(self, nodes):
        self.can_be_added = {}
        if len(nodes) > 0:
            self.subgraphs_set.append(nodes)
        for edge in self.graph.edges(nodes):
            if edge[1] not in nodes and edge[1] not in self.can_be_added.keys():
                self.can_be_added[edge[1]] = True
        for node in [k for k, v in self.can_be_added.items() if v]:
            if node not in nodes:
                copy_nodes = nodes.copy()
                copy_nodes.append(node)
                self.can_be_added[node] = False
                self.build_subgraphs(copy_nodes)
                self.can_be_added[node] = True

    def get_subgraphs(self):
        for node in self.graph.nodes():
            self.build_subgraphs([node])
        return self.subgraphs_set


if __name__ == '__main__':
    G2 = nx.drawing.nx_pydot.read_dot("file2.dot").to_undirected()
    G2 = G2.subgraph(max(nx.connected_components(G2), key=len))
    G1 = nx.drawing.nx_pydot.read_dot("file1.dot").to_undirected()
    G1 = G1.subgraph(max(nx.connected_components(G1), key=len))
    G1_subgraphs = Subgraphs(G1).get_subgraphs()
    max_iso = 0
    for SG in sorted(G1_subgraphs, key=lambda x: len(x), reverse=True):
        SG = G1.subgraph(SG)
        GM = nx.algorithms.isomorphism.GraphMatcher(G2, SG)
        if list(GM.subgraph_isomorphisms_iter()):
            max_iso = SG.number_of_nodes()
            break

    print(max_iso / (min(G1.number_of_nodes(), G2.number_of_nodes())))
