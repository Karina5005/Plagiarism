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

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void fnc()
{
    int n,m;
    cin>>n>>m;
    vi a(n);
    input(a,n);
    int l = -1;
    ROF(i,n-1,-1)
    {
        if ( i+1!=a[i] )
        {
            l=i;
            break;
        }
    }
    double ans=1.0;
    if ( l==-1 )
    {
        FOR(i,0,m)
        {
            int x;
            double d;
            cin>>x>>d;
        }
        cout<<1;
        return;
    }

    FOR(i,0,m)
    {
        int k;
        double x;
        cin>>k>>x;
        if ( k>l )
            ans*=(1-x);
    }

    cout<<ps(1-ans,6);
}

signed main(){
    FIO;
    int n;
    cin>>n;
    FOR(i,0,n)
    {
        fnc();
        cout<<"\n";
    }
}