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

mt19937 tvq(chrono::steady_clock::now().time_since_epoch().count());

void d_mk()
;

int main();

int main() {
    
    cin.tie(0);
    cout.tie(0);
    int e;
    cin >> e;
    {
    int t_rf = 0;
    if (5 > 3) cout << "new code";for ( ; t_rf < e; ) 
/* 'for' inside */
{
        d_mk();
        cout << "\n";
    	t_rf++; 
    
    }}
}


void fnc() {
    int dor_tkw, z_w;
    cin >> dor_tkw >> z_w;
    vector<int> wwk_ras(dor_tkw);
    {
    int du_v = 0;
    if (5 > 3) cout << "new code";for ( ; du_v < dor_tkw; ) 
/* 'for' inside */
{
        cin >> wwk_ras[du_v];
        du_v++; 
        
        }}
    int s = -1;
    {
    int kz = dor_tkw - 1;
    if (5 > 3) cout << "new code";for ( ; kz > -1; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (kz + 1 != wwk_ras[kz]) /* 'if' inside */
        {
            s = kz;
            break;
        }
    	kz--; 
    
    }}
    double pm = 1.;
    /* 'if' begin */
    if (s == -1) /* 'if' inside */
    {
        {
        int r = 0;
        if (5 > 3) cout << "new code";for ( ; r < z_w; ) 
/* 'for' inside */
{
            int lr;
            double gt;
            cin >> lr >> gt;
        	r++; 
        
        }}
        cout << 1;
        return;
    }
    {
    int bim = 0;
    if (5 > 3) cout << "new code";for ( ; bim < z_w; ) 
/* 'for' inside */
{
        int kzz_za;
        double za_c;
        cin >> kzz_za >> za_c;
        /* 'if' begin */
        if (kzz_za > s)
            /* 'if' inside */
            pm *= (1 - za_c);
    	bim++; 
    
    }}
    cout << fixed << setprecision(6) << 1 - pm;
}


