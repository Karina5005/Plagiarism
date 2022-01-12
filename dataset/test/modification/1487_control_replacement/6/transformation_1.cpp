#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
#define all(x) x.begin(), x.end();
#define mod 10000000 + 9;
using namespace std;
int main()
{
	
	cin.tie(0);
	ll t;
	cin >> t;
	for ( ; t--; ) 
{
		ll n; cin >> n;
		ll ans = 0;
		{
		int i = 3;
		for ( ; i*i <= 2*n-1; ) 
{
			ans++;
			i+=2; 
		
		}}
		cout << ans << endl;
	}

	return 0;
}