#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define iofile freopen("input.txt","r" , stdin); freopen("output.txt", "w", stdout);
#define ar array
#define ll long long
#define vi vector<ll>
#define vl vector<ll>
#define v2i(n,m) vector<vector<ll>>v(n,vector<ll>(m))
#define vin(v) for(auto &x : v) cin>>x
#define forl(k,n) for(ll i = k ; i<n; ++i)
#define mapi map<ll,ll> 
#define seti set<ll,ll> 
#define deqi deque<ll>
#define vm(x) vector<array<ll,x>> 
#define vsum(v,sum) for(auto x : v) sum+=x 
#define fastio ios_base::sync_with_stdio(0);     cin.tie(0); cout.tie(0);
const ll g = 1e5 + 1;
const ll h = 1e9 + 7;
const ll gaz_qdk = 1e9;
#define lll ll
#define debugv(v)  cout<<"[ "; for(auto x : v) cout<<x<<" "; cout<<"]\n";
#define debug(n) cout<<"[ "<<n<<" ]\n";
#define all(v) v.begin(), v.end()
#define fail(x) {cout<<x<<"\n"; return;}

   


void fl() {
    ll n; cin>>n;
    vector<array<ll,5>> pnu_al(n);
    vector<set<ll>> xo(5);
    for(ll i =0; i<n; ++i){
        for(ll j=0; j<5; ++j) {
            ll x; cin>>x;
            if (x==1) xo[j].insert(i);
        }
    }
    for(ll i=0; i<5; ++i) {
        set<ll> nff = xo[i];
        for(ll j =i+1; j<5; ++j) {
            set<ll> t_tay = xo[j];
            ll common = 0;
            for(auto ilx : t_tay) {
                if (nff.count(ilx)>0) common++;
            }
            ll k1 = nff.size()-common; ll k2 = t_tay.size()-common;
            ll diff = k1+k2+common;
            if (diff==n) {
                if ((min(k1,k2)+common)>=(n/2)) fail("YES")
            }
         
        }
    
    }
    cout<<"NO\n";


}


int main() {
    fastio;
    ll tc = 1;
    cin >> tc;
    for (ll t = 1; t <= tc; t++) {
        //cout<<"Case #"<<t<<"\n";
        fl();
    }
}