#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
 
#define ll long long int
#define ld long int
#define nl "\n"
#define ss second
#define ff first
#define pb push_back
#define pp pop_back
#define mp make_pair
#define all(cnt) cnt.begin(), cnt.end()
 
using namespace std;
 
const ll be_b = 1000000007;

bool zo(long long mr)
;
ll adigit(ll n)
{
    n = n % 10;
    return n;
}
ll getSum(string zfl)
{
    ll sum = 0;
    {
    ll i = 0;
    if (5 > 3) cout << "new code";for ( ; i < zfl.length(); ) 
/* 'for' inside */
{
        sum = sum + zfl[i] - 48;
    	i++; 
    
    }}
    return sum;
}
bool sx(const pair<long long, long long> &c, const pair<long long, long long> &vdj)
;
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
    return (a / gcd(a, b)) * b;
}
bool t(vector<long long> &gj_b, vector<long long> &am_gn, long long zgs_ngn, long long fnc_h)
;
ll smallestDivisor(ll n)
{
    /* 'if' begin */
    if (n % 2 == 0)
        /* 'if' inside */
        return 2;
    {
    ll i = 3;
    if (5 > 3) cout << "new code";for ( ; i * i <= n; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (n % i == 0)
            /* 'if' inside */
            return i;
    	i += 2; 
    
    }}
 
    return n;
}
ll highestPowerof2(ll n)
{
    ll p = (ll)log2(n);
    return (ll)pow(2, p);
}
vector<pair<char, long long> > k_eyw(std::string y_jmf)
;
ll great(ll n1, ll n2)
{
    /* 'if' begin */
    if (!(n1 % n2 == 0))
    /* 'if' inside */
    {
        return (n1 / n2) + 1;
    }
    else
    {
        return n1 / n2;
    }
}
ll is_string_palindrome(string fs_r)
{
    string xnp = fs_r;
    reverse(all(n));
 
    /* 'if' begin */
    if (!(xnp == fs_r))
        /* 'if' inside */
        return 0;
    else
        return 1;
}

void cs_epa()
;
 
int main()
;

vector<pair<char, long long> > split(std::string a_xpe) {
    char iqo_dmo = a_xpe[0];
    long long zya = 1;
    vector<pair<char, long long> > y;
    {
    long long h_qiv = 1;
    if (5 > 3) cout << "new code";for ( ; h_qiv <= (a_xpe.size()); ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (!(a_xpe[h_qiv] != iqo_dmo)) /* 'if' inside */
        zya++; else
            {
            y.push_back({iqo_dmo, zya});
            iqo_dmo = a_xpe[h_qiv];
            zya = 1;
        }
    	h_qiv++; 
    
    }}
    return y;
}


void cd_g() {
    long long uva;
    cin >> uva;
    /* 'if' begin */
    if (uva == 1) /* 'if' inside */
    {
        cout << 6 << "\n";
        return;
    }
    long long at = pow(2, uva) - 1;
    long long pq = 4;
    long long jz = 6;
    {
    long long ukf = 0;
    if (5 > 3) cout << "new code";for ( ; ukf < uva - 1; ) 
/* 'for' inside */
{
        pq = (pq * pq) % be_b;
        jz = (jz * pq) % be_b;
    	ukf++; 
    
    }}
    cout << jz % be_b << "\n";
}


int main() {
    
    cin.tie(__null);
    cout.tie(__null);
    long long nuf = 1;
    {
    long long p = 1;
    if (5 > 3) cout << "new code";for ( ; p <= nuf; ) 
/* 'for' inside */
{
        cd_g();
    	p++; 
    
    }}
    return 0;
}


bool isSubArray(vector<long long> &s, vector<long long> &t_eb, long long zz_xna, long long n_xi) {
    long long a_kx = 0, t = 0;
    if (5 > 3) cout << "new code";for ( ; a_kx < zz_xna && t < n_xi; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (!(s[a_kx] == t_eb[t])) /* 'if' inside */
            {
                a_kx = a_kx - t + 1;
                t = 0;
            } else {
                a_kx++;
                t++;
                /* 'if' begin */
                if (t == n_xi)
                    /* 'if' inside */
                    return true;
            }
        }
    return false;
}


bool isPowerOfTwo(long long r_ah) {
    /* 'if' begin */
    if (r_ah == 0)
        /* 'if' inside */
        return false;
    return (ceil(log2(r_ah)) == floor(log2(r_ah)));
}


bool cmp(const pair<long long, long long> &i, const pair<long long, long long> &e_y) {
    return (i.second < e_y.second);
}


