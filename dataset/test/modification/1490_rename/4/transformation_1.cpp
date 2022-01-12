#include <iostream>
using namespace std;
const int ai=105;
int ddk[ai],j[ai];
int sdd_oyq=0;
void tj_ccb(int y,int pub_be, int dx){
    if(y>pub_be) return;
    int khi_beh=y;
    for(int ged=y;ged<=pub_be;ged++){
        if(ddk[ged]>ddk[khi_beh]) khi_beh=ged;
    }
    j[khi_beh] = dx;
    tj_ccb(y, khi_beh-1, dx+1);
    tj_ccb( khi_beh + 1, pub_be, dx+1);
}
int main() {
    int wj;
    cin >> wj;
    while(wj--){
        int mbx;
        cin >> mbx;
        for(int f_ioa=0;f_ioa<mbx;f_ioa++) cin >> ddk[f_ioa];
        tj_ccb(0,mbx-1,0);
        for(int nv_i=0; nv_i<mbx; nv_i++) cout << j[nv_i] << " ";
        cout << endl;
    }
}
