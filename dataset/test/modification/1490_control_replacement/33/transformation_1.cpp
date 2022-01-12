#include <iomanip>
#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;  
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>

#define ll long long int
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL)
#define google(t) cout<<"Case #"<<t+1<<": "
#define mod 998244353
#define endl "\n"
#define FOR(var,startval,endval) for(int var=startval; var<endval; var++)
#define llFOR(var,startval,endval) for(ll var=startval; var<endval; var++)
#define FORrev(var,startval,endval) for(int var=startval; var>=endval; var--)
#define llFORrev(var,startval,endval) for(ll var=startval; var>=endval; var--)

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int gcd(int a,int b) { return b?gcd(b,a%b):a;}

ll power(ll x, ll y)
{
    if (y == 0)
        return 1LL;
    else if (y % 2 == 0)
        return (power(x, y / 2) * power(x, y / 2))%mod;
    else
        return (((x * power(x, y / 2))%mod) * power(x, y / 2))%mod;
}

ll qinv(ll p,ll q)
{
    ll expo;
    expo = mod - 2;
    for ( ; expo; ) 
{
        if (expo & 1) {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
        expo >>= 1;
    }
    return p;
}

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    FOR(i,0,n) 
        cin>>a[i];
    int numdist=0;
    map<int, int> m, mp;
    FOR(i,0,n){
        if(m[a[i]]==0)
            numdist++;
        m[a[i]]++;
    }
    vector<int> dp;
    // dp[numdist-1]=0;
    int k=0;
    for(auto i:m)
        dp.push_back(i.second);
    sort(dp.begin(), dp.end());
    int ans = n, it=1;
    FOR(i,0,dp.size()){
        // cout<<"YO "<<dp[i]<<endl;
        ans = min(ans, n-(dp[i]*(int(dp.size())-i)));
        it++;
    }
    cout<<ans<<endl;
    // return;
    // int itr=numdist-1;
    // for(auto i=mp.rbegin(); i!=mp.rend(); i++){
    //     int tmp = (i->second);
    //     // cout<<"T "<<tmp<<endl;
    //     if(i==mp.rbegin())
    //         dp[itr] = tmp;
    //     else
    //         dp[itr] = min(dp[itr+1], tmp);
    //     itr--;
    // }
    // if(dp[numdist-1]==dp[0]){
    //     cout<<"YO"<<0<<endl;
    //     return;
    // }
    // FOR(i,0,numdist)
    //     cout<<dp[i]<<" ";
    // cout<<endl;
    // int rem = n, ans=n-(dp[0]*numdist), it=0, cnt=0;
    // for(auto i:mp){
    //     ans = min(ans, n-(dp[it]*(numdist-it)));
    //     it++;
    //     cnt += i.second;
    // }
    // cout<<ans<<endl;
} 

int main(){
    fastio();
    int T=1;
    cin>>T;
    {
    int t=0;
    for ( ; t<T; ) 
{
        // google(t);
        solve();
    	t++; 
    
    }}
    return 0;
}