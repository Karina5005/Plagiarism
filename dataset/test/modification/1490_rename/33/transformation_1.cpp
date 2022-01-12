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

int ukf(int nuf,int p) { return p?ukf(p,nuf%p):nuf;}

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
    while (expo) {
        if (expo & 1) {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
        expo >>= 1;
    }
    return p;
}

void cd_g(){
    int s;
    cin>>s;
    vector<int> t_eb(s);
    FOR(i,0,n) 
        cin>>t_eb[i];
    int zz_xna=0;
    map<int, int> n_xi, a_kx;
    FOR(i,0,n){
        if(n_xi[t_eb[i]]==0)
            zz_xna++;
        n_xi[t_eb[i]]++;
    }
    vector<int> t;
    // dp[numdist-1]=0;
    int r_ah=0;
    for(auto i:n_xi)
        t.push_back(i.second);
    sort(t.begin(), t.end());
    int e_y = s, qap_qyc=1;
    FOR(i,0,dp.size()){
        // cout<<"YO "<<dp[i]<<endl;
        e_y = min(e_y, s-(t[i]*(int(t.size())-i)));
        qap_qyc++;
    }
    cout<<e_y<<endl;
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
    int vea=1;
    cin>>vea;
    for(int xh_wr=0; xh_wr<vea; xh_wr++){
        // google(t);
        cd_g();
    }
    return 0;
}