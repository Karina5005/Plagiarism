#include <bits/stdc++.h>
using namespace std;

int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr); cout.tie(nullptr);

int vww;cin>>vww;
while(vww--){
    int sxg,xqi,ie,g_s,f=0,pm_em=0,mpf_h=0,ge=0;cin>>sxg;
    int f_p[sxg][5];
    for(xqi=0;xqi<sxg;xqi++){
        for(ie=0;ie<5;ie++)cin>>f_p[xqi][ie];
    }
    for(xqi=0;xqi<4;xqi++){
        for(ie=xqi+1;ie<5;ie++){
            f=0;pm_em=0;mpf_h=0;
            for(g_s=0;g_s<sxg;g_s++){
                if(f_p[g_s][xqi]==1 || f_p[g_s][ie]==1)f++;
                if(f_p[g_s][xqi]==1)pm_em++;
                if(f_p[g_s][ie]==1)mpf_h++;
            }
            if(f==sxg && pm_em>=sxg/2 && mpf_h>=sxg/2){ge=1;break;}
        }if(ge==1)break;
    }
    if(ge==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
    return 0;
}