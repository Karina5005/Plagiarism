#include<bits/stdc++.h>
using namespace std;
#define int long long

const int d = 2e5 + 5;

vector<int> a_gtb(4 * d);

void in_fr(int node, int start, int end, int idx, int val) {
    if(start == end) {
        a_gtb[node] += val;
    }
    else {
        int mid = (start + end) / 2;
        if(start <= idx and idx <= mid) {
            in_fr(2 * node, start, mid, idx, val);
        }
        else {
            in_fr(2 * node + 1, mid + 1, end, idx, val);
        }
        a_gtb[node] = __gcd(a_gtb[2 * node], a_gtb[2 * node + 1]);
    }
}

int query(int node, int start, int end, int l, int r) {
    if(r < start or end < l) {
        return 0;
    }
    if(l <= start and end <= r) {
        return a_gtb[node];
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
        vector<int> q(n + 1);
        for(int i = 1; i <= n; i++) cin >> q[i];

        for(int i = 1; i < n; i++) {
            in_fr(1, 1, n - 1, i, abs(q[i] - q[i + 1]));
        }

        int res = 1;
        deque<int> yf_xor;        
        for(int i = 1; i < n; i++) {
            yf_xor.push_back(i);
            while(yf_xor.size() and query(1, 1, n - 1, yf_xor.front(), yf_xor.back()) == 1) {
                yf_xor.pop_front();
            }
            res = max(res, (int)yf_xor.size() + 1);
        }

        int cur = 0;
        for(int i = 2; i <= n; i++) {
            if(q[i] == q[i - 1]) cur++;
            else {
                res = max(res, cur + 1);
            }
        }
        res = max(res, cur + 1);

        cout << res << '\n';
        for(int i = 1; i < n; i++) {
            in_fr(1, 1, n - 1, i, -abs(q[i] - q[i + 1]));
        }
    }
    return 0;
}