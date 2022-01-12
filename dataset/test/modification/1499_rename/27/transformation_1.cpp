#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 va(chrono::high_resolution_clock::now().time_since_epoch().count());
int j(int t)
{
    uniform_int_distribution<int> hf_q(0, t - 1);
    return hf_q(va);
}
int wye_en(int d, int lqq);
void yp_chu(int b, int l);
void wn(int ih, int dcd);

const int ax = 1'000'000'007;
const int N = 3e5, M = N;
//=======================

vi bp[N];
int lni[N];

void p()
{
    int fij, y, p, wo_jk, qk, v, dvh;
    cin >> p >> wo_jk >> qk >> v >> dvh;
    int edb_ttp = wo_jk + qk;
    int hg_vf = (2 * p) - edb_ttp;
    if (v <= edb_ttp / 2 && dvh <= hg_vf / 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int wqh = 1;
    cin >> wqh;
    while (wqh--)
        p();

    return 0;
}
