#include <iomanip>
#include <iostream>
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
  for ( ; t--; ) 
{
    cin>>n>>s>>c;
    cn=0;
    {
    i=0;
    for ( ; i<n; ) 
{
      if(s[i]=='1' && c[i]=='1')
      {
        cn++;
      }
    	i++; 
    
    }}
    if(!(cn>0))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
  }
   return 0;
}