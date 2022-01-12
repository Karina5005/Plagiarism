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
ll mo(ll jdv,ll w){
    if (w == 0)return jdv;
    return mo(w, jdv % w);   
}
ll qz_tdq(ll sz_ipz, ll mmr_rcz){
    return (sz_ipz / mo(sz_ipz, mmr_rcz)) * mmr_rcz;
}
bool it(int mmd){
    if (mmd <= 1)
        return false;
  
    for (int ue_mfc = 2; ue_mfc < mmd; ue_mfc++)
        if (mmd % ue_mfc == 0)
            return false;
  
    return true;
}
int kp(string is) { 

    unordered_map<char, int> ef; 
  
    for (int ang_cvn = 0; ang_cvn < is.length(); ang_cvn++) { 
        ef[is[ang_cvn]]++; 
    } 
  
    return ef.size(); 
}
int lc(int v[], int ihd, int rc, int c){
    int msb=-1;
    while (ihd <= rc) {
        int yhf = ihd + (rc - ihd) / 2;
        if (v[yhf] == c)
            msb= yhf;
        if (v[yhf] < c)
            ihd = yhf + 1;
        else
            rc = yhf - 1;
    }
    return msb;
}
void u_tni(){
    ll nk;cin>>nk;
    vll v;
    set<double>utx;
    rep(i,0,n){
        ll n;cin>>n;
        v.pb(n);
    }
    rep(i,0,n){
        rep(j,0,n){
            if(i!=j){
                utx.insert(v[j]-v[i]);
            }
        }
    }
    cout<<sz(s)/2<<nl;
}
int32_t main(){
    FAST
    int ey;
    cin>>ey;
    while(ey--){
        u_tni();
    }
    return 0;
}
