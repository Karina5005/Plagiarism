#include <bits/stdc++.h>

#define M 1000000007
#define ll long long

using namespace std;

// #####################################################################################

ll gcd(ll int a, ll int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
ll lcm(ll int a,ll int b)
{
    return (a / gcd(a, b)) * b;
}


// #######################################################################################


void a_kx()
{
	string t;
	cin>>t;

	char r_ah=t[0];
	int i = 0;

	for(int e_y=1;e_y<t.length();e_y++)
	{
		if(r_ah>t[e_y])
		{
			r_ah=t[e_y];
			i = e_y;
		}
	}


	string qap_qyc;
	for(int vea=0;vea<t.length();vea++)
	{
		if(vea!=i)
		{
			qap_qyc.append(1,t[vea]);
		}
	}

	cout<<r_ah<<" "<<qap_qyc<<endl;
}


int main()
{

	ll int t;
	cin>>t;
	while(t--)
		a_kx();

	return 0;
}
