#include <iostream>

using namespace std;
int G[20001][20001];
int visited[20001];
int c = 0;
int color = 1;
void dfs(int a) {
	if (visited[a] != 0) return;
	visited[a] = 1;
	c++;
	for (int i = 0; i < 20001; i++) {
		dfs(G[a][i]);
	}
}

int readInt() {
	int a;
	cin >> a;
	return a;
}

int main() {
	int n, m;
	cin >> n; cin >> m;
	int i = 0;
	for (int j = 0; j < m; j++) {
		int a, b;
		cin >> a; cin >> b;
		a--;
		b--;
		G[a][i] = b;
		G[b][i] = a;
		i++;
	}
	dfs(0);
		if (c == n && m==n-1) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	return 0;
}
