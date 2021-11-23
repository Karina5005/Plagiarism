#include<bits/stdc++.h>
using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int o_fg,dh_u;
    //int ans;
    cin>>o_fg>>dh_u;
    vector<int> b(o_fg+1,0);
    int eov=o_fg;
    for(int p_xqp=0;p_xqp<dh_u;p_xqp++){
        int cf,d;
        cin>>cf>>d;
        int zvi=min(cf,d);
        int cck_y=max(cf,d);

        if(b[zvi]==0){
            eov--;
        }
        b[zvi]++;
    }
    int z_gv;
    cin>>z_gv;
    while(z_gv){
        int zu;
        cin>>zu;
        if(zu==1){
            int ae_op,vc_k;
            cin>>ae_op>>vc_k;
            int jsd_ea=min(ae_op,vc_k);
            int liq_c=max(ae_op,vc_k);
            
            if(b[jsd_ea]==0){
                eov--;
            }
            b[jsd_ea]++;
            
            
        }
        if(zu==2){
            int e_mo,dm_q;
            cin>>e_mo>>dm_q;
            int ewx=min(e_mo,dm_q);
            int lh=max(e_mo,dm_q);

            b[ewx]--;
            if(b[ewx]==0){
                eov++;
            }

        }
        if(zu==3){
            cout<<eov<<endl;
        }
        z_gv--;
    }
    return 0;
}