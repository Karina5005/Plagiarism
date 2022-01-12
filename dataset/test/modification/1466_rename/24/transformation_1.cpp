#include <bits/stdc++.h>
using namespace std;

void i_ej()
{
     int ww;
     cin>>ww;
     int gx[ww];
     map<int,int>qo;
     for(int c_qti=0;c_qti<ww;c_qti++)
     {
          cin>>gx[c_qti];
     }
     sort(gx,gx+ww);
     for(int f=1;f<ww;f++)
     {
          if(gx[f]<=gx[f-1])
          gx[f]++;
     }
     for(int zh_zp=0;zh_zp<ww;zh_zp++)
     {
          qo[gx[zh_zp]]++;
     }
     cout<<qo.size()<<endl;
}

int main() 
{
  int w=1;
  cin>>w;
  while(w--)
  {
      i_ej();
  }
	return 0;
}
