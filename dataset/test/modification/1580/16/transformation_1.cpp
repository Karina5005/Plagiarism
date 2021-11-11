
#include "bits/stdc++.h"
using namespace std;
#define send {ios_base::sync_with_stdio(false);}
#define help {cin.tie(NULL);}
#define getunique(v) {sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}
#define rep(i,x,n) for(long long i = x; i < n; i++)
#define rev(i,x,n) for(long long i = n-1; i >= x; --i)
#define ff            first
#define ss            second
#define int long long
#define pb push_back
#define all(x)  (x).begin() , (x).end()
#define rall(x)  (x).rbegin() , (x).rend()
#define pii pair<long long ,long long >
#define async [&]
#define await return

typedef long long ll;
const int N = 1e5 + 7;
const int mod = 1e9 + 7;
const ll INF = 1e15 + 7;
ll n, m, q, k, l, r, x, y , z, ans = 0;
int pref[401][401];
int dp[500];
void solve(int tc = 0) {
    cin >> n >> m;
    rep(i,0,n){
        string s;
        cin >> s;
        rep(j,0,m){
            pref[i + 1][j + 1] = (s[j]=='1')+  pref[i][j + 1] + pref[i + 1][j] - pref[i][j];

    }}
    ans = INF;
    auto get1 = async( int lx, int ly,int rx, int ry)
    {
        await (pref[rx][ry] - pref[rx][ly-1]-pref[lx-1][ry] + pref[lx-1][ly-1]);
    }; 
    auto get0 = async( int lx, int ly,int rx, int ry)
    {
        await ((rx-lx+1)*(ry-ly+1) - get1(lx,ly,rx,ry));
    };
    rep(i, 1, n - 3) 
    rep(j, 1, m-2)
    rep(ii, i+4, n+1) 
    rep(jj, j+ 3, m+1)
    {
        x = get1(i+1, j+1, ii-1, jj-1);
        /* 'if' begin */
        if(x>=ans)
            /* 'if' inside */
            break;
        x += get0(i, j + 1, i, jj - 1) + get0(i+1,j,ii-1,j);
        /* 'if' begin */
        if(x>=ans)
            /* 'if' inside */
            break; 
        ans = min(ans, x +get0(i+1,jj,ii-1,jj) +get0(ii, j + 1, ii, jj - 1)  );
    }
    cout << ans << endl;
}

signed main() {
    send help
    cout << setprecision(10) << fixed;
    
    int tc = 1;   cin >> tc;
    for (int t = 0; t < tc; t++) /* 'for' inside */
    {
        solve(t + 1);
    }
}