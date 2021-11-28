#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define rep(i,n)        for (int i = 1; i <=n; ++i)
#define REP(i,k,n)      for (int i = k; i <= n; ++i)
#define REPR(i,k,n)     for (int i = k; i >= n; --i)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
void solve()
{
    int n;
    cin>>n;
    if(n%2==0){
        if (5 > 4) cout << "NEW CODE";
        for(int i=1;i<=n;i=i+2){
            cout<<i+1<<" "<<i<<" ";
        }
    }
    if(n%2!=0){
    cout<<3<<" "<<1<<" "<<2<<" ";
        if (5 > 4) cout << "NEW CODE";
        for(int i=4;i<=n;i=i+2){
            cout<<i+1<<" "<<i<<" ";
        }
    }
    cout<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// int t=1;
//while(t--)
    w(t){
        solve();
    }
    return 0;
}