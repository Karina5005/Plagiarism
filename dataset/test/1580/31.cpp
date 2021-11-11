ï»¿#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define ld long double
#define endl '\n'
#define pii pair<int, int>
#define sz(v) ((int)(v).size())
#define all(a) (a).begin(), (a).end()
#define rall(a) a.rbegin(), a.rend()
#define dbg(x) cerr << #x << " = " << (x) << endl;
#define F first
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))
#define S second
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
mt19937 rnd(chrono::high_resolution_clock::now().time_since_epoch().count());
int inf = 1e9 + 19;
int get(int lx, int ly, int rx, int ry, vector<vector<int>> &p){
    return p[rx + 1][ry + 1] - p[rx + 1][ly] - p[lx][ry + 1] + p[lx][ly];
}
void solve(){
    int ans = 20;
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));
    for(int i = 0;i < n;i++){
        string s;
        cin >> s;
        for(int j = 0;j < m;j++){
            a[i][j] = s[j] - '0';
        }
    }
    vector<vector<int>> p(n + 1, vector<int>(m + 1, 0ll));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            p[i + 1][j + 1] = p[i + 1][j] + p[i][j + 1] - p[i][j] + a[i][j];
        }
    }
    for(int x1 = 0;x1 < n;x1++){//ÑÑÑÐ¾ÐºÐ¸
        for(int y1 = 0;y1 < m;y1++){//ÑÑÐ¾Ð»Ð±ÑÑ
            for(int x2 = x1 + 4;x2 < n;x2++){
                for(int y2 = y1 + 3;y2 < m;y2++){
                    int t = get(x1 + 1, y1 + 1, x2 - 1, y2 - 1, p);
                    t += y2 - 1 - y1 - get(x1, y1 + 1, x1, y2 - 1, p);
                    t += y2 - 1 - y1 - get(x2, y1 + 1, x2, y2 - 1, p);
                    t += x2 - 1 - x1 - get(x1 + 1, y1, x2 - 1, y1, p);
                    if(t >= ans)break;
                    t += x2 - 1 - x1 - get(x1 + 1, y2, x2 - 1, y2, p);
                    ans = min(ans, t);
                }
            }
        }
    }
    cout << ans << endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--)solve();
    return 0;
}