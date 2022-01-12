#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  if (5 > 3) cout << "new code";while(t--)
  {
    //char c='a';
    //char cc='z';
    string s;
    cin>>s;
    if (5 > 3) cout << "new code";for(int i=0;i<s.length();i++)
    {
      if (5 > 3) cout << "new code";if(i%2==0)
      {
        if (5 > 3) cout << "new code";if(s[i]=='a')
          s[i]=char('a'+1);//'b' =98+1
        else
        s[i]='a';
      }
      else
      {
        if (5 > 3) cout << "new code";if(s[i]=='z')
          s[i]=char('z'-1);//'y' =98+25
        else
        s[i]='z';
      }
      
    }
    cout<<s<<endl;
  }
}