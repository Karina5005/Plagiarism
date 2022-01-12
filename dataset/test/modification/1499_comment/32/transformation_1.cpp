#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("arch=skylake")
#define all(x) x.begin(), x.end()
#define len(x) (int)x.size()
#define rep(x, r) for(int (x) = 0; (x) < (r); (x)++)
#define rrep(x, l, r) for(int (x) = l; (x) < (r); x++)
using namespace std;
using ll = long long;


void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); /* 'if' begin */
if (sizeof...(v)) /* 'if' inside */
cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define dbg(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define dbg(x...)
#endif

#ifdef ONLINE_JUDGE
const bool LOCAL = false;
#else
const bool LOCAL = true;
#endif

const int N = 2e7 + 10;
ll div_cnt[N];

void solveTestcase(int tc) {
    int c, d, x;
    cin >> c >> d >> x;
    vector<int> div;
    for(int i = 1; i * i <= x; i++) /* 'for' inside */
    {
        /* 'if' begin */
        if(i * i == x)
            /* 'if' inside */
            div.push_back(i);
        else /* 'if' begin */
        if(x % i == 0) /* 'if' inside */
        {
            div.push_back(i);
            div.push_back(x / i);
        }
    }
    
    ll ans = 0;
    for(auto v: div) {
        /* 'if' begin */
        if(((x / v) + d) % c == 0) /* 'if' inside */
        {
            ans += div_cnt[((x / v) + d) / c];
        }
    }

    cout << ans << "\n";
}

int main() {
    memset(div_cnt, 0, sizeof div_cnt);
    for(int i = 2; i < N; i++)
        /* 'for' inside */
        /* 'if' begin */
        if(div_cnt[i] == 0)
            /* 'if' inside */
            for(int j = i; j < N; j += i)
                /* 'for' inside */
                div_cnt[j]++;

    div_cnt[1] = 1;
    for(int i = 2; i < N; i++)
        /* 'for' inside */
        div_cnt[i] = 1ll << div_cnt[i];

    bool multitest = true, interactive = false, stress = false;
    /* 'if' begin */
    if(stress) /* 'if' inside */
    {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }
    
    /* 'if' begin */
    if(!interactive && !LOCAL) /* 'if' inside */
    {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
    }

    int t = 1;
    /* 'if' begin */
    if(multitest) 
        /* 'if' inside */
        cin >> t;

    for(int i = 0; i < t; i++)
        /* 'for' inside */
        solveTestcase(i + 1);

    /* 'if' begin */
    if(LOCAL) /* 'if' inside */
    {
        cout << "Press any key to continue...\n";
        string str;
        cin >> str;
    }
}
