#include<bits/stdc++.h>

/*#include<iostream>
#include<vector>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
*/
//using namespace __gnu_pbds;

#define PB push_back
using namespace std;

#define loop(i , x , n) for(ll i = x;i< n;i++)
#define loopc(i , x , n) for(ll i = x;i<= n;i++)
#define loopr(i , x , n) for(ll i = n;i>=x ;i--)
#define loop(i , x , n) for(ll i = x;i< n;i++)
#define ll long long
#define pb push_back
#define watch(x) cout << (#x) << " is " << (x) << endl
typedef pair<ll, ll> pll;
#define mp(x, y) make_pair<long long , long long >(x, y)
#define SIN(x) sin(x * 3.141592653589793238)
#define COS(x) cos(x * 3.141592653589793238)
#define endl "\n"
#define ff first
#define ss second
#define ELGO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tc ll tc; cin>>tc; while(tc--)
#define vv(x) vector<x>
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof  pop_front
#define endl "\n"
#define umap unordered_map
#define pq priority_queue
#define ca(a,n) for(ll i=0;i<n;i++){ cin>>a[i]; }
#define ca1(a,n) for(ll i=1;i<=n;i++){ cin>>a[i]; }
#define svec(x) sort(x.begin(), x.end())
#define rsvec(x) sort(x.begin(), x.end(), greater<ll>())
#define all(x) (x).begin(), (x).end()
//vector<string>dp;

const ll inf=1e18;
template <typename T>
ostream& operator<<(ostream& os, const vector<T>& v){
    os << "[";
    for (ll i=0; i < v.size(); ++i) {
        os << v[i];
        if (i != v.size() - 1)
            os << ", ";
    }
    os << "]";
    return os;
}
template <typename T>
ostream& operator<<(ostream& os, const set<T>& v){
    os << "{";
    for (auto it : v) {
        os << it;
        if (it != *v.rbegin())
            os << ", ";
    }
    os << "}";
    return os;
}
template <typename T, typename S>
ostream& operator<<(ostream& os, const map<T, S>& v){
    os<<"{";
    for (auto it : v){
        os << it.first << " : "
           << it.second ;
        if (it != *v.rbegin())
            os << ", ";
    }
    os << "}";
    return os;
}
template <typename T, typename S>
ostream& operator<<(ostream& os, const pair<T, S>& v){
    os << "(";
    os << v.first << ", "
       << v.second << ")";
    return os;
}


const ll mod = 1e9 + 7;


ll fin(ll a, vv(pll)&par ){
    if(par[a].ff==a)return a;
    else return fin(par[a].ff, par);
}
bool uni(ll a ,ll b,vv(pll)&par ){
    ll o = fin(a, par);
    ll t = fin(b, par);
    if(o==t)return true;
    if(par[t].ss > par[o].ss)swap(o,t);
    if(par[t].ss==par[o].ss)par[o].ss++;
    par[t].ff = o;
    return false;
}
ll power(ll x, ll y, ll m)
{
    if (y == 0)
        return 1;
    ll p = power(x, y / 2, m) % m;
    p = (p * p) % m;

    return (y % 2 == 0) ? p : (x * p) % m;
}


ll fin_par(vv(vv(ll))&bin, ll a , ll p){
    ll c= a;
    loop(i, 0, 22){
        if((1<<i) & p){
            c = bin[c][i];
        }
    }
    return c;
}

ll lca(vv(vv(ll))&bin, ll a, ll b , vv(ll)&d){
    if(d[a]> d[b]){

        swap(a,b);
    }

    ll dif = d[b]-d[a];

    ll prod = (1ll<<29);
    loopr(i, 0, 29){
        if(dif&prod){
            b = bin[b][i];
        }
        prod/=2;
    }

    if( b == a )return a;
    prod = (1ll<<29);
    loopr(i, 0, 29){
        if(bin[b][i]!= bin[a][i]){
            b = bin[b][i];
            a = bin[a][i];
        }
        prod/=2;
    }

    return bin[a][0];
}


mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll a[100000];
void solve(){
    ll n;
    cin>> n;
    ca(a,n);
    ll maxi =LONG_MIN;
    ll mini = LONG_MAX;
    loop(i,0, n)maxi = max(maxi, a[i]), mini= min(mini, a[i]);

    cout<<maxi-mini<<endl;


}

int main()
{
    ELGO
    //pre();

    tc
     {
        solve();
     }

}
