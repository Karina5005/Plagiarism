import networkx as nx

NODE_LABELS = {'cin': 'cin',
               'cout': 'cout',
               'setio': 'set_io',
               'flush': 'flush',
               'input': 'input',
               'scan': 'scan',
               'read': 'read',
               'write': 'write',
               'freopen': 'freopen',
               'print': 'print',
               'method': 'method',
               'return': 'ret',
               'fieldaccess': 'field_access',
               'indexaccess': 'index_access',
               'at': 'index_access',
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
               'find': 'get',
               'get': 'get',
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
               'min': 'min',
               'max': 'max',
               'abs': 'abs',
               'comb': 'comb',
               'decrement': 'decrement',
               'increment': 'increment',
               'lessthan': 'check',
               'greaterequalsthan': 'check',
               'lessequalsthan': 'check',
               'greaterthan': 'check',
               'equals': 'equals',
               'or': 'or',
               'and': 'and',
               'indirection': 'indirection',
               'not': 'not',
               'logicalor': 'logical_or',
               'logicalans': 'logical_ans',
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
               'fieldidentifier': 'field_identifier',
               'literal': 'literal',
               'string': 'string',
               'str': 'string',
               'substr': 'substr',
               'if': 'if',
               'while': 'while',
               'all': 'all',
               'swap': 'swap',
               'getchar': 'getchar',
               'cast': 'cast',
               'char': 'cast',
               'double': 'cast',
               'int': 'cast',
               'isdigit': 'isdigit',
               'setprecision': 'setprecision',
               'fastio': 'fast_io',
               'debug': 'debug',
               'ios': 'ios',
               '__builtin_clz': '__builtin_clz',
               'make_pair': 'make_pair',
               'rand': 'rand',
               'time': 'time',
               'assert': 'assert',
               'fill': 'fill',
               'system': 'system',
               'lowbit': 'lowbit',
               'exit': 'exit',
               'await': 'await'}

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
