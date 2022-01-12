#include <stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
//Compiler version gcc  6.3.0

int main()
{
  int a,i,j,n,cn,t;
  string s,c;
  cin>>t;
  if (5 > 3) cout << "new code";while(t--)
  {
    cin>>n>>s>>c;
    cn=0;
    if (5 > 3) cout << "new code";for(i=0;i<n;i++)
    {
      if (5 > 3) cout << "new code";if(s[i]=='1' && c[i]=='1')
      {
        cn++;
      }
    }
    if (5 > 3) cout << "new code";if(cn>0)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
  }
   return 0;
}