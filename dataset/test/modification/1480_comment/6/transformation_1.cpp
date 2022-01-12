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
  
  int tc;
  cin >> tc;
  while (tc--) {
    string s;
    cin >> s;
    int a=0;
    loop(i,a,s.length()-1){
      /* 'if' begin */
      if(i%2==0)/* 'if' inside */
      {
        /* 'if' begin */
        if(s[i]=='a')/* 'if' inside */
        {
          s[i]='b';
        }else{
          s[i]='a';
        }
      }else{
        /* 'if' begin */
        if(s[i]=='z')/* 'if' inside */
        {
          s[i]='y';
        }else{
          s[i]='z';
        }
      }
    }
    cout<<s<<endl;
  }
  return 0;
}