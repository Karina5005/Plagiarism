#include <bits/stdc++.h>
using namespace std;


#define     F                   first
#define     S                   second
#define     pb                  push_back
#define     gap                 ' '
#define     fastIO              {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define     Inf                 1e18
#define     fix                 fixed<<setprecision(10)
#define     all(v)              v.begin(),v.end()
#define     For(i, a, b)        for(ll i = a; i <  b; ++i)
#define     Rof(i, a, b)        for(ll i = a; i >= b; --i)
#define     endl                 "\n"
#define     yes                 cout<<"YES\n"
#define     no                  cout<<"NO\n"


typedef     long long               ll;
typedef     vector<ll>              vl;
typedef     pair<ll, ll>            pll;
typedef     map<ll, ll>             mll;
typedef     unordered_map<ll, ll>   umll;
typedef     multimap<ll, ll>        mmll;

const ll mod = 1e9+7;
const ll sz  = 2e5+5;

set<ll> cont;
set<ll> adj[sz];

void check(ll u) {
    /* 'if' begin */
    if(adj[u].empty() or u > *adj[u].rbegin()) /* 'if' inside */
    {
        cont.insert(u);
    }
    else {
        cont.erase(u);
    }
}

void add(ll u, ll v) {
    adj[u].insert(v);
    adj[v].insert(u);
    check(u);
    check(v);
}
void del(ll u, ll v) {
    adj[v].erase(u);
    adj[u].erase(v);
    check(u);
    check(v);
}



void solve() {
    ll n, m; cin>> n>>m;
    For(i, 1, n + 1) cont.insert(i);
    For(i, 0, m) {
        ll u, v; cin>>u>>v;
        add(u, v);
    }
    ll q; cin>>q;
    while(q --) {
        ll a, u, v; cin>>a;
        /* 'if' begin */
        if(a == 3) /* 'if' inside */
        {
            cout<< cont.size() <<endl;
        }
        else /* 'if' begin */
        if(a == 1) /* 'if' inside */
        {
            cin>>u>>v;
            add(u, v);
        }
        else /* 'if' begin */
        if(a == 2) /* 'if' inside */
        {
            cin>>u>>v;
            del(u, v);
        }
    }

}


int32_t main()
{
    fastIO
    ll T; T = 1;

    
    while(T --) {
        solve();

    }



    return 0;

}
