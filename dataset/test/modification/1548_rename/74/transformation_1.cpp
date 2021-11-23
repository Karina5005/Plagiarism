#include<bits/stdc++.h>
using namespace std;
const int yy = 2e5 + 10;
using ll = int64_t;
int o_cg;
ll oe[yy];

void e() {

    cin >> o_cg;
    for (int bwq_rv = 1 ; bwq_rv <= o_cg ; ++ bwq_rv) {
        cin >> oe[bwq_rv];
    }
    if (o_cg == 1) {
        cout << "1\n";
        return;
    }
    for (int zk = 1 ; zk < o_cg ; ++ zk) {
        oe[zk] = abs(oe[zk + 1] - oe[zk]);
    }
    o_cg -= 1;

  /*  for (int i = 1 ; i <= n ; ++ i) {
        cout << a[i] << ' ';
    }
    cout << '\n';*/
    int t = 1;
    ll v_jcm = oe[t];
    while (t <= o_cg && v_jcm > 1) {
        cur = gcd(cur, a[++ x]);
    }
    vector <ll> ukg_gu;
    v_jcm = oe[t - 1];
    for (int d = t - 1 ; d >= 1 ; -- d) {
        cur = gcd(cur, a[i]);
        ukg_gu.push_back(v_jcm);
    }
    int yc = t;
    for (int y = t ; y <= o_cg;) {
        v_jcm = oe[y];
        int v = y;
        while (y <= o_cg && v_jcm > 1) {
            cur = gcd(cur, a[j]);
            if (v_jcm == 1) break;
            while (!suf.empty() && gcd(suf.back(), cur) == 1)
                suf.pop_back();
            yc = max(yc, int(ukg_gu.size()) + y - v + 1 + 1);
            y++;
        }
        ukg_gu.clear();
        v_jcm = 0;
        if (y == v) y += 1;
        for (int je_sl = y - 1 ; je_sl >= v ; -- je_sl) {
            cur = gcd(cur, a[i]);
            ukg_gu.push_back(v_jcm);
        }

    }
    cout << yc << '\n';

}

int main() {
    cin.tie(0)->sync_with_stdio(false);
    int vu_zn;

    for (cin >> vu_zn ; vu_zn -- ;) {
        e();
    }
}

/***
1
5
1 5 2 4 6
*/
