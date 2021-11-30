import networkx as nx

NODE_LABELS = {'cin': 'read',
               'input': 'read',
               'scan': 'read',
               'read': 'read',
               'cout': 'write',
               'write': 'write',
               'print': 'write',
               'method': 'method',
               'return': 'ret',
               'clear': 'clear',
               'front': 'front',
               'back': 'back',
               'top': 'back',
               'begin': 'begin',
               'end': 'end',
               'push_back': 'push_back',
               'pb': 'push_back',
               'add': 'push_back',
               'insert': 'push_back',
               'puts': 'push_back',
               'emplace': 'push_back',
               'push': 'push_back',
               'resize': 'resize',
               'unique': 'unique',
               'count': 'count',
               'size': 'size',
               'length': 'size',
               'erase': 'pop',
               'pop': 'pop',
               'remove': 'pop',
               'pop_back': 'pop',
               'pop_front': 'pop',
               'vec': 'vector',
               'arr': 'vector',
               'empty': 'empty',
               'reverse': 'reverse',
               'at': 'access',
               'fieldaccess': 'access',
               'indexaccess': 'access',
               'find': 'access',
               'get': 'access',
               'next': 'next',
               'shift': 'shift',
               'subtraction': 'sub',
               'addition': 'add',
               'multiplication': 'mult',
               'modulo': 'mod',
               'division': 'div',
               'minus': 'minus',
               'sqrt': 'sqrt',
               'pow': 'pow',
               'power': 'pow',
               'min': 'minmax',
               'max': 'minmax',
               'abs': 'abs',
               'comb': 'comb',
               'decrement': 'increment',
               'increment': 'increment',
               'lessthan': 'check',
               'greaterequalsthan': 'check',
               'lessequalsthan': 'check',
               'greaterthan': 'check',
               'equals': 'check',
               'isdigit': 'check',
               'or': 'or_and',
               'and': 'or_and',
               'indirection': 'indirection',
               'not': 'not',
               'logicalor': 'logical_or_and',
               'logicalans': 'logical_or_and',
               'log': 'log',
               'ceil': 'round',
               'round': 'round',
               'gcd': 'gcd',
               'lower_bound': 'binary_search',
               'upper_bound': 'binary_search',
               'assignment': 'assign',
               'param': 'init',
               'memset': 'memset',
               'sizeof': 'sizeof',
               'fieldidentifier': 'init',
               'literal': 'init',
               'string': 'string',
               'str': 'string',
               'substr': 'substr',
               'if': 'if',
               'while': 'while',
               'for': 'for',
               'all': 'all',
               'swap': 'swap',
               'getchar': 'cast',
               'cast': 'cast',
               'char': 'cast',
               'double': 'cast',
               'int': 'cast',
               'make_pair': 'make_pair',
               'rand': 'rand',
               'fill': 'fill',
               'lowbit': 'lowbit',
               'setprecision': 'program',
               'freopen': 'program',
               'setio': 'program',
               'flush': 'program',
               'fastio': 'program',
               'debug': 'program',
               'ios': 'program',
               '__builtin_clz': 'program',
               'time': 'program',
               'assert': 'program',
               'system': 'program',
               'exit': 'program',
               'await': 'program'}

EDGE_LABELS = {'ddg': 'ddg', 'cdg': 'cdg'}


def fix_labels(G):
    for i in G.nodes:
        is_fixed = False
        for old_l, new_l in NODE_LABELS.items():
            if 'label' not in G.nodes[i].keys():
                break
            if old_l in G.nodes()[i]['label'].lower():
                G.nodes[i]['label'] = new_l
                is_fixed = True
                break
        if not is_fixed:
            G.nodes[i]['label'] = 'unknown'
    for i in G.edges:
        is_fixed = False
        for old_l, new_l in EDGE_LABELS.items():
            if 'label' not in G.edges[i].keys():
                break
            if old_l in G.edges[i]['label'].lower():
                G.edges[i]['label'] = new_l
                is_fixed = True
                break
        if not is_fixed:
            G.edges[i]['label'] = 'unknown'
