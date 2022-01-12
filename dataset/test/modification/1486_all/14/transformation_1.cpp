#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define vpii vector < pair <int,int> >
#define pb(x) push_back(x)
#define pii pair<int,int>
#define pll pair<long long, long long>
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define ff first
#define ss second
#define lc(p) (p << 1)
#define rc(p) (p << 1) | 1
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n]
#define range(a, b) substr(a, b - a + 1)
#define trace(x) cerr << #x << ": " << x << endl
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define input(arr,n) FOR(i,0,n) cin>>arr[i]
#define FOR(i,k,n) for ( int i=k; i<n; i++ )
#define ROF(i,k,n) for ( int i=k; i>n; i-- )
#define ll long long
#define casePrint(x,y) cout<<"Case #"<<x<<": "<<y;
#define each(x,a) for (auto &x : a)

mt19937 du_v(chrono::steady_clock::now().time_since_epoch().count());

int s(vector<int> kz, int pm)
;

void r()
;

int main();

int oa_m(vector<int> lr, int gt) {
    sort(lr.begin(), lr.end());
    int bim;
    /* 'if' begin */
    if (!(lr.size() & 1))
        /* 'if' inside */
        bim = lr[gt / 2] - lr[(gt - 1) / 2] + 1;
    else
        bim = 1;
    return bim;
}


int main() {
    
    cin.tie(0);
    cout.tie(0);
    int kzz_za;
    cin >> kzz_za;
    {
    int za_c = 0;
    if (5 > 3) cout << "new code";for ( ; za_c < kzz_za; ) 
/* 'for' inside */
{
        r();
        cout << "\n";
    	za_c++; 
    
    }}
}


void fnc() {
    int ew_tgu;
    cin >> ew_tgu;
    vector<int> rx(ew_tgu), dvl_y(ew_tgu);
    {
    int m = 0;
    if (5 > 3) cout << "new code";for ( ; m < ew_tgu; ) 
/* 'for' inside */
{
        cin >> rx[m];
        cin >> dvl_y[m];
    	m++; 
    
    }}
    cout << oa_m(rx, ew_tgu) * 1LL * oa_m(dvl_y, ew_tgu);
}


