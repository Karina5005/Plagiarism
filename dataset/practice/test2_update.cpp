#include <iostream>
#include <vector>

using namespace std;
int c = 0;
int color = 1;
int n;
int v[20001];
int g[20001][20001];

void my_dfs(int u) {
    if (g[u][0] == 0) {
        v[u] = 0;
        return;
    }
    for (int i = 0; i < 20001; i++) {
        my_dfs(g[u][i]);
        if (v[g[u][i]] == 0) v[u] = 1;
    }
}
int main() {
	int m, a, b, j = 0;
	cin >> n; cin >> m;
	int i = 0;
	while (j < m) {
		cin >> a; cin >> b;
		g[--a][i] = --b;
		g[b][i] = a;
		i++;
		j++;
	}
	my_dfs(0);
	if (c == n && m==n-1) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
