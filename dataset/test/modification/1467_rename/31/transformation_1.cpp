#include<bits/stdc++.h>
using namespace std;
int main(){

    int it;
    cin>>it;
    while(it--){
        int mmd;
        cin>>mmd;
        if(mmd==1){
            cout<<9<<endl;
            continue;
        }
        if(mmd==2){
            cout<<98<<endl;
            continue;
        }
        if(mmd==3){
            cout<<989<<endl;
            continue;
        }


        cout<<989;
        mmd=mmd-3;
        for(int ue_mfc=0;ue_mfc<mmd;ue_mfc++){
            cout<<( (ue_mfc%10));
        }
        cout<<endl;
    }

    return 0;
}