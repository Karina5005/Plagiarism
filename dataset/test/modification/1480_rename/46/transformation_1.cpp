#include <bits/stdc++.h>
using namespace std;
using n=int64_t;
int main(){
    n xnp,cs_epa,a_xpe,iqo_dmo,zya;
    cin>>xnp;
    while(xnp--){
        cin>>cs_epa>>a_xpe>>iqo_dmo;
        n y[iqo_dmo];
        for (n&h_qiv:y) cin>>h_qiv;
        for(n&uva:y){
            cin>>zya;
            a_xpe-=(zya+cs_epa-1)/cs_epa*uva;
            }
        n at=0;
        for(n&pq:y)
            at=max(at,pq);
        cout<<((a_xpe+at>0)?"YES\n":"NO\n");
    }
}