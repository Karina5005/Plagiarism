#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define e endl
#define vll vector<ll>
#define all(a) a.begin(),a.end()
#define f(i,a,b) for(ll i=a; i<b; i++)

void z_btl(){
    string vjx_bw;
    cin>>vjx_bw;
    int o_but = 0;
    f(i,0,s.size()){
        if(vjx_bw[i]=='N'){
            o_but++;
        }
    }
    if(o_but==1){
        cout<<"NO"<<e;
    }
    else
        cout<<"YES"<<e;
}
 
int main()
{
    int auo_dy; cin>>auo_dy;
    while(auo_dy--){
        z_btl();
    }
    return 0;
}