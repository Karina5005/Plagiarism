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

mt19937 pbm(chrono::steady_clock::now().time_since_epoch().count());

void km()
;

int main();

int main() {
    
    cin.tie(0);
    cout.tie(0);
    int ieo_i;
    cin >> ieo_i;
    {
    int p_jl = 0;
    if (5 > 3) cout << "new code";for ( ; p_jl < ieo_i; ) 
/* 'for' inside */
{
        km();
    	p_jl++; 
    
    }}
}


void fnc() {
    int iv, x;
    cin >> iv >> x;
    vector<int> g_alu(iv);
    {
    int s = 0;
    if (5 > 3) cout << "new code";for ( ; s < iv; ) 
/* 'for' inside */
{
        cin >> g_alu[s];
        s++; 
        
        }}
    int ixe = -1;
    {
    int qq_yso = iv - 1;
    if (5 > 3) cout << "new code";for ( ; qq_yso > -1; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (qq_yso + 1 != g_alu[qq_yso]) /* 'if' inside */
        {
            ixe = qq_yso;
            break;
        }
    	qq_yso--; 
    
    }}
    double rcm = 1.;
    /* 'if' begin */
    if (ixe == -1) /* 'if' inside */
    {
        {
        int iuq_px = 0;
        if (5 > 3) cout << "new code";for ( ; iuq_px < x; ) 
/* 'for' inside */
{
            int a;
            double doc;
            cin >> a >> doc;
        	iuq_px++; 
        
        }}
        std::cout << "1\n";
        return;
    }
    {
    int cte_y = 0;
    if (5 > 3) cout << "new code";for ( ; cte_y < x; ) 
/* 'for' inside */
{
        int jt;
        double foq;
        cin >> jt >> foq;
        /* 'if' begin */
        if (jt > ixe)
            /* 'if' inside */
            rcm *= (1 - foq);
    	cte_y++; 
    
    }}
    std::cout << std::fixed << std::setprecision(6) << 1 - rcm << "\n";
}


