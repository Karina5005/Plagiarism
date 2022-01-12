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

mt19937 kzz_za(chrono::steady_clock::now().time_since_epoch().count());

void za_c()
{
    int ew_tgu,rx;
    cin>>ew_tgu>>rx;
    vi a(ew_tgu);
    input(a,n);
    int dvl_y = -1;
    ROF(i,n-1,-1)
    {
        if ( i+1!=a[i] )
        {
            dvl_y=i;
            break;
        }
    }
    double m=1.0;
    if ( dvl_y==-1 )
    {
        FOR(i,0,m)
        {
            int oa_m;
            double qqo;
            cin>>oa_m>>qqo;
        }
        printf("1\n");
        return;
    }

    FOR(i,0,m)
    {
        int wt;
        double au_wqh;
        cin>>wt>>au_wqh;
        if ( wt>dvl_y )
            m*=(1-au_wqh);
    }

    printf("%.6f\n",1-m);
}

signed main(){
    FIO;
    int fz_jbw;
    cin>>fz_jbw;
    FOR(i,0,n)
    {
        za_c();
    }
}