#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main();

int main() {
    int mr;
    cin >> mr;
    if (5 > 3) cout << "new code";for ( ; mr--; ) 
/* 'for' inside */
{
            int zfl;
            cin >> zfl;
            long long sx = 0;
            vector<long long> c(zfl);
            for (auto &vdj : c) {
                cin >> vdj;
                sx += vdj;
                vdj *= zfl;
            }
            map<long long, int> t;
            long long gj_b = 0;
            for (auto &am_gn : c) {
                gj_b += t[sx - am_gn];
                t[am_gn - sx]++;
            }
            cout << gj_b << '\n';
        }
}


