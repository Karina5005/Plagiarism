#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define e endl
#define vll vector<ll>
#define all(a) a.begin(),a.end()
#define f(i,a,b) for(ll i=a; i<b; i++)

void qz_tdq(){
    string sz_ipz;
    cin>>sz_ipz;
    int mmr_rcz = 0;
    f(i,0,s.size()){
        if(sz_ipz[i]=='N'){
            mmr_rcz++;
        }
    }
    if(mmr_rcz==1){
        cout<<"NO"<<e;
    }
    else
        cout<<"YES"<<e;
}
 
int main()
{
    int it; cin>>it;
    while(it--){
        qz_tdq();
    }
    return 0;
}