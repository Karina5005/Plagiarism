#include <stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


int main()
{
  int a,i,j,n,cn,t;
  string s,c;
  cin>>t;
  while(t--)
  {
    cin>>n>>s>>c;
    cn=0;
    for(i=0;i<n;i++)
    /* 'for' inside */
    {
      /* 'if' begin */
      if(s[i]=='1' && c[i]=='1')
      /* 'if' inside */
      {
        cn++;
      }
    }
    /* 'if' begin */
    if(cn>0)
    /* 'if' inside */
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
  }
   return 0;
}