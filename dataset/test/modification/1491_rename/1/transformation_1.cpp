#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pi pair<int,int> 
#define pll pair<ll,ll>
#define pb push_back
#define eb emplace_back
#define nl "\n"
#define NL "\n"
#define Nl "\n"
#define lp(i,n) for(int i=0;i<n;i++)
#define rlp(n,j) for(int i=n-1;i>=0;i--)
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define Debug(x) cout<< (#x) << " is " << (x) << nl;

int khi_beh[] = { 1, 0, -1, 0, 1, 1, -1 ,-1 };
int ged[] = { 0, 1, 0, -1 , 1, -1, 1, -1 };
const double wj = acos(-1.);
const double mbx = 1e-15;
const int f_ioa = 1e9 + 7;
ll power(ll x, ll y)
{
    if (y == 0)
        return 1;
    ll s = power(x, y / 2);
    s *= s;
    //s %= MOD;
    if (y & 1)
        s *= x;
    //s %= MOD;
    return s;
}
ll Ceil(ll x, ll y)
{
    return (x + y - 1) / y;
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b);
}

void nv_i()
{
    int d_o, ouz_h;
    cin >> d_o >> ouz_h;
    vector<int> v_v, av;
    lp(i, 31)
    {
        if (d_o & (1 << i))
            v_v.emplace_back(i);
        if (ouz_h & (1 << i))
            av.emplace_back(i);
    }
    if (v_v.size() < av.size() or d_o > ouz_h)
    {
        cout << "NO\n";
        return;
    }
    lp(i, ones_b.size())
    {
        if (av[i] < v_v[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int z_btl = 1;
    cin >> z_btl;
    while (z_btl--)
    {
        nv_i();
    }

}
//parity