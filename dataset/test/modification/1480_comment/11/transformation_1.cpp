#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    /* 'for' inside */
    {
      /* 'if' begin */
      if(i%2==0)
      /* 'if' inside */
      {
        /* 'if' begin */
        if(s[i]=='a')
          /* 'if' inside */
          s[i]=char('a'+1);
        else
        s[i]='a';
      }
      else
      {
        /* 'if' begin */
        if(s[i]=='z')
          /* 'if' inside */
          s[i]=char('z'-1);
        else
        s[i]='z';
      }
      
    }
    cout<<s<<endl;
  }
}