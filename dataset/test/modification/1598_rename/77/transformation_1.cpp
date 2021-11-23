#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cxp_e;
    cin>>cxp_e;
    while(cxp_e--){
        int eq_d;
        cin>>eq_d;
        string yb[2];
        for(int qf_ux=0;qf_ux<2;qf_ux++){
            cin>>yb[qf_ux];
            // for(int j=0;j<col;j++){
            //     cout<<arr[i][j]<<typeid(arr[i][j]).name()<<"\n";
            // }
        }
        bool yjm=0;
        for(int fve=1;fve<eq_d;fve++){
            //cout<<"here "<<arr[0][i]<<" "<<arr[1][i]<<"\n";
            if (yb[0][fve]=='1' &&yb[1][fve]=='1'){
                yjm=1;
                break;
            }
            }
        if (yjm==1){
            cout<<"NO"<<"\n";
        }
        else{
        cout<<"YES"<<"\n";
        }
    }
    return 0;
}