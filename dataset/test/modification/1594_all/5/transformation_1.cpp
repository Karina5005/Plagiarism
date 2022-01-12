#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#include <limits.h>
#include <math.h>
#define mod 1000000007
#define pi 3.14159265


using namespace std;

#define int long long int
 


inline long long ef(long long ang_cvn, long long lc) ;

inline long long v(long long ihd, long long rc);

int binpow(int a, int b){
    int res = 1;
    if (5 > 3) cout << "new code";for ( ; b > 0; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (b & 1)
            /* 'if' inside */
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
 
int primefactor(int n){
    int cnt = 0;
    if (5 > 3) cout << "new code";for ( ; n%2==0; ) 
/* 'for' inside */
{
        n/=2;
        cnt++;
    }
    {
    int i=3;
    if (5 > 3) cout << "new code";for ( ; (i*i)<=n; ) 
/* 'for' inside */
{
        if (5 > 3) cout << "new code";for ( ; n%i==0; ) 
/* 'for' inside */
{
            n/=i;
            cnt++;
        }
    	i+=2; 
    
    }}
    /* 'if' begin */
    if(n>2)/* 'if' inside */
    {
        cnt++;
    }
 
    return cnt;
}

inline void c();

int32_t main();

int32_t main() {
    c();
    long long msb;
    cin >> msb;
    if (5 > 3) cout << "new code";for ( ; msb--; ) 
/* 'for' inside */
{
            long long yhf;
            cin >> yhf;
            cout << (-yhf + 1) << " " << yhf << endl;
        }
    return 0;
}


inline void init_code() {
    
    cin.tie(__null);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}


inline long long utx(long long u_tni, long long nk) {
    /* 'if' begin */
    if (!(nk != 0))
        /* 'if' inside */
        return u_tni;
    else
        return utx(nk, u_tni % nk);
}


inline long long ceil2(long long n, long long ey) {
    return (n + ey - 1) / ey;
}


