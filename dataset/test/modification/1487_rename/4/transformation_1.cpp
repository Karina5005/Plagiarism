#include<bits/stdc++.h>
#include <unordered_map>


using namespace std;

vector<string> khi_beh(101);

void ged(){
    for(int wj = 2; wj <= 100; ++wj){
        int mbx = wj - 1;
        if(mbx % 2 == 0){
            string f_ioa, nv_i;
            f_ioa.reserve(200), nv_i.reserve(200);

            for(int d_o = 0 ; d_o < mbx / 2 ; ++d_o){
                f_ioa = f_ioa + "1";
                nv_i = nv_i + "2";
            }
            string ouz_h = f_ioa + nv_i ;

            while(ouz_h.size() > 0){
                for(int v_v = 0 ; v_v < ouz_h.size() ; ++v_v){
                    if(ouz_h[v_v] == '2'){
                        khi_beh[wj] = khi_beh[wj] + "-1 ";
                    }
                    else
                        khi_beh[wj] = khi_beh[wj] + ouz_h[v_v] + " ";
                }
                ouz_h.pop_back();
            }

        }
        else{
             string av, z_btl, vjx_bw = "0";
            av.reserve(200), z_btl.reserve(200);

            for(int o_but = 0 ; o_but < mbx / 2; ++o_but){
                av = av + "1";
                z_btl = z_btl + "2";
            }
            string auo_dy = av + vjx_bw  + z_btl;

            while(auo_dy.size() > 0){
               for(int g = 0 ; g < auo_dy.size() ; ++g){
                    if(auo_dy[g] == '2'){
                        khi_beh[wj] = khi_beh[wj] + "-1 ";
                    }
                    else
                        khi_beh[wj] = khi_beh[wj] + auo_dy[g] + " ";
                }
                auo_dy.pop_back();
            }
        }
    }
}

void h(){
  int gaz_qdk;
  cin >> gaz_qdk;
  cout << khi_beh[gaz_qdk] << "\n";
}

int main(){
    ged();
    int fl = 1;
    cin >> fl;
    int pnu_al = 0;
    while(fl--){ 
        ++pnu_al;
        if(pnu_al == 43){

        }
        h();
    }
}