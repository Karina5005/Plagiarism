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
const int base = 269;
const int mod = 1e9 + 7;
const int maxn = 2e5 + 7;

int n,m,a[407][407],f[407][407];

int get(int i, int j, int x, int y){
    return (f[x][y] - f[x][j - 1] - f[i - 1][y] + f[i - 1][j - 1]);
}
void program(){
    cin >> n >> m;
    {
    int i = 1;
    while (i <= n) {
        {
        int j = 1;
        while (j <= m) {
            char x;
            cin >> x;
            a[i][j] = x - '0';
            f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + a[i][j];
        	j++; 
        
        }}
    	i++; 
    
    }}
    int ans = mod;
    {
    int i = 1;
    while (i <= m - 3) {
        {
        int j = i + 3;
        while (j <= m) {
            int mn = 3 - get(2,i,4,i) + 3 - get(2,j,4,j) + (j - i - 1) - get(1,i + 1,1,j - 1) + get(2,i + 1,4,j - 1);
            {
            int r = 5;
            while (r <= n) {
                int res = mn + (j - i - 1) - get(r,i + 1,r,j - 1);
                ans = min(ans,res);
                // update mn
                mn = mn + 1 - a[r][i] + 1 - a[r][j] + get(r,i + 1,r,j - 1);
                int demo = 3 - get(r - 2,i,r,i) + 3 - get(r - 2,j,r,j) + (j - i - 1) - get(r - 3,i + 1,r - 3,j - 1) + get(r - 2,i + 1,r,j - 1);
                mn = min(mn,demo);
            	r++; 
            
            }}
        	j++; 
        
        }}
    	i++; 
    
    }}
    cout << ans << endl;
    
}
signed main(){
    // freopen(".INP","r",stdin);
    // freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(false); cin.tie(0);
    
    int query = 1;
    cin >> query;
    while(query--) program();
}