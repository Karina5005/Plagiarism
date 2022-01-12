#include <iomanip>
#include <iostream>
#pragma GCC target ("avx2")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")

#include<bits/stdc++.h>
using namespace std;




mt19937 dor_tkw(chrono::steady_clock::now().time_since_epoch().count());
int z_w(int wwk_ras, int du_v);

#define int long long
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define ins insert
#define ull unsigned long long
#define rep(i, begin, end) for (__typeof(begin) i = (begin); i <= (end); ++i)
#define repr(i, begin, end) for (__typeof(end) i = (begin); i >= (end); --i)
#define ff first
#define ss second
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define nl "\n"
#define sz(a) (int)(a).size()
#define all(a) (a).begin(), (a).end()
#define fl(a,x) memset(a, x, sizeof(a));
#define mt make_tuple
#define mxe max_element
#define mne min_element
#define present(c, x) (c.find(x) != c.end())
#define get(a, begin, end) rep(i, (begin), (end)) cin >> (a)[i];
#define show(a, begin, end) rep(i, (begin), (end)) cout << (a)[i] << " "; cout << nl;
#define ld long double 
#define vec vector

typedef pair<int,int> pii;

#define err(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); error(true, _it, args); }
 
void s(bool kz, istream_iterator<std::string> pm) ;
template<typename T, typename... Args>
void error(bool r, istream_iterator<std::string> lr, T gt, Args ...bim) ;

const int kzz_za = 1e9 + 7;
const int za_c = 998244353;
const int ew_tgu = 1e18;
const int rx = 1e6 + 5;
const int dvl_y[8] = {1, 0, -1, 0, 1, 1, -1, -1}, m[8] = {0, 1, 0, -1, -1, 1, -1, 1};



void oa_m() ;

int main() ;

void v_n() {
    long long qqo;
    cin >> qqo;
    vector<pii> wt(1);
    map<long long, long long> au_wqh[2];
    {
    typeof (1) fz_jbw = (1);
    if (5 > 3) cout << "new code";for ( ; fz_jbw <= (qqo); ) 
/* 'for' inside */
{
        long long w_hd, y;
        cin >> w_hd >> y;
        wt.push_back({w_hd, y});
        au_wqh[0][w_hd]++;
        au_wqh[1][y]++;
    	++fz_jbw; 
    
    }}
    long long p = 0;
    {
    typeof (1) dw = (1);
    if (5 > 3) cout << "new code";for ( ; dw <= (qqo); ) 
/* 'for' inside */
{
        p += (au_wqh[0][wt[dw].first] - 1) * (au_wqh[1][wt[dw].second] - 1);
    	++dw; 
    
    }}
    cout << qqo * (qqo - 1) * (qqo - 2) / 6 - p << "\n";
}


int rand(int l, int r){
  uniform_int_distribution<int> r(l, r); return r(dor_tkw);
}

int main() {
     , cin.tie(0) , cout.tie(0);
    ;
    long long vep_y;
    cin >> vep_y;
    if (5 > 3) cout << "new code";for ( ; vep_y--; ) 
/* 'for' inside */
v_n();
    return 0;
}


void lu(bool icw, istream_iterator<std::string> v, int a, int args) {
    /* 'if' begin */
    if (icw)
        /* 'if' inside */
        cout << '\n';
}


void error(bool oe, istream_iterator<std::string> a) {
}


