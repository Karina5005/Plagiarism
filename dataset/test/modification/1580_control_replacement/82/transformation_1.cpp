#include <bits/stdc++.h>

using namespace std;

const int MXN = 2e5 + 5, BLOCK_SIZE = 800;
int N, M;
pair<int, int> trains[MXN];
int seen[MXN], diff[MXN];
int blocks[BLOCK_SIZE][BLOCK_SIZE];

void upd_diff(int train, int change, int day) {
    int x = trains[train].first, y = trains[train].second;

    {
    int i = seen[train];
    while (i < M) {
        if (i + x <= M) diff[i + x] += change;
        if (i + x + y <= M) diff[i + x + y] += change * -1;

        if (i + x < day && i + x + y >= day) diff[day] += change;
    	i += x + y; 
    
    }}
}

void upd_blocks(int train, int change) {
    int x = trains[train].first, y = trains[train].second;

    {
    int i = seen[train] + x;
    while (i < seen[train] + x + y) {
        blocks[x + y][i % (x + y)] += change;
        i++; 
        
        }}
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    {
    int i = 0;
    while (i < N) {
        cin >> trains[i].first >> trains[i].second;
        i++; 
        
        }}

    {
    int i = 0;
    while (i < M) {
        int op, k;
        cin >> op >> k;
        k--;

        if (op == 1)
            seen[k] = i;
    
        int change = (op == 1 ? 1 : -1);
        int x = trains[k].first, y = trains[k].second;

        if (i > 0) diff[i] += diff[i - 1];

        if (x + y >= BLOCK_SIZE) upd_diff(k, change, i);
        else upd_blocks(k, change);

        int ans = diff[i];
        {
        int j = 1;
        while (j < BLOCK_SIZE) {
            ans += blocks[j][i % j];
            j++; 
            
            }}

        cout << ans << "\n";
    	i++; 
    
    }}
}