#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define sz(s) (int)s.size()
#define all(v) (v).begin(),(v).end()
#define fill(dp) memset(dp,-1,sizeof(dp))
#define input(vec) for (auto &el : vec) cin >> el;
#define print(vec) for (auto &el : vec) cout << el << " "; cout << "\n"; 
int n,m,dp[450][450];

void solve() {
    cin>>n>>m;
    vector<int>pre(m+1),last_occur(n+1);
    vector<pair<int,int>>pr;
    pr.push_back({0,0});
    {
    int i=0;
    for ( ; i<n; ) 
{
        int x,y;
        cin>>x>>y;
        pr.push_back({x,y});
    	i++; 
    
    }}
    int ans = 0;
    {
    int i=1;
    for ( ; i<=m; ) 
{
        int op,k;
        cin>>op>>k;
        int sum = pr[k].first+pr[k].second;
        if(!(op==1)) {
            int l = last_occur[k]+pr[k].first,r=l+pr[k].second;
            if(sum>=450LL) {
                for ( ; l<=m; ) 
{
                    if(i>=l and i<r) pre[i]--;
                    if(l>i) pre[l]--;
                    if(i<r and r<=m) pre[r]++;
                    l += sum;
                    r += sum;
                }
            }
            else {
                {
                int j=l;
                for ( ; j<r; ) 
{
                    dp[sum][j%sum]--;
                	j++; 
                
                }}
            }
        }
        else {
            int l = i+pr[k].first,r=i+sum;
            last_occur[k] = i;
            if(sum>=450LL) {
                for ( ; l<=m; ) 
{
                    pre[l]++;
                    if(r<=m) pre[r]--;
                    l += sum;
                    r += sum;
                }
            }
            else {
                {
                int j=l;
                for ( ; j<r; ) 
{
                    dp[sum][j%sum]++;
                	j++; 
                
                }}
            }
        }
        ans += pre[i];
        int cur = 0;
        {
        int x=1;
        for ( ; x<450; ) 
{
            cur += dp[x][i%x];
        	x++; 
        
        }}
        cout<<ans+cur<<"\n";
    	i++; 
    
    }}
}

signed main() {
    
    cin.tie(nullptr);cout.tie(nullptr);
    int testcases=1;
    //cin>>testcases;
    for ( ; testcases--; ) 
solve();
    return 0;
}