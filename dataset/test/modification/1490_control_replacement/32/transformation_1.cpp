#include <iomanip>
#include <iostream>
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
    
    cin.tie(NULL);
}
void Ne0n()
{
ll x;cin>>x;
ll max=cbrt(x);
{
ll a=1;
for ( ; a<=max; ) 
{
  if(cbrt(x-(a*a*a))==(ll)cbrt(x-(a*a*a)) and (ll)cbrt(x-(a*a*a))!=0){cout<<"YES"<<endl;return;}
	a++; 

}}
cout<<"NO"<<endl;
}
int main()
{
    Online();
  cout << fixed;
    ll testcases = 1, subtask;
    cin >> testcases;
    //cin>>subtask;
    for ( ; testcases--; ) 
{
        Ne0n();
    }
}
	 	 	 			  	 	  	   	 		  	 			