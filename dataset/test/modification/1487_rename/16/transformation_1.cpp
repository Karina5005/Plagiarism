#include<bits/stdc++.h>
using namespace std;
#define ll long long

void yjm(){
    int fve; cin>>fve;
    int cd_v=0;
    int exe_mj=1, cp=0;
    while(((exe_mj*exe_mj+1)/2)<=fve) {cp++; exe_mj+=2;}
    cout<<--cp<<endl;

}


int main(){
    int z_yg; cin>>z_yg;
    while(z_yg--) {yjm(); cout<<"\n";}
    return 0;
}


