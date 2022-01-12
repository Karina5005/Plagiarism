#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef pair<double,double> pd;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll> > vvl;
typedef vector<pl> vpl;
typedef vector<pi> vpi;
#define fl(i,a,b) for(ll i = a; i < b; i++)
#define fr(i,a,b) for(ll i = a; i >=b; i--)
#define mp make_pair
#define pb push_back
#define all(v) v.begin(),v.end()
#define trav(v,i) for (auto i = v.begin(); i != v.end(); i++)
#define f(c, x)(c.find(x) != c.end())
#define f1(c, x)(find(all(c), x) != c.end())
#define inf 2e15
#define mod 1e9+7
#define in(arr,z) for(ll i=0; i<z; i++) cin>>arr[i]
#define out(arr,z) for(ll i=0; i<z; i++) cout<<arr[i]<<' ' 

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll max=LONG_LONG_MIN,min=LONG_LONG_MAX;
        ll k;
        fl(i,0,n){
            cin>>k;
            if(k>max)
                max=k;
            if(k<min)
                min=k;
        }
        cout<<max-min<<endl;
    }
    return 0;
}