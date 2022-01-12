#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> vec;

void solve(){
   ll a,b,c;
   cin>>a>>b>>c;
   ll k=(a+b+c)/9;
  if((a+b+c)%9==0&&(a>=k)&&(b>=k)&&(c>=k))
  {
      cout<<"YES";
      return;
  }
  else{
      cout<<"NO";
      return;
  }


}
int main() {
    ll t;
cin>>t;
   
    while(t--){
   solve();
   
   cout<<"\n";
}
}