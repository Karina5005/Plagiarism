#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

// order_of_key (k) : Number of items strictly smaller than k .
// find_by_order(k) : K-th element in a set (counting from zero).
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

#define ll long long int
#define fr(i, n) for (int i = 0; i < n; i++)
// const int MAX = 200007;
// #define v(n) vector<int> v(n)

// ll mod = 1e9 + 7;

#define inf 1e12
#define ninf -1e12
int mod = 998244353;
ll power(ll n, ll y)
{
	ll res = 1;

	n = n % mod;
	if (n == 0)
	{
		return 0;
	}
	for ( ; y > 0; ) 
{
		// if y is odd ,multiply  x with result

		if (y & 1)
			res = (res * n) % mod;

		// y must be even now

		y = y >> 1; // y=y/2;
		n = (n * n) % mod;
	}
	return res;
}

string Binary(int n)
{
	string ans = "";

	{
	int i = 30;
	for ( ; i >= 0; ) 
{
		int temp = n >> i;
		temp = temp & 1;
		ans.push_back(temp + '0');
		i--; 
	
	}}
	return ans;
}

/*********************************************** Main Code ***********************************************/

// const int N = 2e5 + 5;

void solve()
{
	int n;
	cin >> n;

	vector<int> v;
   ll sum=0;
	map<int,int>mp;
	fr(i, n)
	{
		int y;
		cin >> y;

		sum+=y;
		// mp[y]++;
		v.push_back(y);
	}

	ll mean = sum/n;

	ll cnt = 0;


	if((2*sum)%n!=0)
	{
		cout << 0 << "\n";
		return;
	}
	ll target = 2*sum/n;
  
	{
	int i=0;
	for ( ; i<n; ) 
{
		if(mp.count(target-v[i]))
		{
			cnt+=mp[target-v[i]];
		}

		mp[v[i]]++;
		i++; 
	
	}}


	cout << cnt << "\n";

	 
}

/*************** main *****************/
int main()
{

	
	cin.tie(NULL);
	cout.tie(NULL);

	ll t;
	cin >> t;

	for ( ; t--; ) 
solve();
	return 0;
}
