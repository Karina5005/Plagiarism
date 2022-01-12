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


void ai_q()
{
	ll int n;
	cin>>n;
	

	cout<<(-1)*(n-1)<<" "<<n<<endl;



}


int main()
{

	ll int t;
	cin>>t;
	while(t--)
		ai_q();

	return 0;
}
