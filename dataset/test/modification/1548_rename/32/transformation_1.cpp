#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <ctype.h>
#include <cmath>
#include <cstdio>
#include <set>
#include <iterator>
#include <queue>
#include <numeric>
#include <deque>
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

const int v_jjd = 1000000000;

bool csm(int peb_olc, int gab) {
    return peb_olc > gab;
}

ll gxb(ll azh, ll bol_v, ll& o_h, ll& ehz_mbu) {
    if (bol_v == 0) {
        o_h = 1;
        ehz_mbu = 0;
        return azh;
    }
    ll zo_dr = gxb(bol_v, azh % bol_v, o_h, ehz_mbu);
    o_h -= (azh / bol_v) * ehz_mbu;
    swap(o_h, ehz_mbu);
    return zo_dr;
}

ull pyz(ull sp, ull zk, ull p) {
    if (zk == 0) return 1;
    ull f_aas = pyz(sp, zk / 2, p);
    if (zk % 2 == 0)
        return (f_aas * f_aas) % p;
    else
        return (sp * f_aas % p * f_aas) % p;
}

vector<ll> ja_cv(ll br) {
    ll xtq_x = sqrt(br) + 1;
    vector<ll> a_c;
    for (ll d_ou = 1; d_ou < xtq_x; d_ou++) {
        if (br % d_ou == 0 && d_ou * d_ou != br) {
            a_c.pb(d_ou);
            a_c.pb(br / d_ou);
        }
        else if (br % d_ou == 0 && d_ou * d_ou == br) a_c.pb(d_ou);
    }
    return a_c;
}

vector<pair<ll, ll>> ii_i(int u) {
    vector<pair<ll, ll>> oz;
    for (int xt_xye = 2; xt_xye * xt_xye <= u; ++xt_xye) {
        if (u % xt_xye == 0) {
            oz.push_back({ xt_xye, 1 });
            u /= xt_xye;
        }
        while (u % xt_xye == 0) {
            oz.back().second++;
            u /= xt_xye;
        }
    }
    if (u > 1) oz.push_back({ u, 1 });
    return oz;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.setf(ios::fixed); cout.precision(0); //freopen("24.in", "r", stdin);

    ll rb_t, lxa, kt, ani_wj, s_e, y_p, qs_ne=0;
    cin >> rb_t >> lxa;
    vector<set<ll>> wba_lv(rb_t + 1);
    for (ll tyn_xjh = 1; tyn_xjh <= lxa; ++tyn_xjh) {
        cin >> kt >> ani_wj;
        wba_lv[kt].emplace(ani_wj);
        wba_lv[ani_wj].emplace(kt);
    }
    for (ll o_yw = 1; o_yw <= rb_t; ++o_yw) {
        if (wba_lv[o_yw].empty()) qs_ne++;
        else {
            auto frm_w = --wba_lv[o_yw].end();
            if (*frm_w < o_yw) qs_ne++;
        }
    }
    cin >> y_p;
    while (y_p--) {
        cin >> s_e;
        if (s_e == 3) {
            cout << qs_ne << endl;
            continue;
        }
        cin >> kt >> ani_wj;
        if (wba_lv[kt].empty()) qs_ne--;
        else {
            auto ynt = --wba_lv[kt].end();
            if (*ynt < kt) qs_ne--;
        }
        if (wba_lv[ani_wj].empty()) qs_ne--;
        else {
            auto q = --wba_lv[ani_wj].end();
            if (*q < ani_wj) qs_ne--;
        }
        if (s_e == 1) {
            wba_lv[kt].emplace(ani_wj);
            wba_lv[ani_wj].emplace(kt);
        }
        else {
            wba_lv[kt].erase(ani_wj);
            wba_lv[ani_wj].erase(kt);
        }
        if (wba_lv[kt].empty()) qs_ne++;
        else {
            auto mg = --wba_lv[kt].end();
            if (*mg < kt) qs_ne++;
        }
        if (wba_lv[ani_wj].empty()) qs_ne++;
        else {
            auto o = --wba_lv[ani_wj].end();
            if (*o < ani_wj) qs_ne++;
        }
    }
}
