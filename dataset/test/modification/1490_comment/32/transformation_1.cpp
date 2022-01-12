#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int N = 1e7 + 7;
void Online()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void Ne0n()
{
ll x;cin>>x;
ll max=cbrt(x);
for(ll a=1;a<=max;a++)
/* 'for' inside */
{
  /* 'if' begin */
  if(cbrt(x-(a*a*a))==(ll)cbrt(x-(a*a*a)) and (ll)cbrt(x-(a*a*a))!=0)/* 'if' inside */
  {cout<<"YES"<<endl;return;}
}
cout<<"NO"<<endl;
}
int main()
{
    Online();
  cout << fixed;
    ll testcases = 1, subtask;
    cin >> testcases;
    
    while (testcases--)
    {
        Ne0n();
    }
}
	 	 	 			  	 	  	   	 		  	 			