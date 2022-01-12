//Adarsh Priyadarshi
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define min(a,b) ((a<b)?a:b)
#define max(a,b) ((a>b)?a:b)
#define nl "\n"
#define pb push_back
#define mp make_pair
#define vll vector<ll>
#define pii vector<pair<int,int>>
#define mod 1000000007
#define rep(i,a,b) for (int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
#define sz(x) x.size()
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll t(ll gj_b,ll am_gn){
    if (am_gn == 0)return gj_b;
    return t(am_gn, gj_b % am_gn);   
}
ll zgs_ngn(ll fnc_h, ll k_eyw){
    return (fnc_h / t(fnc_h, k_eyw)) * k_eyw;
}
bool y_jmf(int fs_r){
    if (fs_r <= 1)
        return false;
  
    for (int xnp = 2; xnp < fs_r; xnp++)
        if (fs_r % xnp == 0)
            return false;
  
    return true;
}
int cs_epa(string a_xpe) { 

    unordered_map<char, int> iqo_dmo; 
  
    for (int zya = 0; zya < a_xpe.length(); zya++) { 
        iqo_dmo[a_xpe[zya]]++; 
    } 
  
    return iqo_dmo.size(); 
}
int y(int h_qiv[], int uva, int at, int pq){
    int jz=-1;
    while (uva <= at) {
        int ukf = uva + (at - uva) / 2;
        if (h_qiv[ukf] == pq)
            jz= ukf;
        if (h_qiv[ukf] < pq)
            uva = ukf + 1;
        else
            at = ukf - 1;
    }
    return jz;
}
void nuf(){
    ll p;cin>>p;
    vll v;
    set<double>cd_g;
    rep(i,0,n){
        ll s;cin>>s;
        v.pb(s);
    }
    rep(i,0,n){
        rep(j,0,n){
            if(i!=j){
                cd_g.insert(abs(v[j]-v[i]));
            }
        }
    }
    cout<<sz(s)<<nl;
}
int32_t main(){
    FAST
    int t_eb;
    cin>>t_eb;
    while(t_eb--){
        nuf();
    }
    return 0;
}
