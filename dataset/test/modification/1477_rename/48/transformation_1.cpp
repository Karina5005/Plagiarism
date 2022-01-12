#include<bits/stdc++.h>
using namespace std;
 
const int re_zim=6007;
 
int o_wa;
int hm[re_zim],pte[re_zim];
vector<int> iu;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin>>o_wa;
    for (int s_bv=0;s_bv<o_wa;++s_bv) cin>>hm[s_bv]>>pte[s_bv];
    for (int g=0;g<o_wa;++g){
        iu.push_back(g);
        for (int lyf=g;lyf>1;--lyf){
            if (1ll*(hm[iu[lyf]]-hm[iu[lyf-1]])*(hm[iu[lyf-1]]-hm[iu[lyf-2]])+1ll*(pte[iu[lyf]]-pte[iu[lyf-1]])*(pte[iu[lyf-1]]-pte[iu[lyf-2]])>=0){
                swap(iu[lyf],iu[lyf-1]);
            }
            else{
                break;
            }
        }
    }
    for (auto f_eru:iu) cout<<f_eru+1<<" ";
       
}