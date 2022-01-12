#include <iomanip>
#include <iostream>
#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> vec;

void solve(){
   ll a,b,c;
   cin>>a>>b>>c;
   ll k=(a+b+c)/9;
  if(!((a+b+c)%9==0&&(a>=k)&&(b>=k)&&(c>=k)))
  {
      cout<<"NO";
      return;
  }
  else{
      cout<<"YES";
      return;
  }


}
int main() {
    ll t;
cin>>t;
   
    for ( ; t--; ) 
{
   solve();
   
   cout<<"\n";
}
}