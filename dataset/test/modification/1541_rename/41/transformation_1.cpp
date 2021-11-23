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
#define nitro             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void ob_fok()
{
 int n;
 cin>>n;
 vector<pair<int,int>> sb;
 for (int i = 0; i < n; ++i)
 {  int x;
    cin>>x;
    sb.pb({x,i+1});
 }
 sort(sb.begin(),sb.end());
 int res=0;
 for (int i = 0; i < n; ++i)
 {
    for (int j = i+1; j <n ; ++j)
    {
        int ai = sb[i].first;
        int aj = sb[j].first;
        if( ai*aj == (sb[i].second+sb[j].second) )
            res++;
        if( ai*aj>2*n )
            break;
    }
 }
 cout<<res<<endl;
}

int32_t main()
{
    nitro;
    int t;
    t=1;
    cin>>t;
    while(t--)
    ob_fok();

}