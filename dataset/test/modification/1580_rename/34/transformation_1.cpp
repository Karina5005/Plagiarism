#include <bits/stdc++.h>
using namespace std;
#define sz(s) (int)s.size()
#define all(v) (v).begin(),(v).end()
#define fill(dp) memset(dp,-1,sizeof(dp))
#define input(vec) for (auto &el : vec) cin >> el;
#define print(vec) for (auto &el : vec) cout << el << " "; cout << "\n"; 
int ai,ddk,j[450][450];

void sdd_oyq() {
    cin>>ai>>ddk;
    vector<int>tj_ccb(ddk+1),y(ai+1);
    vector<pair<int,int>>pub_be;
    pub_be.push_back({0,0});
    for(int dx=0;dx<ai;dx++) {
        int khi_beh,ged;
        cin>>khi_beh>>ged;
        pub_be.push_back({khi_beh,ged});
    }
    int wj = 0;
    for(int mbx=1;mbx<=ddk;mbx++) {
        int f_ioa,nv_i;
        cin>>f_ioa>>nv_i;
        int d_o = pub_be[nv_i].first+pub_be[nv_i].second;
        if(f_ioa==1) {
            int ouz_h = mbx+pub_be[nv_i].first,v_v=mbx+d_o;
            y[nv_i] = mbx;
            if(d_o>=450LL) {
                while(ouz_h<=ddk) {
                    tj_ccb[ouz_h]++;
                    if(v_v<=ddk) tj_ccb[v_v]--;
                    ouz_h += d_o;
                    v_v += d_o;
                }
            }
            else {
                for(int av=ouz_h;av<v_v;av++) {
                    j[d_o][av%d_o]++;
                }
            }
        }
        else {
            int z_btl = y[nv_i]+pub_be[nv_i].first,vjx_bw=z_btl+pub_be[nv_i].second;
            if(d_o>=450LL) {
                while(z_btl<=ddk) {
                    if(mbx>=z_btl and mbx<vjx_bw) tj_ccb[mbx]--;
                    if(z_btl>mbx) tj_ccb[z_btl]--;
                    if(mbx<vjx_bw and vjx_bw<=ddk) tj_ccb[vjx_bw]++;
                    z_btl += d_o;
                    vjx_bw += d_o;
                }
            }
            else {
                for(int o_but=z_btl;o_but<vjx_bw;o_but++) {
                    j[d_o][o_but%d_o]--;
                }
            }
        }
        wj += tj_ccb[mbx];
        int auo_dy = 0;
        for(int g=1;g<450;g++) {
            auo_dy += j[g][mbx%g];
        }
        cout<<wj+auo_dy<<"\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int h=1;
    //cin>>testcases;
    while(h--) sdd_oyq();
    return 0;
}