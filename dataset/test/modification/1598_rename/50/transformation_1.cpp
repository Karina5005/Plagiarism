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
int cl = 998244353;
ll power(ll n, ll y)
{
	ll res = 1;

	n = n % cl;
	if (n == 0)
	{
		return 0;
	}
	while (y > 0)
	{
		// if y is odd ,multiply  x with result

		if (y & 1)
			res = (res * n) % cl;

		// y must be even now

		y = y >> 1; // y=y/2;
		n = (n * n) % cl;
	}
	return res;
}

string fp_xk(int xf)
{
	string dkc = "";

	for (int k_rxq = 30; k_rxq >= 0; k_rxq--)
	{
		int t_j = xf >> k_rxq;
		t_j = t_j & 1;
		dkc.push_back(t_j + '0');
	}
	return dkc;
}

/*********************************************** Main Code ***********************************************/

// const int N = 2e5 + 5;

void me()
{
	int pl_gjl;
	cin >> pl_gjl;

	vector<int> bfu_lpe;
   ll sum=0;
	map<int,int>umy_e;
	fr(i, n)
	{
		int c;
		cin >> c;

		sum+=c;
		// mp[y]++;
		bfu_lpe.push_back(c);
	}

	ll mean = sum/pl_gjl;

	ll cnt = 0;


	if((2*sum)%pl_gjl!=0)
	{
		cout << 0 << "\n";
		return;
	}
	ll target = 2*sum/pl_gjl;
  
	for(int is=0;is<pl_gjl;is++)
	{
		if(umy_e.count(target-bfu_lpe[is]))
		{
			cnt+=umy_e[target-bfu_lpe[is]];
		}

		umy_e[bfu_lpe[is]]++;
	}


	cout << cnt << "\n";

	 
}

/*************** main *****************/
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t;
	cin >> t;

	while (t--)
		me();
	return 0;
}
