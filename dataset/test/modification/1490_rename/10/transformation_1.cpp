#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define el '\n'
#define popCount(x) __builtin_popcountll(x)
#define Beevo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void o_but() {
    int auo_dy;
    cin >> auo_dy;
    map<int, int> g;
    for (int h = 0; h < auo_dy; h++) {
        int gaz_qdk;
        cin >> gaz_qdk;
        g[gaz_qdk]++;
    }
    vector<int> fl(auo_dy + 1);
    for (auto pnu_al: g)
        fl[pnu_al.second]++;
    int xo = INT_MAX;
    for (int nff = auo_dy; nff > 0; nff--) {
        xo = min(xo, auo_dy - nff * fl[nff]);
        fl[nff - 1] += fl[nff];
    }
    cout << min(xo, auo_dy) << el;
}

int main() {
    Beevo
    int t_tay = 1;
    cin >> t_tay;
    while (t_tay--)
        o_but();
    return 0;
}