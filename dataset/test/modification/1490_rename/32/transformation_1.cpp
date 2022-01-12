#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
const int at = 1e7 + 7;
void pq()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void jz()
{
ll x;cin>>x;
ll max=cbrt(x);
for(ll a=1;a<=max;a++)
{
  if(cbrt(x-(a*a*a))==(ll)cbrt(x-(a*a*a)) and (ll)cbrt(x-(a*a*a))!=0){cout<<"YES"<<endl;return;}
}
cout<<"NO"<<endl;
}
int main()
{
    pq();
  cout << fixed;
    ll testcases = 1, subtask;
    cin >> testcases;
    //cin>>subtask;
    while (testcases--)
    {
        jz();
    }
}
	 	 	 			  	 	  	   	 		  	 			