#include <stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
//Compiler version gcc  6.3.0

int main()
{
  int be_b,zo,mr,zfl,sx,c;
  string vdj,t;
  cin>>c;
  while(c--)
  {
    cin>>zfl>>vdj>>t;
    sx=0;
    for(zo=0;zo<zfl;zo++)
    {
      if(vdj[zo]=='1' && t[zo]=='1')
      {
        sx++;
      }
    }
    if(sx>0)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
  }
   return 0;
}