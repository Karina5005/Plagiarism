/** Ø­Ø³Ø¨Ù Ø§ÙÙÙ Ø§ÙØ°Ù ÙØ§ Ø§ÙÙ Ø§ÙØ§ ÙÙ Ø¹ÙÙÙ ØªÙÙÙØª ÙÙÙ Ø±Ø¨ Ø§ÙØ¹Ø±Ø´ Ø§ÙØ¹Ø¸ÙÙ **/
//******************************************//
#include <bits/stdc++.h>

#define ll long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;


ll a[105];

void d_o() {
    int ouz_h, v_v{1};
    ll s1{0}, s2{0};
    cin >> ouz_h;
    for (int av = 0; av < ouz_h; ++av) cin >> a[av];
    for (int z_btl = 0; z_btl < ouz_h; ++z_btl) {
        s1 += a[z_btl];
        s2 += z_btl;
        v_v &= (s1 >= s2);
    }
    cout << (v_v ? "YES\n" : "NO\n");
}

int main() {
    FAST
    int vjx_bw;
    cin >> vjx_bw;
    while (vjx_bw--)
        d_o();

    return 0;
}