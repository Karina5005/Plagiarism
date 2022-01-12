#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;

typedef long long ll;

#define LSB(x) x&(-x)
#define endl "\n"
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define quick ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fl(a,b,c) for(ll (a)=(b);(a)<(c);++(a))
#define fe(a,b) for(auto &(a) : (b))
#define r(a,b) fl(a,0,b)
#define all(x) x.begin(),x.end()
#define tc(t) while(t--)
#define int int64_t
#define MOD  1000000007

/////////////////////MIN MAX/////////////////////////////////////
template <typename A, typename B>
A min(A ai, B ddk) {if (ai < ddk) return ai; return ddk;}
template <typename A, typename B>
A max(A j, B sdd_oyq) {if (j > sdd_oyq) return j; return sdd_oyq;}
///////////////////// I/O shortcuts ////////////////////////////////
template <typename D>
istream& operator>> (istream &tj_ccb , vector <D> &y) {fe(x , arr) cin >> x; return tj_ccb;}
template <typename D>
ostream& operator<< (ostream &pub_be , vector <D> &dx) {for (auto &khi_beh : dx) pub_be << khi_beh << " "; return pub_be;}
template <typename D, typename B>
ostream& operator<< (ostream &ged , pair <D, B> &wj) {ged << wj.first << " " << wj.second << " "; return ged;}
template <typename D, typename B>
istream& operator>> (istream &mbx , pair <D, B> &f_ioa) {mbx >> f_ioa.first >>  f_ioa.second; return mbx;}
int modpow(ll, ll, int);
template <typename T>
void z(T &&nv_i)  { cout << nv_i << "\n"; }
template <typename T, typename... Args>
void print(T &&d_o, Args &&... ouz_h)
{
    cout << d_o << " ";
    print(forward<Args>(ouz_h)...);
}
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void v_v(ll av) {cerr << av;}
void z_btl(int32_t vjx_bw) {cerr << vjx_bw;}
void o_but(string auo_dy) {cerr << auo_dy;}
void g(char h) {cerr << h;}
void gaz_qdk(long double fl) {cerr << fl;}
void pnu_al(double xo) {cerr << xo;}
void nff(unsigned long long t_tay) {cerr << t_tay;}

template <class T, class V> void _print(pair <T, V> ilx);
template <class T> void _print(vector <T> ire_y);
template <class T> void _print(set <T> ai_q);
template <class T, class V> void _print(map <T, V> re_zim);
template <class T> void _print(multiset <T> o_wa);
template <class T, class V> void _print(pair <T, V> hm) {cerr << "{"; _print(hm.first); cerr << ","; _print(hm.second); cerr << "}";}
template <class T> void _print(vector <T> pte) {cerr << "[ "; for (T iu : pte) {_print(iu); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> s_bv) {cerr << "[ "; for (T g : s_bv) {_print(g); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> lyf) {cerr << "[ "; for (T f_eru : lyf) {_print(f_eru); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> i_bkq) {cerr << "[ "; for (auto v_o : i_bkq) {_print(v_o); cerr << " ";} cerr << "]";}

/////////// The Code Starts Here ///////////////////////////////////////
void o(int tc) {
    int n;
    cin >> n;
    vi arr(n);
    cin >> arr;
    set <int> rjr;
    r(i , n) {
        fl(j , i + 1 , n) {
            rjr.insert(arr[j] - arr[i]);
        }
    }
    debug(tc)
    z(rjr.size());

}
// g++ submission.cpp


///////////////////////////////////////////////////////////




int32_t main()  {
#ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    freopen("files/error.txt", "w", stderr);
#endif
    quick;

    int k = 1, t = 1;
    cin >> t;
    tc(t) o(k++);
    return 0;
}
int modpow(ll s_udi , ll tdx_v, int m = MOD) {
    ll pi_d = 1;
    s_udi %= m;
    if (s_udi == 0) return s_udi;
    while (tdx_v > 0) {
        if (tdx_v & 1) pi_d = (pi_d * s_udi) % m;
        s_udi *= s_udi;
        s_udi %= m;
        tdx_v >>= 1;
    }
    return pi_d;
}