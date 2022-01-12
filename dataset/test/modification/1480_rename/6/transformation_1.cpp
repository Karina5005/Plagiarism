#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define loop(i,a,b)   for(ll i=a;i<=b;++i)
#include <string>

int main() {
	#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
  
  int f_eru;
  cin >> f_eru;
  while (f_eru--) {
    string i_bkq;
    cin >> i_bkq;
    int v_o=0;
    loop(i,a,s.length()-1){
      if(i%2==0){
        if(i_bkq[i]=='a'){
          i_bkq[i]='b';
        }else{
          i_bkq[i]='a';
        }
      }else{
        if(i_bkq[i]=='z'){
          i_bkq[i]='y';
        }else{
          i_bkq[i]='z';
        }
      }
    }
    cout<<i_bkq<<endl;
  }
  return 0;
}