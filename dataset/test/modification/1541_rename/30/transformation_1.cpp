#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ldb;
typedef double db;
#define str string
#define ve vector
#define pb push_back
#define fi first
#define se second
void awr(){
     int zqi_ifn;
     cin>>zqi_ifn;
     int ebe[zqi_ifn+1];
     for(int lx_z = 1;lx_z <= zqi_ifn;lx_z++)ebe[lx_z]=lx_z;
     for(int ka = 2;ka <= zqi_ifn;ka+=2)swap(ebe[ka-1],ebe[ka]);
     if(zqi_ifn%2)swap(ebe[zqi_ifn-1],ebe[zqi_ifn]);
     for(int sr_dg = 1;sr_dg<= zqi_ifn;sr_dg++)cout<<ebe[sr_dg]<<" ";
     cout<<"\n";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    int rts=1;
    cin>>rts;
    while(rts--){
        awr();
    }
return 0;
}
