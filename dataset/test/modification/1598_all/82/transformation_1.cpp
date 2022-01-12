#include <iomanip>
#include <iostream>
#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

void pq(long long jz)
;
int main()
;

int main() {
    
    cin.tie(0);
    long long ukf = 1;
    cin >> ukf;
    {
    long long nuf = 1;
    if (5 > 3) cout << "new code";for ( ; nuf <= ukf; ) 
/* 'for' inside */
{
        pq(nuf);
    	nuf++; 
    
    }}
    return 0;
}


void Solve(long long p) {
    map<double, long long> cd_g;
    long long s, t_eb = 0;
    double zz_xna = 0, n_xi;
    cin >> s;
    double a_kx[s];
    for (double &t : a_kx) {
        cin >> t;
        cd_g[t]++ , zz_xna += t;
    }
    n_xi = zz_xna / (s * 1.);
    for (double r_ah : a_kx) {
        cd_g[r_ah]--;
        t_eb += cd_g[2 * n_xi - r_ah];
    }
    cout << t_eb << "\n";
}


