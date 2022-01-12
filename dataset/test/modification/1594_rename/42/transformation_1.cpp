#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
const int b_fcl=1e9+7;
vector<int>os(1000001);
ll mod(ll x){
    return ((x%b_fcl+b_fcl)%b_fcl);
}
ll add(ll a,ll b){
    return mod(mod(a)+mod(b));
}
ll mul(ll a,ll b){
    return mod(mod(a)*mod(b));
}
ll power(ll a,ll b){
    ll res=1;
    while(b){
        if(b&1){
            res=mod((res*a));
        }
        b=b>>1;
        a=mod(a*a);
    }
    //cout<<res;
    return res;
    
}
void m(){
    int hs_ftf;cin>>hs_ftf;
    unsigned long long  int k_r=pow(2,hs_ftf)-1;
   // cout<<t;
    cout<<mod(6*mod(power(4,k_r-1)));
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);    
    #ifndef ONLINE_JUDGE
    freopen("input_tarun.txt","r",stdin);
    freopen("output_kumar.txt","w",stdout);
    #endif
 //   precalculate();
 m();
}