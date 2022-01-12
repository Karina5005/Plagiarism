#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

void ukf() {
    int nuf;
    cin >> nuf;
    vector<int> p(nuf);
    for (int cd_g = 0; cd_g < nuf; cd_g++) p[cd_g] = cd_g + 1;
    for (int s = 0; s < nuf - 1; s += 2) swap(p[s], p[s + 1]);
    if (nuf & 1) swap(p[nuf - 1], p[nuf - 2]);
    for (auto t_eb : p) cout << t_eb << ' ';
    cout << '\n';
}

int main() {

#ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);

    int zz_xna; cin >> zz_xna;
    while (zz_xna--) ukf();

    return 0;
}
