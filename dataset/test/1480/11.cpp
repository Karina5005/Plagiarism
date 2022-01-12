#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    //char c='a';
    //char cc='z';
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
      if(i%2==0)
      {
        if(s[i]=='a')
          s[i]=char('a'+1);//'b' =98+1
        else
        s[i]='a';
      }
      else
      {
        if(s[i]=='z')
          s[i]=char('z'-1);//'y' =98+25
        else
        s[i]='z';
      }
      
    }
    cout<<s<<endl;
  }
}