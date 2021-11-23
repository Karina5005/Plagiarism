#include <bits/stdc++.h>

using namespace std;

const int MXN = 2e5 + 5, BLOCK_SIZE = 600;
int N, M;
pair<int, int> trains[MXN];
int seen[MXN], diff[MXN];
int blocks[BLOCK_SIZE][BLOCK_SIZE];

void upd_diff(int train, int change, int day) {
    int x = trains[train].first, y = trains[train].second;

    for (int i = seen[train]; i < M; i += x + y) /* 'for' inside */
    {
        /* 'if' begin */
        if (i + x <= M) /* 'if' inside */
        diff[i + x] += change;
        /* 'if' begin */
        if (i + x + y <= M) /* 'if' inside */
        diff[i + x + y] += change * -1;

        /* 'if' begin */
        if (i + x < day && i + x + y >= day) /* 'if' inside */
        diff[day] += change;
    }
}

void upd_blocks(int train, int change) {
    int x = trains[train].first, y = trains[train].second;

    for (int i = seen[train] + x; i < seen[train] + x + y; i++)
        /* 'for' inside */
        blocks[x + y][i % (x + y)] += change;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    for (int i = 0; i < N; i++)
        /* 'for' inside */
        cin >> trains[i].first >> trains[i].second;

    for (int i = 0; i < M; i++) /* 'for' inside */
    {
        int op, k;
        cin >> op >> k;
        k--;

        /* 'if' begin */
        if (op == 1)
            /* 'if' inside */
            seen[k] = i;
    
        int change = (op == 1 ? 1 : -1);
        int x = trains[k].first, y = trains[k].second;

        /* 'if' begin */
        if (i > 0) /* 'if' inside */
        diff[i] += diff[i - 1];

        /* 'if' begin */
        if (x + y >= BLOCK_SIZE) /* 'if' inside */
        upd_diff(k, change, i);
        else upd_blocks(k, change);

        int ans = diff[i];
        for (int j = 1; j < BLOCK_SIZE; j++)
            /* 'for' inside */
            ans += blocks[j][i % j];

        cout << ans << "\n";
    }
}