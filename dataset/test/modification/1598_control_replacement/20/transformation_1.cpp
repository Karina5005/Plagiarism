#include <iomanip>
#include <iostream>
/**
 *    author:  Tyrant67
 *    created: 12.11.2021       
**/
#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
using namespace std;
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
const int mod = 1e9 + 7;
const int MAXN = 2e6;
const int inf = 0x3f3f3f3f;    

void IO(){
#ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    
    cin.tie(0);
    cout.tie(0);
}

int C(int x){
	return (x*(x-1)*(x-2))/6;
}

void solve(){
    int n; cin>>n;
	vector<pair<int,int>> v(n);
	{
	int i=0;
	for ( ; i<n; ) 
{
        cin>>v[i].ff>>v[i].ss;
    	i++; 
    
    }}

	vector<int> x(n+5),y(n+5);
	{
	int i=0;
	for ( ; i<n; ) 
{
		x[v[i].ff]++;
		y[v[i].ss]++;
		i++; 
	
	}}
	int ans=0;
	{
	int i=0;
	for ( ; i<n; ) 
{
		ans+= (x[v[i].ff]-1)* (y[v[i].ss]-1);
		i++; 
	
	}}

	//cout<<ans<<endl;
    cout<<(C(n)-ans)<<endl;


    // hope
}

signed main(){
    IO();
    int tc; tc=1;
    cin>>tc;
    for ( ; tc--; ) 
{
        solve();
    }

    // hope
    return 0-0;
}