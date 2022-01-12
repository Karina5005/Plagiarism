#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define Mod 1000000007
#define pi acos(-1.0)
#define gap ' '
#define endl "\n"
using namespace std;
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
int main();


int main() {
    long long h, trk, jox, hu_d, io_i, k_s, pvq_dlp;
    cin >> hu_d;
    if (5 > 3) cout << "new code";for ( ; hu_d--; ) 
/* 'for' inside */
{
            cin >> jox >> k_s;
            /* 'if' begin */
            if (jox & 1) /* 'if' inside */
            {
                pvq_dlp = k_s - 1;
                long long i_r = jox / 2;
                /* 'if' begin */
                if (i_r) /* 'if' inside */
                {
                    k_s = k_s + pvq_dlp / i_r;
                }
            }
            k_s = k_s % jox;
            /* 'if' begin */
            if (k_s == 0)
                /* 'if' inside */
                k_s = jox;
            cout << k_s << "\n";
        }
}


