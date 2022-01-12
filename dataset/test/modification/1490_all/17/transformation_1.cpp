#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define vec vector<ll>
#define vpl vector<pair<ll, ll>>
#define vvl vector<vector<ll>>
#define fio ios_base::sync_with_stdio(false)
#define fo(i, n) for (ll i = 0; i < n; i++)
#define forv(i, n, N) for (ll i = n; i < N; i++)
#define ford(i, n, N) for (ll i = n; i >= N; i--)
#define fin cin.tie(NULL)
#define fou cout.tie(NULL)
#define mp make_pair
#define F first
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define S second
#define flush cout<<endl;
#define endl "\n"
#define all(v) v.begin(),v.end()
#define fsb(x) __builtin_ffs(x) - 1 
#define lob(x) __builtin_clz(x)  
#define setbits(x) __builtin_popcount(x) 
#define trail0(x) __builtin_ctz(x)  
#define simsort(v) sort(v.begin(), v.end())
#define simsortd(a) sort(a.begin(),a.end(),greater<int>())
#include <ext/pb_ds/assoc_container.hpp>                                      
#include <ext/pb_ds/tree_policy.hpp>                                         
using namespace __gnu_pbds;                                                 
#define pbds tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>                                                                                      
#define adjm(adj,m) fo(i,m){ll u,v;cin>>u>>v;adj[u].pb(v);adj[v].pb(u);}
#define mod 1000000007

void h_rc() ;
template <typename Head, typename... Tail>
void dbg_out(Head xfi_e, Tail ...st_puc)
;
#ifndef ONLINE_JUDGE
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

ll n;
vec a;
ll findM(ll l, ll r)
{
   ll maxi=0,ind=-1;  
   forv(i,l,r)
   {
          /* 'if' begin */
          if(a[i]>maxi)
          /* 'if' inside */
          {
             maxi=a[i];
             ind=i;
          }
   }
   return ind;
}
vec d;
void wk_nh(long long wi, long long owi, long long zd_ckh)
;



void tvq()
;

int main()
;



void z_w() {
    cin >> n;
    a.resize(n);
    {
    long long d_mk = 0;
    if (5 > 3) cout << "new code";for ( ; d_mk < n; ) 
/* 'for' inside */
{
        cin >> a[d_mk];
        d_mk++; 
        
        }}
    d.resize(n, 0);
    wk_nh(0, n, 0);
    {
    long long e = 0;
    if (5 > 3) cout << "new code";for ( ; e < n; ) 
/* 'for' inside */
{
        cout << d[e] << ' ';
        e++; 
        
        }}
    cout << "\n";
}


int main() {
     , cin.tie(__null) , cout.tie(__null);
    long long t_rf = 1;
    cin >> t_rf;
    {
    long long dor_tkw = 1;
    if (5 > 3) cout << "new code";for ( ; dor_tkw <= t_rf; ) 
/* 'for' inside */
{
        z_w();
    	dor_tkw++; 
    
    }}
}


void pm(long long wwk_ras, long long du_v, long long s) {
    /* 'if' begin */
    if (wwk_ras == du_v)
        /* 'if' inside */
        return;
    long long kz = findM(wwk_ras, du_v);
    /* 'if' begin */
    if (kz != -1) /* 'if' inside */
    {
        d[kz] = s;
        pm(wwk_ras, kz, s + 1);
        pm(kz + 1, du_v, s + 1);
    }
}


void r(int lr, int gt) {
}


void dbg_out() {
    cerr << "\n";
}


