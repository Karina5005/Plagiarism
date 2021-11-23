#include <iostream>
#include <map>
#include <utility>
using namespace std;

int o_rr[] = {1,0,1,1};
int od[] = {0,1,1,-1};
int main()
{
    int k_jw;
    string bal_al[2];
    cin>>k_jw;
    while(k_jw--){
     int uwd;
     string gs_zzh;
     cin>>uwd;
     bool zi = false;
     for(int p_vxa=0;p_vxa<2;p_vxa++){
        cin>>gs_zzh;
        bal_al[p_vxa] = gs_zzh;
     }
     if(bal_al[0][0] == '1'){
        cout<<"NO"<<endl;
        continue;
     }
     int gfb_hzw=0,bf=0;
     bool s_r = true;
     while(s_r){
     s_r = false;
     for(int di=0;di<4;di++){
      if(gfb_hzw+o_rr[di] >= bal_al[bf].size())continue;
      if(bf+od[di] >= 2 || bf+od[di] < 0 )continue;
      if(bal_al[bf + od[di]][gfb_hzw + o_rr[di]] == '1')continue;
      gfb_hzw = gfb_hzw + o_rr[di];
      bf = bf + od[di];
      s_r = true;
      break;
     }
     }
     if(gfb_hzw==bal_al[1].size()-1 && bf==1){
        cout<<"YES"<<endl;
     }
     else {
        cout<<"NO"<<endl;
     }
    }
    return 0;
}
