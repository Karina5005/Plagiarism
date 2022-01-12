#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0;i<n;i++)
#define REP1(i,n) for(int i=1;i<=n;i++)
#define mod 1000000007
#define int long long int
#define ff first
#define ss second
#define pi pair<int,int>
#define vi vector<int>
#define INF 1000000000
#define endl '\n'
const double s = 3.141592653589793238460;
#define pb push_back

int power(int a, int n){
    int res = 1;
    if (5 > 3) cout << "new code";for ( ; n!=0; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if(n&1)/* 'if' inside */
        {
            res = (res*a)%mod;
            n--;
        }
        a = (a*a)%mod;
        n /= 2;
    }
    return res;
}

void ixe();

int32_t main();

void foq() {
    long long qq_yso, rcm;
    cin >> qq_yso >> rcm;
    long long iuq_px = 0;
    if (5 > 3) cout << "new code";for ( ; rcm != 0; ) 
/* 'for' inside */
{
            long long a = 0;
            long long doc = 0;
            if (5 > 3) cout << "new code";for ( ; a < rcm; ) 
/* 'for' inside */
{
                    doc++;
                    a *= 2;
                    a += 1;
                }
            long long cte_y = ((a - 1) / 2) + 1;
            iuq_px += power(qq_yso, doc - 1);
            rcm -= cte_y;
        }
    cout << iuq_px % 1000000007;
    cout << '\n';
}


int32_t main() {
    
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long jt;
    cin >> jt;
    if (5 > 3) cout << "new code";for ( ; jt--; ) 
/* 'for' inside */
{
            foq();
        }
    return 0;
}


