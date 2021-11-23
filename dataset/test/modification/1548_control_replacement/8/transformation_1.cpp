#include<bits/stdc++.h>
using namespace std;
#define int long long

const int mxN = 2e5 + 5;

vector<int> tree(4 * mxN);

void update(int node, int start, int end, int idx, int val) {
    if(!(start == end)) {
        int mid = (start + end) / 2;
        if(start <= idx and idx <= mid) {
            update(2 * node, start, mid, idx, val);
        }
        else {
            update(2 * node + 1, mid + 1, end, idx, val);
        }
        tree[node] = __gcd(tree[2 * node], tree[2 * node + 1]);
    }
    else {
        tree[node] += val;
    }
}

int query(int node, int start, int end, int l, int r) {
    if(r < start or end < l) {
        return 0;
    }
    if(l <= start and end <= r) {
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
        {
        int i = 1;
        while (i <= n) {
        cin >> a[i];
        i++; 
        
        }}

        {
        int i = 1;
        while (i < n) {
            update(1, 1, n - 1, i, abs(a[i] - a[i + 1]));
        	i++; 
        
        }}

        int res = 1;
        deque<int> q;        
        {
        int i = 1;
        while (i < n) {
            q.push_back(i);
            while(q.size() and query(1, 1, n - 1, q.front(), q.back()) == 1) {
                q.pop_front();
            }
            res = max(res, (int)q.size() + 1);
        	i++; 
        
        }}

        int cur = 0;
        {
        int i = 2;
        while (i <= n) {
            if(!(a[i] == a[i - 1])) {
                res = max(res, cur + 1);
            }
            else cur++;
        	i++; 
        
        }}
        res = max(res, cur + 1);

        cout << res << '\n';
        {
        int i = 1;
        while (i < n) {
            update(1, 1, n - 1, i, -abs(a[i] - a[i + 1]));
        	i++; 
        
        }}
    }
    return 0;
}