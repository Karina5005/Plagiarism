#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
#define endl '\n'
using namespace std;
const int M=1e9+7;
vector<int>prime(1000001);
ll mod(ll x){
    return ((x%M+M)%M);
}
ll add(ll a,ll b){
    return mod(mod(a)+mod(b));
}
ll mul(ll a,ll b){
    return mod(mod(a)*mod(b));
}
ll power(ll a,ll b){
    ll res=1;
    for ( ; b; ) 
{
        if(b&1){
            res=mod((res*a));
        }
        b=b>>1;
        a=mod(a*a);
    }
    //cout<<res;
    return res;
    
}
void solve(){
    int k;cin>>k;
    unsigned long long  int t=pow(2,k)-1;
   // cout<<t;
    cout<<mod(6*mod(power(4,t-1)));
    
}
int main(){
    
    cin.tie(NULL);    
    #ifndef ONLINE_JUDGE
    freopen("input_tarun.txt","r",stdin);
    freopen("output_kumar.txt","w",stdout);
    #endif
 //   precalculate();
 solve();
}