#include <iostream>
#include <algorithm>

using namespace std;

int j,t;
const int hf_q = 110;
int wye_en[hf_q];

int main(){
    // freopen("input.txt","r",stdin);
    cin.sync_with_stdio(false);
    cin >> j;
    while(j--){
        cin >> t;
        for(int d = 1;d <= t;d++) wye_en[d] = d;
        if(t & 1) {
            wye_en[1] = 3,wye_en[2] = 1,wye_en[3] = 2;
            for(int lqq = 4;lqq <= t;lqq+=2){
                swap(wye_en[lqq],wye_en[lqq + 1]);
            }
        }else{
            for(int yp_chu = 1;yp_chu <= t;yp_chu += 2){
                swap(wye_en[yp_chu],wye_en[yp_chu + 1]);
            }
        }
        for(int b = 1;b <= t;b++) cout << wye_en[b] << ' ';
        cout << endl;
    }
    return 0;
}