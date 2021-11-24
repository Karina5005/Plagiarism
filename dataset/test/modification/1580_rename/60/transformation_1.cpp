// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>

#define int long long
#define st first
#define nd second
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define pii pair<int,int>
#define piii pair<int,pii>
#define endl '\n'

using namespace std;
const int ny = 269;
const int dw = 1e9 + 7;
const int svb_kgg = 2e5 + 7;

int n,m,a[407][407],f[407][407];

int get(int i, int j, int x, int y){
    return (f[x][y] - f[x][j - 1] - f[i - 1][y] + f[i - 1][j - 1]);
}
void w_yq(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            char ln_es;
            cin >> ln_es;
            a[i][j] = ln_es - '0';
            f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + a[i][j];
        }
    }
    int ans = dw;
    for(int i = 1; i <= m - 3; i++){
        for(int j = i + 3; j <= m; j++){
            int mn = 3 - get(2,i,4,i) + 3 - get(2,j,4,j) + (j - i - 1) - get(1,i + 1,1,j - 1) + get(2,i + 1,4,j - 1);
            for(int r = 5; r <= n; r++){
                int res = mn + (j - i - 1) - get(r,i + 1,r,j - 1);
                ans = min(ans,res);
                // update mn
                mn = mn + 1 - a[r][i] + 1 - a[r][j] + get(r,i + 1,r,j - 1);
                int demo = 3 - get(r - 2,i,r,i) + 3 - get(r - 2,j,r,j) + (j - i - 1) - get(r - 3,i + 1,r - 3,j - 1) + get(r - 2,i + 1,r,j - 1);
                mn = min(mn,demo);
            }
        }
    }
    cout << ans << endl;
    
}
signed main(){
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int query = 1;
    cin >> query;
    while(query--) w_yq();
}