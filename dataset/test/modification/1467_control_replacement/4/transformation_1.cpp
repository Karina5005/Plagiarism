#include <iomanip>
#include <iostream>
#pragma GCC optimize("Ofast")
#pragma GCC optimization ("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef string str;
typedef pair<ll,ll> pll;
typedef vector<ll> vl;
typedef vector<vector <ll> > vvl;

const ll large=1e11,remi=1e9+7,inf=LLONG_MAX;
const ld Pi=acos(-1);

#define pb      push_back
#define F       first
#define S       second
#define ins     insert
#define el      "\n"
#define ell     cout<<el
#define sp      " "
#define all(x)  x.begin(),x.end()
#define cg      cout<<"||"
#define setp(x) fixed<<setprecision(x)
#define dbg(x)  cout<< #x <<": "<<x<<" ";

template<typename T, typename U> static inline void amin(T &x, U y){ if(y<x) x=y; }
template<typename T, typename U> static inline void amax(T &x, U y){ if(x<y) x=y; }
 
mt19937 rng (chrono::high_resolution_clock::now().time_since_epoch().count());
template <typename A, typename B> ostream& operator<< (ostream &cout, pair<A, B> const &p) { return cout << "{" << p.first << "," << p.second << "}"; }
template <typename A> ostream& operator<< (ostream &cout, vector<A> const &v) {cout << "["; {
int i = 0;
for ( ; i < v.size(); ) 
{if (i) cout << ","; cout << v[i];	i++; 

}} return cout << "]";}
template <typename A, typename B> istream& operator>> (istream& cin, pair<A, B> &p) {cin >> p.first; return cin >> p.second;}
template <typename A> istream& operator>> (istream& cin, vector<A> &x){{
int i = 0;
for ( ; i < x.size()-1; ) 
{
cin >> x[i];
i++; 

}} return cin >> x[x.size()-1];}


ll segscore(vl &v,ll ind){
    ll rn=0;ll n=v.size();
    {
    ll j=ind-1;
    for ( ; j<=ind+1; ) 
{
        if(j>0 and j<(n-1) and v[j]>v[j-1] and v[j]>v[j+1]){
            rn++;
        }
        else if(j>0 and j<(n-1) and v[j]<v[j-1] and v[j]<v[j+1]){
            rn++;
        }
    	j++; 
    
    }}
    return rn;
}

signed main(){
    // fast io
    
    cin.tie(NULL);cout.tie(NULL);ll i,j,k;
    ll jodd=1;
    cin>>jodd;
    for ( ; jodd--; ) 
{
        ll n;cin>>n;
        vl v(n);
        {
        i=0;
        for ( ; i<n; ) 
{
            cin>>v[i];
        	i++; 
        
        }}
        ll sc=0;
        vector <char> sta(n,'N');
        {
        i=1;
        for ( ; i<=n-2; ) 
{
            // dbg(i);dbg(v[i-1]);dbg(v[i]);dbg(v[i+1]);ell;
            if(v[i]>v[i-1] and v[i]>v[i+1]){
                sc++;
            }
            else if(v[i]<v[i-1] and v[i]<v[i+1]){
                sc++;
            }
        	i++; 
        
        }}
        // dbg(sta);ell;
        ll ans=sc;
        {
        i=1;
        for ( ; i<=n-2; ) 
{
            ll mid=v[i];
            ll rn=segscore(v,i);
            ll tot=sc-rn;
            ll left=v[i-1];
            ll right=v[i+1];
            v[i]=min(left,right);
            ll ns1=segscore(v,i);
            v[i]=max(left,right);
            ll ns2=segscore(v,i);
            ll ns=min(ns1,ns2);
            tot+=ns;
            ans=min(tot,ans);
            // dbg(i);dbg(rn);dbg(left);dbg(right);dbg(v[i]);dbg(ns);dbg(tot);dbg(ans);ell;
            v[i]=mid;
        	i++; 
        
        }}
        cout<<ans<<el;
    }
}