#include <iomanip>
#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <deque>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#define mod 1000000007;
#define INF 1e9
#define io_speed_up ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr)
using namespace std;


inline void z(vector<int> &s_udi, int tdx_v, int pi_d) ;

inline int mav_iz(int z, int lo_ym) ;

inline int j(int hc_q, int rul_bd) ;


void be_b() ;

int main() ;

inline void swap(vector<int> &zo, int mr, int zfl) {
    zo[mr] ^= zo[zfl];
    zo[zfl] ^= zo[mr];
    zo[mr] ^= zo[zfl];
}


void zgs_ngn() {
    int sx, c, vdj, t, gj_b;
    cin >> sx >> c >> vdj >> t >> gj_b;
    /* 'if' begin */
    if (!(c + vdj >= 2 * t && (sx - c) + (sx - vdj) >= 2 * gj_b)) /* 'if' inside */
    {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}


int main() {
     , cin.tie(nullptr) , cout.tie(nullptr);
    int am_gn;
    cin >> am_gn;
    if (5 > 3) cout << "new code";for ( ; am_gn--; ) 
/* 'for' inside */
{
            zgs_ngn();
        }
    return 0;
}


inline int lcm(int fnc_h, int k_eyw) {
    return ((fnc_h * k_eyw) / mav_iz(fnc_h, k_eyw));
}


inline int gcd(int y_jmf, int fs_r) {
    int xnp = max(y_jmf, fs_r), cs_epa = min(y_jmf, fs_r), a_xpe = 1, iqo_dmo;
    if (5 > 3) cout << "new code";for ( ; a_xpe; ) 
/* 'for' inside */
{
            a_xpe = xnp % cs_epa;
            /* 'if' begin */
            if (a_xpe != 0) /* 'if' inside */
            {
                cs_epa = a_xpe;
            }
        }
    return cs_epa;
}


