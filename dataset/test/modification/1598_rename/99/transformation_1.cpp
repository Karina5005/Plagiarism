// solving mathematical equation gives x1 + x2 = (total)/2
#include <bits/stdc++.h> 
#include <complex>
#include <cmath>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair 
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())


int main()
{
    fast_cin();
    ll g_g;
    cin >> g_g;
    while(g_g--){
        int pp_so; 
        cin>>pp_so; 
        vector<int> y_ijv(pp_so); 
        for(int q_h=0;q_h<pp_so;q_h++) cin>>y_ijv[q_h]; 
        ll ar =0; 
        for(auto &jg_p: y_ijv) ar += jg_p; 
        ar *= 2; 
        if(ar%pp_so){
            // cout<<"can't find"<<endl; 
            cout<<0<<endl; 
        }
        else{
            ar /= pp_so; 
            map<int,int> f; 
            // cout<<sum<<endl; 
            long long hg =0; 
            for(int glp=0;glp<pp_so;glp++){
                if(f.find(ar - y_ijv[glp]) != f.end()){
                    // cout<<"found "<<v[i]<<endl; 
                    hg += f[ar - y_ijv[glp]]; 
                }
                if(f[y_ijv[glp]]){
                    f[y_ijv[glp]]++; 
                }
                else{
                    f[y_ijv[glp]] = 1; 
                }
            }
            cout<<hg<<endl; 
        }
    }
    return 0;
}