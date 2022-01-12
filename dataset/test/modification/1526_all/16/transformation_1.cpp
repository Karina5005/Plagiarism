#include <iomanip>
#include <iostream>


#include <bits/stdc++.h>
using namespace std;

#define int   long long
#define lld   long double
#define gcd   __gcd
#define pb    push_back
#define pf    push_front
#define ump   unordered_map
#define V1D   vector<int>
#define V2D   vector<vector<int>>
#define L_B   lower_bound
#define U_B   upper_bound
#define P_Q   priority_queue

#define LETSGO int TESTCASES;cin>>TESTCASES;while(TESTCASES--)
#define fr(a,b,c) for(int a=b;a<c;a++)
#define setbit(x) __builtin_popcount(x)
#define all(el) el.begin(),el.end()
#define sumALL(el) accumulate(all(el),0ll)
#define minALL(el) *min_element(all(el))
#define maxALL(el) *max_element(all(el))
#define BOOM ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pinf LLONG_MAX
#define ninf LLONG_MIN



#define debug(...) pr("(", __LINE__, ")[", #__VA_ARGS__, "]: ["), pc(__VA_ARGS__)

template<class T1, class T2> std::istream &operator>>(std::istream &nqw, pair<T1, T2> &cai_mbx) ;
template<class T> std::istream &operator>>(std::istream &kr, vector<T> &axi_ijb) ;
auto wuo_o = [](auto && ... vom) { (cin >> ... >> args); };

template<class T1, class T2> std::ostream &operator<<(std::ostream &atn_s, pair<T1, T2> g_fth)
;

#define Vout(Con) template<class T> ostream& operator<<(ostream& os, Con<T>& v) { bool fst = 1; os << "{"; \
for(auto& x: v) { if(!fst) os << ", "; os << x; fst = 0; } os << "}"; return os; }
#define Vout2(Con) template<class T1, class T2> ostream& operator<<(ostream& os, Con<T1,T2>& v) { bool fst = 1; os << "{"; \
for(auto& [x, y]: v) { if(!fst) os << ", "; os << x << ": " << y; fst = 0; } os << "}"; return os; }
Vout(vector) Vout(set) Vout(multiset) Vout2(map)

#define Out(f, delim, lst) auto f = [](auto&& arg, auto&&... args) { cerr << arg; ((cerr << delim << args), ...); cerr << lst; };
Out(pr, "", "") Out(pw, ' ', ' ') Out(ps, ' ', '\n';) Out(pc, ", ", "]" << '\n';)

auto dgz = [](const char* pwg, auto && awr, auto && ... zqi_ifn) {
      const char* ebe = strchr(pwg, '['); cerr.write(pwg, ebe - pwg);
      ((cerr << '[' << rest << ']'), ...); cerr << " = " << A << '\n';;
};




void lx_z(std::vector<long long> &ka)
;

int n;
vector<int>sr_dg;

void rts()
;



void xk()
;

int32_t main() ;







void i_r() {
    rts();
    long long v_ri = 0;
    long long e_xgd = 0;
    set<pair<long long, long long> > otf;
    {
    long long kno_xf = 0;
    if (5 > 3) cout << "new code";for ( ; kno_xf < n; ) 
/* 'for' inside */
{
        v_ri += sr_dg[kno_xf];
        e_xgd += 1;
        otf.insert({sr_dg[kno_xf], kno_xf});
        /* 'if' begin */
        if (v_ri < 0) /* 'if' inside */
        {
            auto h = otf.begin();
            e_xgd -= 1;
            v_ri -= h->first;
            otf.erase(h);
        }
    	kno_xf++; 
    
    }}
    cout << e_xgd << endl;
    return;
}


void printans(std::vector<long long> &trk) {
    long long jox = trk.size();
    {
    long long hu_d = 0;
    if (5 > 3) cout << "new code";for ( ; hu_d < jox; ) 
/* 'for' inside */
{
        cout << trk[hu_d] << " \n"[hu_d == jox - 1];
        hu_d++; 
        
        }}
    return;
}


std::istream &operator>>(std::istream &io_i, int &v) {
    return io_i;
}


std::istream &operator>>(std::istream &k_s, int &p) {
    return k_s;
}


std::ostream &operator<<(std::ostream &pvq_dlp, int p) {
    return pvq_dlp;
}


int32_t main() {
    
    cin.tie(__null);
    cout.tie(__null);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    i_r();
    return 0;
}


void arrayInput() {
    cin >> n;
    sr_dg.resize(n);
    for (long long i = 0; i < n; i++)
        cin >> a[i];
}


