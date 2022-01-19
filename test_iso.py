import networkx as nx

from isomorphism import fix_labels


def test_without_labels():
    G1 = nx.DiGraph()
    G1.add_node(1, label="(METHOD,main)")
    G1.add_node(2, label="(<operator>.assignment,a=5)")
    G1.add_node(3, label="(RETURN,return 0;,return 0;)")
    G1.add_node(4, label="(<operator>.greaterThan,a>4)")
    G1.add_node(5, label="(<operator>.subtraction,a-b)")
    G1.add_edge(1, 2, label="DDG: a>4")
    G1.add_edge(1, 3, label="DDG: a")
    G1.add_edge(4, 2, label="CDG: ")
    G1.add_edge(4, 3, label="CDG: ")
    G1.add_edge(5, 4, label="CDG: ")
    G2 = nx.DiGraph()
    G2.add_node(1, label="(METHOD,main)")
    G2.add_node(2, label="(<operator>.assignment,b=5)")
    G2.add_node(3, label="(RETURN,return 0;,return 0;)")
    G2.add_edge(1, 2, label="DDG: b>4")
    G2.add_edge(1, 3, label="DDG: b")
    GM = nx.algorithms.isomorphism.DiGraphMatcher(G1, G2)
    assert list(GM.subgraph_isomorphisms_iter())


def test_with_labels():
    G1 = nx.DiGraph()
    G1.add_node(1, label="(METHOD,main)")
    G1.add_node(2, label="(<operator>.assignment,a=5)")
    G1.add_node(3, label="(RETURN,return 0;,return 0;)")
    G1.add_node(4, label="(<operator>.greaterThan,a>4)")
    G1.add_node(5, label="(<operator>.subtraction,a-b)")
    G1.add_edge(1, 2, label="DDG: a>4")
    G1.add_edge(1, 3, label="DDG: a")
    G1.add_edge(4, 2, label="CDG: ")
    G1.add_edge(4, 3, label="CDG: ")
    G1.add_edge(5, 4, label="CDG: ")
    G2 = nx.DiGraph()
    G2.add_node(1, label="(METHOD,main)")
    G2.add_node(2, label="(<operator>.assignment,b=5)")
    G2.add_node(3, label="(RETURN,return 0;,return 0;)")
    G2.add_edge(1, 2, label="DDG: b>4")
    G2.add_edge(1, 3, label="DDG: b")
    GM = nx.algorithms.isomorphism.DiGraphMatcher(G1, G2, node_match=lambda n1, n2: n1['label'] == n2['label'],
                                                  edge_match=lambda n1, n2: n1['label'] == n2['label'])
    assert not list(GM.subgraph_isomorphisms_iter())


def test_witho_fixed_labels():
    G1 = nx.DiGraph()
    G1.add_node(1, label="(METHOD,main)")
    G1.add_node(2, label="(<operator>.assignment,a=5)")
    G1.add_node(3, label="(RETURN,return 0;,return 0;)")
    G1.add_node(4, label="(<operator>.greaterThan,a>4)")
    G1.add_node(5, label="(<operator>.subtraction,a-b)")
    G1.add_edge(1, 2, label="DDG: a>4")
    G1.add_edge(1, 3, label="DDG: a")
    G1.add_edge(4, 2, label="CDG: ")
    G1.add_edge(4, 3, label="CDG: ")
    G1.add_edge(5, 4, label="CDG: ")
    G2 = nx.DiGraph()
    G2.add_node(1, label="(METHOD,main)")
    G2.add_node(2, label="(<operator>.assignment,b=5)")
    G2.add_node(3, label="(RETURN,return 0;,return 0;)")
    G2.add_edge(1, 2, label="DDG: b>4")
    G2.add_edge(1, 3, label="DDG: b")
    fix_labels(G1)
    fix_labels(G2)
    GM = nx.algorithms.isomorphism.DiGraphMatcher(G1, G2, node_match=lambda n1, n2: n1['label'] == n2['label'],
                                                  edge_match=lambda n1, n2: n1['label'] == n2['label'])
    assert list(GM.subgraph_isomorphisms_iter())
    
