#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

void bz_ms() {
    int zbl;
    cin >> zbl;
    vector<int> vxj(zbl);
    for (int fpj_zz = 0; fpj_zz < zbl; fpj_zz++) vxj[fpj_zz] = fpj_zz + 1;
    for (int l = 0; l < zbl - 1; l += 2) swap(vxj[l], vxj[l + 1]);
    if (zbl & 1) swap(vxj[zbl - 1], vxj[zbl - 2]);
    for (auto bca_k : vxj) cout << bca_k << ' ';
    cout << '\n';
}

int main() {

#ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);

    int w; cin >> w;
    while (w--) bz_ms();

    return 0;
}
