#include<bits/stdc++.h>
using namespace std;
int main()
{
  int re_zim;
  cin>>re_zim;
  while(re_zim--)
  {
    //char c='a';
    //char cc='z';
    string o_wa;
    cin>>o_wa;
    for(int hm=0;hm<o_wa.length();hm++)
    {
      if(hm%2==0)
      {
        if(o_wa[hm]=='a')
          o_wa[hm]=char('a'+1);//'b' =98+1
        else
        o_wa[hm]='a';
      }
      else
      {
        if(o_wa[hm]=='z')
          o_wa[hm]=char('z'-1);//'y' =98+25
        else
        o_wa[hm]='z';
      }
      
    }
    cout<<o_wa<<endl;
  }
}