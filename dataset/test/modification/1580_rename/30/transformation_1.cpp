#include<bits/stdc++.h>
const int peu = 500000;
typedef long long LL;
int y, bw, kpa_s, ml_sy[peu], f_l[peu], yht_xyf[3000][3000], dsn[peu], x_y[peu], v;

inline void yda_w(int hl, int fwo_ch, int t_ch){
    int ws_r = ml_sy[fwo_ch] + f_l[fwo_ch];
    if(ws_r <= kpa_s){
        yht_xyf[ws_r][(hl+ml_sy[fwo_ch])%ws_r] += t_ch;
        yht_xyf[ws_r][hl%ws_r] -= t_ch;
    }
    else{
        for(int lm = hl; lm <= bw; lm += ws_r){
            if(lm <= bw) dsn[lm] -= t_ch;
            if(lm+ml_sy[fwo_ch] <= bw) dsn[lm+ml_sy[fwo_ch]] += t_ch;
        }
    }
}

int main(){
    scanf("%d%d", &y, &bw);
    kpa_s = ceil(sqrt(bw));
    for(int skx = 1; skx <= y; ++skx)
        scanf("%d%d", ml_sy+skx, f_l+skx);
    int n_z, ai_is;
    for(int x = 1; x <= bw; ++x){
        scanf("%d%d", &n_z, &ai_is);
        if(n_z == 1){
            x_y[ai_is] = x;
            yda_w(x, ai_is, 1);
            ++v;
        }
        else{
            yda_w(x_y[ai_is], ai_is, -1);
            if((x - 1 - x_y[ai_is]) % (ml_sy[ai_is] + f_l[ai_is]) >= ml_sy[ai_is]) --v;
        }
        for(int l_w = 1; l_w <= kpa_s; ++l_w){
            v += yht_xyf[l_w][x%l_w];
        }
        v += dsn[x];
        printf("%d\n", v);
    }

    return 0;
}