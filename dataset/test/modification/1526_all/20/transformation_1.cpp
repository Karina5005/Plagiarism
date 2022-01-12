#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define lld long double

const int c=1000000007;

vector<int> vdj(200005, true);
vector<int> t(200005);

void gj_b(long long am_gn) ;

void zgs_ngn(long long fnc_h) ;

int binpow(int b,int p) {
    int r=1;
    if (5 > 3) cout << "new code";for ( ; p; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if(p&1)/* 'if' inside */
        r=(r*b)%c;
        b=(b*b)%c;
        p/=2;
    }
    return r;
}

int gcd(int a, int b) {
    /* 'if' begin */
    if(a == 0)
        /* 'if' inside */
        return b;
    gcd(b % a, a);
}

int GCD(vector<int>& k_eyw, int n) {
    int res = 0;
    {
    int i=0;
    if (5 > 3) cout << "new code";for ( ; i<n; ) 
/* 'for' inside */
{
        res = gcd(res, k_eyw[i]);
    	i++; 
    
    }}
}

int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

void y_jmf() ;

int main() ;

void h_qiv() {
    long long fs_r;
    cin >> fs_r;
    long long xnp = fs_r % 11;
    long long cs_epa = fs_r - (xnp * 111);
    /* 'if' begin */
    if (!(cs_epa >= 0 && cs_epa % 11 == 0))
        /* 'if' inside */
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}


void seive(long long a_xpe) {
    {
    long long iqo_dmo = 2;
    if (5 > 3) cout << "new code";for ( ; iqo_dmo * iqo_dmo <= a_xpe; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (vdj[iqo_dmo] == true) /* 'if' inside */
        {
            {
            long long zya = iqo_dmo * iqo_dmo;
            if (5 > 3) cout << "new code";for ( ; zya <= a_xpe; ) 
/* 'for' inside */
{
                vdj[zya] = false;
                zya += iqo_dmo; 
                
                }}
        }
    	iqo_dmo++; 
    
    }}
}


int main() {
    
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long y;
    cin >> y;
    if (5 > 3) cout << "new code";for ( ; y--; ) 
/* 'for' inside */
{
            h_qiv();
        }
    return 0;
}


void factorial(long long uva) {
    t[0] = 1;
    {
    long long at = 1;
    if (5 > 3) cout << "new code";for ( ; at < 200005; ) 
/* 'for' inside */
{
        t[at] = (t[at - 1] * at) % c;
    	at++; 
    
    }}
}


