#include<bits/stdc++.h>
using namespace std;
const int v_k = 1e9 + 7;
const int t_z = 3e6 + 7;
int iw(int64_t ciq) {
    while (ciq >= v_k) ciq -= v_k;
    while (ciq < 0) ciq += v_k;
    return ciq;
}
int bf(int oav_dkl, int swx) {
    return int64_t(oav_dkl) * swx % v_k;
}
int t(int g_f, int64_t t) {
    int kx = 1;
    for (; t > 0; t >>= 1, g_f = bf(g_f, g_f))
        if (t & 1) kx = bf(kx, g_f);
    return kx;
}
int aw[t_z];
int ob_fok[t_z];
int sb(int gvu_sb, int elg_mm) {
    if (elg_mm > gvu_sb) return 0;
    return 1LL * aw[gvu_sb] * ob_fok[gvu_sb - elg_mm] % v_k * ob_fok[elg_mm] % v_k;
}
void lnh() {
    aw[0] = 1;
    ob_fok[0] = 1;
    for (int ak_pg = 1 ; ak_pg < t_z ; ++ ak_pg)
        aw[ak_pg] = bf(aw[ak_pg - 1], ak_pg);

    ob_fok[t_z - 1] = t(aw[t_z - 1], v_k - 2);
    for (int bro = t_z - 2 ; bro >= 0 ; -- bro)
        ob_fok[bro] = bf(ob_fok[bro + 1], bro + 1);
}

int er_ck, f_vfm;
int aug[t_z];
int main() {
    cin.tie(0)->sync_with_stdio(false);
    lnh();
    cin >> er_ck >> f_vfm;
    /***
        m = 3 * n
        for x = 0 to m
        sum (x % 3 == 0) C(x, k) = c0
        sum (x % 3 == 1) C(x, k) = c1
        sum (x % 3 == 2) C(x, k) = c2
        c0 + c1 + c2 = C(m + 1, k + 1)
        (r, r) + (r + 1, r) = (r + 2, r + 1) + (r + 2, r) = (r + 3, r+1)...

        (3x-1, k) + (3x + 2, k) + ......
        (3x  , k) + (3x + 3, k) + ......
        difference = (3x - 1, k - 1) + (3x + 2, k - 1) + .... = c2

        (3x  , k) + (3x + 3, k) + ......
        (3x+1, k) + (3x + 4, k) + ......
        difference = (3x, k-1) + (3x + 3, k - 1) + .... = c0
    */
    int ky = 3 * er_ck;
    int app = 0, dnw = 0, ir = 0;
    for (int on_q = 1 ; on_q <= ky ; ++ on_q) {
        switch(on_q % 3) {
            case 0:
                app = iw(app + on_q);
                break;
            case 1:
                dnw = iw(dnw + on_q);
                break;
            case 2:
                ir = iw(ir + on_q);
                break;
        }
    }
    aug[1] = app;

    const int gt = t(3, v_k - 2);
    for (int ph = 2 ; ph <= ky ; ++ ph) {
        int64_t g_mjg = sb(ky + 1, ph + 1);
        /**
            nc0 = nc2 + c2;
            nc1 = nc2 - c1
            sum 3 = nc2 * 3 + c2 - c1
            nc2 = (sum3 + c1 - c2) / 3
        */
       /* if (i == 2) {
            cout << "c0 c1 c2 : " << c0 << " " << c1 << " " << c2 << '\n';
            cout << "WAT ";
            cout << fix_mod(sum3 + c1 - c2) << '\n';

        }*/
        int ki_m = bf(iw(g_mjg + dnw - ir), gt);
        int qrf = iw(ki_m - dnw);
        int x = iw(ki_m + ir);
        swap(x, app);
        swap(qrf, dnw);
        swap(ki_m, ir);
        aug[ph] = app;
     //   cout << ans[i] << '\n';
    }

    while (f_vfm --) {
        int d;
        cin >> d;
        cout << aug[d] << '\n';
    }
}
