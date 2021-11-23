#include<bits/stdc++.h>
const int vd = 500;
int z, u_sjh, ds, fj[2][vd][vd], y_cm[vd], z_ky;
#define cal(t, x1, y1, x2, y2) (s[t][x2][y2] - s[t][x2][y1-1] - s[t][x1-1][y2] + s[t][x1-1][y1-1])

int main(){
    scanf("%d", &z);
    while(z--){
        scanf("%d%d", &u_sjh, &ds);
        int x;
        memset(fj, 0, sizeof(fj));
        z_ky = 0x3f3f3f3f;
        for(int as_hil = 1; as_hil <= u_sjh; ++as_hil){
            for(int rre = 1; rre <= ds; ++rre){
                scanf("%1d", &x);
                ++fj[x][as_hil][rre];
                fj[0][as_hil][rre] += fj[0][as_hil-1][rre] + fj[0][as_hil][rre-1] - fj[0][as_hil-1][rre-1];
                fj[1][as_hil][rre] += fj[1][as_hil-1][rre] + fj[1][as_hil][rre-1] - fj[1][as_hil-1][rre-1];
            }
        }
        for(int xi = 1; xi <= u_sjh; ++xi){
            for(int czo_aca = xi+4; czo_aca <= u_sjh; ++czo_aca){
                memset(y_cm, 0x3f, sizeof(0x3f));
                for(int c = 1; c <= ds; ++c){
                    y_cm[c] = y_cm[c-1] + cal(0, xa, y-1, xa, y-1) + cal(0, xb, y-1, xb, y-1) + cal(1, xa+1, y-1, xb-1, y-1);
                    if(c >= 4) y_cm[c] = std::min(y_cm[c], cal(0, xa+1, y-3, xb-1, y-3) + cal(0, xa, y-2, xa, y-1) + cal(0, xb, y-2, xb, y-1) + cal(1, xa+1, y-2, xb-1, y-1));
                    z_ky = std::min(z_ky, y_cm[c] + cal(0, xa+1, y, xb-1, y));
                }
            }
        }
        printf("%d\n", z_ky);
    }

}