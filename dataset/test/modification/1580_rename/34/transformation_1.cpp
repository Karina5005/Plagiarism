#include <bits/stdc++.h>
using namespace std;
#define sz(s) (int)s.size()
#define all(v) (v).begin(),(v).end()
#define fill(dp) memset(dp,-1,sizeof(dp))
#define input(vec) for (auto &el : vec) cin >> el;
#define print(vec) for (auto &el : vec) cout << el << " "; cout << "\n"; 
int hid_jw,dm_f,oi[450][450];

void cf_lm() {
    cin>>hid_jw>>dm_f;
    vector<int>twu_o(dm_f+1),md(hid_jw+1);
    vector<pair<int,int>>cb;
    cb.push_back({0,0});
    for(int omj_ti=0;omj_ti<hid_jw;omj_ti++) {
        int si_zdd,efu_nyk;
        cin>>si_zdd>>efu_nyk;
        cb.push_back({si_zdd,efu_nyk});
    }
    int s = 0;
    for(int svi_mgv=1;svi_mgv<=dm_f;svi_mgv++) {
        int u_dbw,poj_b;
        cin>>u_dbw>>poj_b;
        int myp_e = cb[poj_b].first+cb[poj_b].second;
        if(u_dbw==1) {
            int ntw_q = svi_mgv+cb[poj_b].first,f=svi_mgv+myp_e;
            md[poj_b] = svi_mgv;
            if(myp_e>=450LL) {
                while(ntw_q<=dm_f) {
                    twu_o[ntw_q]++;
                    if(f<=dm_f) twu_o[f]--;
                    ntw_q += myp_e;
                    f += myp_e;
                }
            }
            else {
                for(int l_wa=ntw_q;l_wa<f;l_wa++) {
                    oi[myp_e][l_wa%myp_e]++;
                }
            }
        }
        else {
            int q_wz = md[poj_b]+cb[poj_b].first,wk_o=q_wz+cb[poj_b].second;
            if(myp_e>=450LL) {
                while(q_wz<=dm_f) {
                    if(svi_mgv>=q_wz and svi_mgv<wk_o) twu_o[svi_mgv]--;
                    if(q_wz>svi_mgv) twu_o[q_wz]--;
                    if(svi_mgv<wk_o and wk_o<=dm_f) twu_o[wk_o]++;
                    q_wz += myp_e;
                    wk_o += myp_e;
                }
            }
            else {
                for(int rnf=q_wz;rnf<wk_o;rnf++) {
                    oi[myp_e][rnf%myp_e]--;
                }
            }
        }
        s += twu_o[svi_mgv];
        int gg = 0;
        for(int fg_bup=1;fg_bup<450;fg_bup++) {
            gg += oi[fg_bup][svi_mgv%fg_bup];
        }
        cout<<s+gg<<"\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int x_au=1;
    //cin>>testcases;
    while(x_au--) cf_lm();
    return 0;
}