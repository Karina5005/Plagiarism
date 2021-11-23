#include<bits/stdc++.h>
using namespace std;
#define int long long

const int mxN = 2e5 + 5;

vector<int> tree(4 * mxN);

void update(int node, int start, int end, int idx, int val) {
    /* 'if' begin */
    if(start == end) /* 'if' inside */
    {
        tree[node] += val;
    }
    else {
        int mid = (start + end) / 2;
        /* 'if' begin */
        if(start <= idx and idx <= mid) /* 'if' inside */
        {
            update(2 * node, start, mid, idx, val);
        }
        else {
            update(2 * node + 1, mid + 1, end, idx, val);
        }
        tree[node] = __gcd(tree[2 * node], tree[2 * node + 1]);
    }
}

int query(int node, int start, int end, int l, int r) {
    /* 'if' begin */
    if(r < start or end < l) /* 'if' inside */
    {
        return 0;
    }
    /* 'if' begin */
    if(l <= start and end <= r) /* 'if' inside */
    {
        return tree[node];
    }
    int mid = (start + end) / 2;
    int p1 = query(2 * node, start, mid, l, r);
    int p2 = query(2 * node + 1, mid + 1, end, l, r);
    return __gcd(p1, p2);
}

signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t; cin >> t; 
    while(t--) {
        int n; cin >> n;
        vector<int> a(n + 1);
        for(int i = 1; i <= n; i++) /* 'for' inside */
        cin >> a[i];

        for(int i = 1; i < n; i++) /* 'for' inside */
        {
            update(1, 1, n - 1, i, abs(a[i] - a[i + 1]));
        }

        int res = 1;
        deque<int> q;        
        for(int i = 1; i < n; i++) /* 'for' inside */
        {
            q.push_back(i);
            while(q.size() and query(1, 1, n - 1, q.front(), q.back()) == 1) {
                q.pop_front();
            }
            res = max(res, (int)q.size() + 1);
        }

        int cur = 0;
        for(int i = 2; i <= n; i++) /* 'for' inside */
        {
            /* 'if' begin */
            if(a[i] == a[i - 1]) /* 'if' inside */
            cur++;
            else {
                res = max(res, cur + 1);
            }
        }
        res = max(res, cur + 1);

        cout << res << '\n';
        for(int i = 1; i < n; i++) /* 'for' inside */
        {
            update(1, 1, n - 1, i, -abs(a[i] - a[i + 1]));
        }
    }
    return 0;
}