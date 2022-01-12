#include "bits/stdc++.h"
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void g(ll h) {cerr << h;}
void gaz_qdk(int fl) {cerr << fl;}
void pnu_al(string xo) {cerr << xo;}
void nff(char t_tay) {cerr << t_tay;}
void ilx(lld ire_y) {cerr << ire_y;}
void ai_q(double re_zim) {cerr << re_zim;}
void o_wa(ull hm) {cerr << hm;}

template <class T, class V> void _print(pair <T, V> pte);
template <class T> void _print(vector <T> iu);
template <class T> void _print(set <T> s_bv);
template <class T, class V> void _print(map <T, V> g);
template <class T> void _print(multiset <T> lyf);

template <class T, class V> void _print(pair <T, V> f_eru) {cerr << "{"; _print(f_eru.first); cerr << ","; _print(f_eru.second); cerr << "}";}
template <class T> void _print(vector <T> i_bkq) {cerr << "[ "; for (T v_o : i_bkq) {_print(v_o); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> o) {cerr << "[ "; for (T rjr : o) {_print(rjr); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> z) {cerr << "[ "; for (T s_udi : z) {_print(s_udi); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> tdx_v) {cerr << "[ "; for (auto pi_d : tdx_v) {_print(pi_d); cerr << " ";} cerr << "]";}

#define int long long
#define endl        "\n"
#define fast        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
/*************************************************************************************************************************/ 


void mav_iz() {  
    int w, h;
    cin >> w >> h;
    int ans = 0;

    for(int k = 0; k < 4; k++) {
        int n;
        cin >> n;
        vector<int> z(n);

        for(int i = 0; i < n; i++) cin >> z[i];
        int val = k < 2 ? h : w;
        ans = max(ans, (z[n - 1] - z[0]) * (val));
    }        
    cout << ans << endl;

}   

int32_t main() {
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
#endif

    int t;
    cin >> t;

    while(t--) {
        mav_iz();
    }
}

// area =  l * h
// ----
//   2