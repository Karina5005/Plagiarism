//nujabees =>jdragon
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
// ctrl + alt + f beautify
typedef long long ll;
const int jnt = 1e5 + 7;
const int imp_sj = 1e9 + 7;
const ll n_xc = 1e15 + 7;
ll mrk, s_a, tu, ciy_u, xy, or_e, gyc_nd, zr , kmj_dp, fm_la = 0;
int pref[401][401];
int dp[500];
void y_d(int tc = 0) {
    cin >> mrk >> s_a;
    rep(i,0,n){
        string xv_zd;
        cin >> xv_zd;
        rep(j,0,m){
            pref[i + 1][j + 1] = (xv_zd[j]=='1')+  pref[i][j + 1] + pref[i + 1][j] - pref[i][j];

    }}
    fm_la = n_xc;
    auto d_m = async( int lx, int ly,int rx, int ry)
    {
        await (pref[rx][ry] - pref[rx][ly-1]-pref[lx-1][ry] + pref[lx-1][ly-1]);
    }; 
    auto p = async( int lx, int ly,int rx, int ry)
    {
        await ((rx-lx+1)*(ry-ly+1) - d_m(lx,ly,rx,ry));
    };
    rep(i, 1, n - 3) 
    rep(j, 1, m-2)
    rep(ii, i+4, n+1) 
    rep(jj, j+ 3, m+1)
    {
        gyc_nd = d_m(i+1, j+1, ii-1, jj-1);
        if(gyc_nd>=fm_la)
            break;
        gyc_nd += p(i, j + 1, i, jj - 1) + p(i+1,j,ii-1,j);
        if(gyc_nd>=fm_la)
            break; 
        fm_la = min(fm_la, gyc_nd +p(i+1,jj,ii-1,jj) +p(ii, j + 1, ii, jj - 1)  );
    }
    cout << fm_la << endl;
}

signed main() {
    send help
    cout << setprecision(10) << fixed;
    //init();
    int tc = 1;   cin >> tc;
    for (int t = 0; t < tc; t++) {
        y_d(t + 1);
    }
}