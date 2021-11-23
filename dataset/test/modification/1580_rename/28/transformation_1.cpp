#include<bits/stdc++.h>
const int fa = 500;
int wa, amm_r, vi, arv[2][fa][fa], ri_ez[fa], agl_d;
#define cal(t, x1, y1, x2, y2) (s[t][x2][y2] - s[t][x2][y1-1] - s[t][x1-1][y2] + s[t][x1-1][y1-1])

int main(){
    scanf("%d", &wa);
    while(wa--){
        scanf("%d%d", &amm_r, &vi);
        int e;
        memset(arv, 0, sizeof(arv));
        agl_d = 0x3f3f3f3f;
        for(int wg = 1; wg <= amm_r; ++wg){
            for(int ao_h = 1; ao_h <= vi; ++ao_h){
                scanf("%1d", &e);
                ++arv[e][wg][ao_h];
                arv[0][wg][ao_h] += arv[0][wg-1][ao_h] + arv[0][wg][ao_h-1] - arv[0][wg-1][ao_h-1];
                arv[1][wg][ao_h] += arv[1][wg-1][ao_h] + arv[1][wg][ao_h-1] - arv[1][wg-1][ao_h-1];
            }
        }
        for(int s = 1; s <= amm_r; ++s){
            for(int x_l = s+4; x_l <= amm_r; ++x_l){
                memset(ri_ez, 0x3f, sizeof(0x3f));
                for(int sly_dw = 1; sly_dw <= vi; ++sly_dw){
                    ri_ez[sly_dw] = ri_ez[sly_dw-1] + cal(0, xa, y-1, xa, y-1) + cal(0, xb, y-1, xb, y-1) + cal(1, xa+1, y-1, xb-1, y-1);
                    if(sly_dw >= 4) ri_ez[sly_dw] = std::min(ri_ez[sly_dw], cal(0, xa+1, y-3, xb-1, y-3) + cal(0, xa, y-2, xa, y-1) + cal(0, xb, y-2, xb, y-1) + cal(1, xa+1, y-2, xb-1, y-1));
                    agl_d = std::min(agl_d, ri_ez[sly_dw] + cal(0, xa+1, y, xb-1, y));
                }
            }
        }
        printf("%d\n", agl_d);
    }

}