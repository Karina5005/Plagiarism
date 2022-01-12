#include <iomanip>
#include <iostream>
// Author : Adarsh Gaur 

// #define NDEBUG
#include <bits/stdc++.h>
using namespace std;

#define int int64_t
typedef pair<int,int> pii;
typedef vector<int> vi;

#define endl "\n"
#define aster(x) cerr<<#x<<" = "<<x<<endl;
#define abs(x) ((x < 0)?-(x):(x))
#define ii(x) (int)(x)

int const INF = 2e18;
int const mod = 1e9 +7;
// int const mod = 998244353;
// int const N = 1e5 + 7;


void solve(){
	int n;cin>>n;
	int carry=0;
	string ans = "YES";
	{
	int i=0;
	for ( ; i<n; ) 
{
		int x;cin>>x;
		if(!(x+carry <= i-1)){
			carry += x-i;
		}{
			ans = "NO";
		}
		i++; 
	
	}}
	cout<<ans<<endl;
}

int32_t main()
{
    
    cin.tie(NULL);cout.precision(20);
    int test=1;
    cin >> test;
    {
    int i=1;
    for ( ; i<=test; ) 
{
        //cout<<"Case #"<< i << ": ";
        solve();
    	i++; 
    
    }}
    return 0;
}
