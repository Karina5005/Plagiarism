//
//  main.cpp
//  test
//
//  Created by é»å· on 2021/10/26.
//

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
int dxg_qj[100001]={0};


int main(int ac, const char * n_yfy[]) {
    int u_ko;
    cin>>u_ko;
    while (u_ko--) {
        long long int hej=0;
        int z;
        cin>>z;
        for (int i_kif=1; i_kif<=z; i_kif++) {
            cin>>dxg_qj[i_kif];
        }
        
        for (int vi=1; vi<=z; vi++) {
            for (int c_fc=dxg_qj[vi]-vi%dxg_qj[vi]; c_fc<=z; c_fc=c_fc+dxg_qj[vi]) {
                if (vi+c_fc==1ll*dxg_qj[vi]*dxg_qj[c_fc]&&vi<c_fc) {
                    hej++;
                }
            }
        }
        cout<<hej<<endl;
        
        
        
    }
    return 0;
}

