#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

#define ll long long
#define pb push_back

void solve(){
    ll n,k;
    cin>>n>>k;
    ll ans = 0;
    ll curr = 1;
    ll mod = 1e9+7;
    for(int i=0;i<=30;i++)/* 'for' inside */
    {
        /* 'if' begin */
        if(k&(1<<i))/* 'if' inside */
        {
            ans = (ans+curr)%mod;
        }
        curr = (curr*n)%mod;
    }
    cout<<ans<<"\n";
}

int main(){
    int t = 1;
    cin>>t;
    while(t-->0){
        solve();
    }
}