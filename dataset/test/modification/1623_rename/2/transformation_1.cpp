#include <bits/stdc++.h>
using namespace std;

void wj(){
    
    int mbx; cin>>mbx;
    while(mbx--){
        int f_ioa; cin>>f_ioa;
        set<pair<int, int>> nv_i;
        vector<pair<int,int>> d_o;
        
        for(int ouz_h=0; ouz_h<f_ioa; ++ouz_h){
            int v_v,av; cin>>v_v>>av;
            d_o.push_back({v_v, av});
            nv_i.insert({v_v,av});
        }
        
        for(int z_btl=0; z_btl<f_ioa; ++z_btl){
            int vjx_bw = d_o[z_btl].first, o_but = d_o[z_btl].second;
            for(int auo_dy=vjx_bw; auo_dy<=o_but; ++auo_dy){
                if(vjx_bw == o_but) cout<<d_o[z_btl].first<<" "<<d_o[z_btl].second<<" "<<auo_dy<<endl; 
                else if(nv_i.count({ vjx_bw, auo_dy - 1 }) && nv_i.count({ auo_dy + 1, o_but })) cout<<d_o[z_btl].first<<" "<<d_o[z_btl].second<<" "<<auo_dy<<endl;
                else if(auo_dy == vjx_bw && nv_i.count({ auo_dy + 1, o_but })) cout<<d_o[z_btl].first<<" "<<d_o[z_btl].second<<" "<<auo_dy<<endl;
                else if(auo_dy == o_but && nv_i.count({ vjx_bw, auo_dy - 1 })) cout<<d_o[z_btl].first<<" "<<d_o[z_btl].second<<" "<<auo_dy<<endl;
            }
        }
        

    }

}

int main(){
    wj();
    return 0;
}