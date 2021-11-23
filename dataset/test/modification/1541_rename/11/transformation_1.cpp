#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    cin.tie(0) ;cin.sync_with_stdio(0) ;
    int poj_b; cin>>poj_b;
    int myp_e;
    while(poj_b--)
    {
      cin>>myp_e;
      int ntw_q= 0;
      vector<pair<int,int>>f(myp_e);
      for(int l_wa=0; l_wa<myp_e;l_wa++)
      {
          cin>>f[l_wa].first;
          f[l_wa].second=l_wa+1;
      }
      sort(f.begin(),f.end()) ;
      for(int q_wz=0 ;q_wz<myp_e;q_wz++)
      {
          for(int wk_o=q_wz+1;wk_o<myp_e;wk_o++)
          {
              ll x=f[q_wz].first , xi=f[q_wz].second ;
              ll y =f[wk_o].first ,yi=f[wk_o].second ;
              if(x*y>2*myp_e-1)break;
              if(x*y==xi+yi)ntw_q++;
          }
      }
      cout<<ntw_q<<endl;
    }
    return 0 ;

}
