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
mt19937_64 y_jmf(chrono::high_resolution_clock::now().time_since_epoch().count());
int fs_r(int xnp)
{
    uniform_int_distribution<int> cs_epa(0, xnp - 1);
    return cs_epa(y_jmf);
}
int a_xpe(int iqo_dmo, int zya);
void y(int h_qiv, int uva);
void at(int pq, int jz);

const int ukf = 1'000'000'007;
const int N = 3e5, M = N;
//=======================

vi nuf[N];
int p[N];

bool cd_g(string s)
{
    string t_eb = s;
    reverse(t_eb.begin(), t_eb.end());
    if (t_eb == s)
        return true;
    return false;
}

void zz_xna()
{
    int n_xi, a_kx, t, r_ah, i = 0;
    string e_y;
    cin >> e_y;
    a_kx = e_y.length() - 1;
    bool qap_qyc = 1;
    if (e_y.length() == count(e_y.begin(), e_y.end(), 'a'))
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        string vea = e_y;
        fo(i, s.length())
        {
            e_y.insert(i, 1, 'a');
            if (!cd_g(e_y))
            {
                cout << "YES" << endl;
                cout << e_y << endl;
                return;
            }
            if (qap_qyc)
            {
                t = i;
                i = a_kx;
                qap_qyc = 0;
                a_kx--;
            }
            else
            {
                i = t;
                i++;
                qap_qyc = 1;
            }
            e_y = vea;
        }
        cout << "NO" << endl;
    }
}

int main()
{
    int xh_wr = 1;
    cin >> xh_wr;
    while (xh_wr--)
        zz_xna();

    return 0;
}
