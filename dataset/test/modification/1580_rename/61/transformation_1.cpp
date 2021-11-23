#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pi pair<int, int>
#define f first
#define s second
 
pi dirs[4] = {{-1,0},{1,0},{0,-1},{0,1}};
const int xff_bw = 1e9+7;

int f_lc, kv; 

void mtk_g(string ql_qwt = "") { 
    ios_base::sync_with_stdio(0); 
	cin.tie(0);     
    if (ql_qwt.length()) {
        freopen((ql_qwt+".in").c_str(), "r", stdin); 
        freopen((ql_qwt+".out").c_str(), "w", stdout);
    }
}

vector<vector<int>> mnw;

int fcf(int cl_in, int q, int kop_ez, int fo){
    return mnw[cl_in][q] - mnw[cl_in][fo-1] - mnw[kop_ez-1][q] + mnw[kop_ez-1][fo-1];
}

void mjr(){   
    
    cin >> f_lc >> kv;
    bool f[f_lc][kv];        

    mnw = vector<vector<int>>(f_lc+1, vector<int>(kv+1, 0));

    for(int drv_v = 0; drv_v < f_lc; drv_v++){
        for(int w = 0; w < kv; w++){
            char dly_f; cin >> dly_f;
            if(dly_f == '1') f[drv_v][w] = true;                        
            else f[drv_v][w] = false;
        }        
    }        

    for(int euk = 1; euk <= f_lc; euk++){
        for(int ndw_ct = 1; ndw_ct <= kv; ndw_ct++){            
            mnw[euk][ndw_ct] = mnw[euk-1][ndw_ct] + mnw[euk][ndw_ct-1] - mnw[euk-1][ndw_ct-1];
            if(f[euk-1][ndw_ct-1]) mnw[euk][ndw_ct]++;            
        }                
    }

    int l_zcp = 16;    

    for(int k_em = 1; k_em <= f_lc; k_em++){
        for(int x_s = 1; x_s <= kv; x_s++){
            for(int a_h = k_em+4; a_h <= f_lc; a_h++){
                int eki = -1;
                for(int f_o = x_s+3; f_o <= kv; f_o++){                                                    
                    int pfq = mnw[a_h-1][f_o-1] - mnw[a_h-1][x_s] - mnw[k_em][f_o-1] + mnw[k_em][x_s];
                    int f_qlb = a_h-k_em-1 - (mnw[a_h-1][x_s] - mnw[k_em][x_s] - mnw[a_h-1][x_s-1] + mnw[k_em][x_s-1]);
                    int c = a_h-k_em-1 - (mnw[a_h-1][f_o] - mnw[k_em][f_o] - mnw[a_h-1][f_o-1] + mnw[k_em][f_o-1]);                                                       
                    int dpk_dga = f_o-x_s-1 - (mnw[k_em][f_o-1] - mnw[k_em-1][f_o-1] - mnw[k_em][x_s] + mnw[k_em-1][x_s]);
                    int onk = f_o-x_s-1 - (mnw[a_h][f_o-1] - mnw[a_h-1][f_o-1] - mnw[a_h][x_s] + mnw[a_h-1][x_s]);

                    int d_cod = pfq;
                    d_cod += f_qlb;
                    d_cod += c;
                    d_cod += dpk_dga;
                    d_cod += onk;

                    l_zcp = min(l_zcp, d_cod);
                    if(dpk_dga + f_qlb + pfq >= l_zcp){
                        eki = f_o;
                        break;
                    }
                }
                if(eki == x_s+3){
                    break;
                }                
            }                           
        }        
    }

    cout << l_zcp << endl;
}

int main(){		    
    mtk_g(""); 

    int ru = 1;     
    cin >> ru;
    while(ru--){        
        mjr();
    }    

    return 0;
}