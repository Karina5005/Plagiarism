#include <stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
//Compiler version gcc  6.3.0

int main()
{
  int z,lu,bs,b_rnd,ty,rs_vt;
  string x,l_kgj;
  cin>>rs_vt;
  while(rs_vt--)
  {
    cin>>b_rnd>>x>>l_kgj;
    ty=0;
    for(lu=0;lu<b_rnd;lu++)
    {
      if(x[lu]=='1' && l_kgj[lu]=='1')
      {
        ty++;
      }
    }
    if(ty>0)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
  }
   return 0;
}