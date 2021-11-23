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
#define return(a) return flush(), a;

template<class TH> void _dbg(const char *sdbg, TH h){ cerr<<sdbg<<" = "<<h<<endl; }
template<class TH, class... TA> void _dbg(const char *sdbg, TH h, TA... a) {
    while(*sdbg!=',')cerr<<*sdbg++;
    cerr<<" = "<<h<<','; _dbg(sdbg+1, a...);
}
template<class T> ostream &operator<<(ostream& os, vector<T> V) {
    os << "["; for (auto vv : V) os << vv << ","; return os << "]";
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

#define N 6010
pii p[N];
int num[4][4];

int fac[N], inv[N], rv[N];

ll C(int n, int m){
    /* 'if' begin */
    if(m == 3) /* 'if' inside */
    return 1ll * n * (n-1) * (n-2) / 6;
    /* 'if' begin */
    if(m == 2) /* 'if' inside */
    return 1ll * n * (n - 1) / 2;
    /* 'if' begin */
    if(m == 1) /* 'if' inside */
    return n;

}

int main(){
    int n;
    read(n);
    fore(i, 1, n) {
        int x, y;
        read(x, y);
        p[i] = pii(x % 4, y % 4);
        num[p[i].fi][p[i].se] ++;
    }
    ll ans = 0;
    forl(i, 0, 4) forl(j, i, 4) forl(k, j, 4){
        int cur = 0;
        pii a = pii((i >> 1) & 1, i & 1);
        pii b = pii((j >> 1) & 1, j & 1);
        pii c = pii((k >> 1) & 1, k & 1);
        a = pii(a.fi << 1, a.se << 1);
        b = pii(b.fi << 1, b.se << 1);
        c = pii(c.fi << 1, c.se << 1);
        cur += __gcd(abs(a.fi - c.fi), abs(a.se - c.se));
        cur += __gcd(abs(a.fi - b.fi), abs(a.se - b.se));
        cur += __gcd(abs(b.fi - c.fi), abs(b.se - c.se));
        /* 'if' begin */
        if(cur % 4 == 2) /* 'if' inside */
        continue;
        assert(cur % 4 == 0);
        int na = num[a.fi][a.se];
        int nb = num[b.fi][b.se];
        int nc = num[c.fi][c.se];
        /* 'if' begin */
        if(i == j && j == k) /* 'if' inside */
        ans += C(na, 3);
        else /* 'if' begin */
        if(i == j) /* 'if' inside */
        ans += C(na, 2) * nc;
        else /* 'if' begin */
        if(i == k) /* 'if' inside */
        ans += C(na, 2) * nb;
        else /* 'if' begin */
        if(j == k) /* 'if' inside */
        ans += C(nb, 2) * na;
        else ans = 1ll * na * nb * nc;
    }
    cout << ans << endl;
    return(0);
}
