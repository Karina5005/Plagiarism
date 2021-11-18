import networkx as nx

NODE_LABELS = {'method': 'method', 'return': 'ret', 'shiftLeft': 'shift', 'shiftRight': 'shift', 'subtraction': 'sub',
               'addition': 'add', 'assignment': 'ass', 'greaterthan': 'check', 'lessthan': 'check'}

EDGE_LABELS = {'ddg': 'ddg', 'cdg': 'cdg'}


def fix_labels(G):
    for i in G.nodes:
        is_fixed = False
        for old_l, new_l in NODE_LABELS.items():
            if old_l in G.nodes()[i]['label'].lower():
                G.nodes[i]['label'] = new_l
                is_fixed = True
                break
        if not is_fixed:
            G.nodes[i]['label'] = 'unknown'
    for i in G.edges:
        is_fixed = False
        for old_l, new_l in EDGE_LABELS.items():
            if old_l in G.edges[i]['label'].lower():
                G.edges[i]['label'] = new_l
                is_fixed = True
                break
        if not is_fixed:
            G.edges[i]['label'] = 'unknown'
