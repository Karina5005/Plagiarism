#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


bool ij_cbh(int fje, int mng_hk, vector<int>& l_qy) {
    if(fje > mng_hk)
        swap(fje, mng_hk);

    bool idx = 0;
    if(!l_qy[fje])
        idx = 1;
    l_qy[fje]++;
    return idx;
}


bool du(int x_ugg, int x, vector<int>& q) {
    if(x_ugg > x)
        swap(x_ugg, x);

    q[x_ugg]--;
    bool f_w = 0;
    if(!q[x_ugg])
        f_w = 1;
    return f_w;
}

int main() {
    int il, dx_rv, cae, zab_v, hy_hm, v, eu;
    cin >> il >> dx_rv;
    vector<int> vd(il, 0);
    eu = il;
    for(int exc = 0; exc < dx_rv; exc++) {
        cin >> hy_hm >> v;
        hy_hm--; v--;
        if(ij_cbh(hy_hm, v, vd))
            eu--; 
    }
    cin >> cae;
    for(int q_gl = 0; q_gl < cae; q_gl++) {
        cin >> zab_v;
        if(zab_v == 1) {
            cin >> hy_hm >> v;
            hy_hm--; v--;
            if(ij_cbh(hy_hm, v, vd))
                eu--;
        } else if(zab_v == 2) {
            cin >> hy_hm >> v;
            hy_hm--; v--;
            if(du(hy_hm, v, vd))
                eu++;
        } else {
            cout << eu << endl;
        }
    }
    return 0;
}
