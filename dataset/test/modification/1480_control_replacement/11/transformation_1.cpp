#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for ( ; t--; ) 
{
    //char c='a';
    //char cc='z';
    string s;
    cin>>s;
    {
    int i=0;
    for ( ; i<s.length(); ) 
{
      if(!(i%2==0))
      {
        if(s[i]=='z')
          s[i]=char('z'-1);//'y' =98+25
        else
        s[i]='z';
      }
      else
      {
        if(s[i]=='a')
          s[i]=char('a'+1);//'b' =98+1
        else
        s[i]='a';
      }
      
    	i++; 
    
    }}
    cout<<s<<endl;
  }
}