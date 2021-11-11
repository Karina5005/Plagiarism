#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, int> pli;
typedef pair<int, ll> pil;
typedef pair<ll, ll> pll;
typedef pair<int, double> pid;
typedef pair<double, int> pdi;
typedef pair<double, double> pdd;
const double eps = 1e-8;
const int inf = 1e9 + 7;
const double dinf = 1e9 + 7.0;
const ll linf = 2e18;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define vp vector<pii>
#define bi bigint
#define fi first
#define se second
#define BC __builtin_popcount
#define BL __builtin_clz
#define BT __builtin_ctz
#define forl(i, a, b) for(int i = a; i < b; i ++)
#define fore(i, a, b) for(int i = a; i <= b; i ++)
#define rforl(i, a, b) for(int i = a; i > b; i --)
#define rfore(i, a, b) for(int i = a; i >= b; i --)
#define Mod(a, b) (((a) % b) + b) % b

template<class TH> void _dbg(const char *sdbg, TH h) {
    cerr<<sdbg<<" = "<<h<<endl;
}
template<class TH, class... TA> void _dbg(const char *sdbg, TH h, TA... a) {
    while(*sdbg!=',')cerr<<*sdbg++;
    cerr<<" = "<<h<<',';
    _dbg(sdbg+1, a...);
}
template<class T> ostream &operator<<(ostream& os, vector<T> V) {
    os << "[";
    for (auto vv : V) os << vv << ",";
    return os << "]";
}
template<class L, class R> ostream &operator<<(ostream &os, pair<L,R> P) {
    return os << "(" << P.x << "," << P.y << ")";
}

#define LOCAL
#ifdef LOCAL
#define debug(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...) (__VA_ARGS__)
#define cerr if(0)cout
#endif

namespace FIO {
inline char gc() {
    static char buf[100000], *p1 = buf, *p2 = buf;
    return p1 == p2 && (p2 = (p1 = buf) + fread(buf, 1, 100000, stdin), p1 == p2) ? EOF : *p1++;
}
template <class T> inline int read(T &x) {
    char c = gc(), b = 1;
    for (; !(c >= '0' && c <= '9' || c == EOF); c = gc()) /* 'for' inside */
    /* 'if' begin */
    if (c == '-') /* 'if' inside */
    b = -b;
    /* 'if' begin */
    if (c == EOF) /* 'if' inside */
    return 0;
    for (x = 0; c >= '0' && c <= '9'; x = x * 10 + c - '0', c = gc())/* 'for' inside */
    ;
    x *= b;
    return 1;
}
inline int read(char *s) {
    char c = gc();
    int len = 0;
    for (; c <= ' ' && c != EOF; c = gc())/* 'for' inside */
    ;
    /* 'if' begin */
    if (c == EOF) /* 'if' inside */
    return 0;
    for (; !(c <= ' '); s[len++] = c, c = gc())/* 'for' inside */
    ;
    s[len] = 0;
    return 1;
}
template <typename Head, typename... Tail>
inline int read(Head& H, Tail&... T) {
    int rlt = read(H);
    return rlt + read(T...);
}
inline void pc(char c) {
    static char buf[100000], *p1 = buf, *p2 = buf + 100000;
    /* 'if' begin */
    if (!c) /* 'if' inside */
    fwrite(buf, 1, p1 - buf, stdout), p1 = buf;
    else {
        *p1++ = c;
        p1 == p2&&(fwrite(buf, 1, 100000, stdout), p1 = buf);
    }
}
template <class T> inline void write(T x) {
    static char str[64];
    /* 'if' begin */
    if (x == 0) /* 'if' inside */
    pc('0');
    else {
        /* 'if' begin */
        if (x < 0) /* 'if' inside */
        pc('-'), x = -x;
        int sn = 0;
        while (x) str[sn++] = x % 10 + '0', x /= 10;
        for (int i = sn - 1; i >= 0; i --) /* 'for' inside */
        pc(str[i]);
    }
}
inline void write(char c) {
    pc(c);
}
inline void write(char *s) {
    for (int i = 0; s[i]; i ++) /* 'for' inside */
    pc(s[i]);
}
inline void write(const char *s) {
    for (int i = 0; s[i]; i ++) /* 'for' inside */
    pc(s[i]);
}
template <typename Head, typename... Tail>
inline void write(Head H, Tail... T) {
    write(H), write(T...);
}
inline void flush() {
    pc(0);
}
}
using namespace FIO;

#define N 3000010
const int mod = 1e9 + 7;
int fac[N], inv[N], rv[N];

void init() {
    fac[0] = inv[0] = fac[1] = inv[1] = rv[1] = 1;
    for (int i=2; i < N; i++) /* 'for' inside */
    {
        rv[i] = (ll)rv[mod % i] * (mod - mod / i) % mod;
        fac[i]=((ll)fac[i-1] * i) % mod;
        inv[i] = (ll)inv[i - 1] * rv[i] % mod;
    }
}

vector<ll> rlt, v, ans;
int main() {
    int n, q;
    read(n, q);
    init();
    fore(i, 0, 3 * n + 3){
        ll tmp = 1ll * fac[3*n+3] * inv[i] % mod * inv[3*n+3-i] % mod;
        rlt.pb(tmp);
    }
    rlt[0] -= 1; rlt[1] -= 3; rlt[2] -= 3; rlt[3] -= 1;
    v.pb(0); v.pb(3); v.pb(3); v.pb(1);
    rfore(i, 3 * n + 3, 3){
        rlt[i] %= mod;
        /* 'if' begin */
        if(rlt[i] < 0) /* 'if' inside */
        rlt[i] += mod;
        ans.pb(rlt[i]);
        rlt[i - 1] -= v[2] * rlt[i];
        rlt[i - 2] -= v[1] * rlt[i];
    }
    reverse(all(ans));
    while(q --){
        int x;
        read(x);
        write(ans[x],'\n');
        flush();
    }
}
