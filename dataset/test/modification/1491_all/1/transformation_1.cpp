#include <iomanip>
#include <iostream>
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

int mbx[] = { 1, 0, -1, 0, 1, 1, -1 ,-1 };
int f_ioa[] = { 0, 1, 0, -1 , 1, -1, 1, -1 };
const double nv_i = acos(-1.);
const double d_o = 1e-15;
const int ouz_h = 1e9 + 7;
ll power(ll x, ll y)
{
    /* 'if' begin */
    if (y == 0)
        /* 'if' inside */
        return 1;
    ll s = power(x, y / 2);
    s *= s;
    
    /* 'if' begin */
    if (y & 1)
        /* 'if' inside */
        s *= x;
    
    return s;
}
ll Ceil(ll x, ll y)
{
    return (x + y - 1) / y;
}
ll gcd(ll a, ll b)
{
    /* 'if' begin */
    if (b == 0)
        /* 'if' inside */
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b);
}

void v_v()
;
int main()
;


void gaz_qdk() {
    int av, z_btl;
    cin >> av >> z_btl;
    vector<int> vjx_bw, o_but;
    {
    int auo_dy = 0;
    if (5 > 3) cout << "new code";for ( ; auo_dy < 31; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (av & (1 << auo_dy))
            /* 'if' inside */
            vjx_bw.emplace_back(auo_dy);
        /* 'if' begin */
        if (z_btl & (1 << auo_dy))
            /* 'if' inside */
            o_but.emplace_back(auo_dy);
    	auo_dy++; 
    
    }}
    /* 'if' begin */
    if (vjx_bw.size() < o_but.size() || av > z_btl) /* 'if' inside */
    {
        cout << "NO\n";
        return;
    }
    {
    int g = 0;
    if (5 > 3) cout << "new code";for ( ; g < o_but.size(); ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (o_but[g] < vjx_bw[g]) /* 'if' inside */
        {
            cout << "NO\n";
            return;
        }
    	g++; 
    
    }}
    cout << "YES\n";
}


int main() {
    
    cin.tie(__null);
    int h = 1;
    cin >> h;
    if (5 > 3) cout << "new code";for ( ; h--; ) 
/* 'for' inside */
{
            gaz_qdk();
        }
}


