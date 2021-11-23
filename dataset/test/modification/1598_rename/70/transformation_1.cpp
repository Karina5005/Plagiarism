#include<bits/stdc++.h>

using namespace std;

const int xik_l = 100010;

int exu_prp[xik_l][5];

int main(){
    int s_mql;
    cin >> s_mql;
    while(s_mql --){
        int p_lxz;
        cin >> p_lxz;
        for(int az = 0;az < p_lxz;az ++)
            for(int ue = 0;ue < 5;ue ++){
                cin >> exu_prp[az][ue];
            }
        int vbk = 0;
        for (int opr_fd = 0; opr_fd < 5; opr_fd++) {
            for (int yp = opr_fd + 1; yp < 5; yp++) {
                int d = 0;
                int vcd_joc = 0;
                int i = 0;
                for (int xr = 0; xr < p_lxz; xr++) {
                    if (exu_prp[xr][opr_fd] == 1 && exu_prp[xr][yp] == 1) {
                        i += 1;
                    } 
                    else {
                        if (exu_prp[xr][opr_fd] == 1) {
                            d += 1;
                        }
                        if (exu_prp[xr][yp] == 1) {
                            vcd_joc += 1;
                        }
                    }
                }
                if (d + vcd_joc + i == p_lxz && d + i >= p_lxz / 2 && vcd_joc + i >= p_lxz / 2) {
                    vbk = 1;
                }
            }
        }
        if(vbk == 1)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}