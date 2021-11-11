#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>


using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; 

#define ll long long int
#define fr(i, n) for (int i = 0; i < n; i++)




#define inf 1e12
#define ninf -1e12
int mod = 998244353;
ll power(ll n, ll y)
{
	ll res = 1;

	n = n % mod;
	/* 'if' begin */
	if (n == 0)
	/* 'if' inside */
	{
		return 0;
	}
	while (y > 0)
	{
		

		/* 'if' begin */
		if (y & 1)
			/* 'if' inside */
			res = (res * n) % mod;

		

		y = y >> 1; 
		n = (n * n) % mod;
	}
	return res;
}

string Binary(int n)
{
	string ans = "";

	for (int i = 30; i >= 0; i--)
	/* 'for' inside */
	{
		int temp = n >> i;
		temp = temp & 1;
		ans.push_back(temp + '0');
	}
	return ans;
}





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
		
		v.push_back(y);
	}

	ll mean = sum/n;

	ll cnt = 0;


	/* 'if' begin */
	if((2*sum)%n!=0)
	/* 'if' inside */
	{
		cout << 0 << "\n";
		return;
	}
	ll target = 2*sum/n;
  
	for(int i=0;i<n;i++)
	/* 'for' inside */
	{
		/* 'if' begin */
		if(mp.count(target-v[i]))
		/* 'if' inside */
		{
			cnt+=mp[target-v[i]];
		}

		mp[v[i]]++;
	}


	cout << cnt << "\n";

	 
}


int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t;
	cin >> t;

	while (t--)
		solve();
	return 0;
}
