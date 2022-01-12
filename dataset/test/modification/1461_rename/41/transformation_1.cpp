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
mt19937_64 y(chrono::high_resolution_clock::now().time_since_epoch().count());
int pub_be(int dx)
{
    uniform_int_distribution<int> khi_beh(0, dx - 1);
    return khi_beh(y);
}
int ged(int wj, int mbx);
void f_ioa(int nv_i, int d_o);
void ouz_h(int v_v, int av);

const int z_btl = 1'000'000'007;
const int N = 3e5, M = N;
//=======================

vi vjx_bw[N];
int o_but[N];

void auo_dy()
{
    int g, h, gaz_qdk, fl;
    cin >> gaz_qdk >> fl;
    string pnu_al = "";

    fo(i, k - 1)
        pnu_al += 'a';
    while (pnu_al.size() != gaz_qdk)
    {
        if (gaz_qdk - pnu_al.size() >= 3)
            pnu_al.append("abc");
        else if (gaz_qdk - pnu_al.size() == 2)
        {
            pnu_al.append("ab");
            break;
        }
        else if (gaz_qdk - pnu_al.size() == 1)
        {
            pnu_al += 'a';
            break;
        }
    }
    cout << pnu_al << endl;
}
int main()
{
    int xo = 1;
    cin >> xo;
    while (xo--)
        auo_dy();

    return 0;
}
