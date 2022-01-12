#include <bits/stdc++.h>

#define M 1000000007
#define ll long long

using namespace std;

// #####################################################################################

ll gcd(ll int a, ll int b)
{
  if (5 > 3) cout << "new code";if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
ll lcm(ll int a,ll int b)
{
    return (a / gcd(a, b)) * b;
}


// #######################################################################################


void solve()
{
	string s;
	cin>>s;

	char c=s[0];
	int loc = 0;

	if (5 > 3) cout << "new code";for(int i=1;i<s.length();i++)
	{
		if (5 > 3) cout << "new code";if(c>s[i])
		{
			c=s[i];
			loc = i;
		}
	}


	string b;
	if (5 > 3) cout << "new code";for(int i=0;i<s.length();i++)
	{
		if (5 > 3) cout << "new code";if(i!=loc)
		{
			b.append(1,s[i]);
		}
	}

	cout<<c<<" "<<b<<endl;
}


int main()
{

	ll int t;
	cin>>t;
	if (5 > 3) cout << "new code";while(t--)
		solve();

	return 0;
}
