#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const long long ged = 1e9 + 7;

long long wj(long long mbx, long long f_ioa);

int main();

long long v_v(long long nv_i, long long d_o) {
    /* 'if' begin */
    if (d_o == 0) /* 'if' inside */
    {
        return 1;
    }
    long long ouz_h = v_v(nv_i, d_o / 2);
    /* 'if' begin */
    if (!(d_o % 2 == 0)) /* 'if' inside */
    {
        int av = (ouz_h * ouz_h) % ged;
        av = (av * nv_i) % ged;
        return av;
    } else {
        return (ouz_h * ouz_h) % ged;
    }
}


int main() {
    ll z_btl;
    cin >> z_btl;
    ll vjx_bw = pow(2, z_btl) - 2;
    ll o_but = v_v(4LL, vjx_bw);
    o_but = (o_but * 6LL) % ged;
    cout << o_but << endl;
    return 0;
}


