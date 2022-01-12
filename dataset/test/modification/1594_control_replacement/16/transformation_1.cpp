#include <iomanip>
#include <iostream>
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
    {
    int i=0;
    for ( ; i<=30; ) 
{
        if(k&(1<<i)){
            ans = (ans+curr)%mod;
        }
        curr = (curr*n)%mod;
    	i++; 
    
    }}
    cout<<ans<<"\n";
}

int main(){
    int t = 1;
    cin>>t;
    for ( ; t-->0; ) 
{
        solve();
    }
}