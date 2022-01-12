#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

#define ll long long
#define pb push_back

void a(){
    ll n,k;
    cin>>n>>k;
    ll ans = 0;
    ll curr = 1;
    ll mod = 1e9+7;
    for(int fa=0;fa<=30;fa++){
        if(k&(1<<fa)){
            ans = (ans+curr)%mod;
        }
        curr = (curr*n)%mod;
    }
    cout<<ans<<"\n";
}

int main(){
    int hcm_guu = 1;
    cin>>hcm_guu;
    while(hcm_guu-->0){
        a();
    }
}