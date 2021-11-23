#include<bits/stdc++.h>
using namespace std;

int main() {
    int y, bw, kpa_s, ml_sy, f_l, yht_xyf, dsn = 0;
    cin >> y >> bw;
    vector<int> x_y(y+1,0);
    while(bw--){
        cin >> kpa_s >> ml_sy;
        if(kpa_s > ml_sy){swap(kpa_s,ml_sy);}
        if(x_y[kpa_s] == 0){dsn++;}
        x_y[kpa_s]++;
    }
    cin >> f_l;
    while(f_l--){
        cin >> yht_xyf;
        if(yht_xyf == 1){
            cin >> kpa_s >> ml_sy;
            if(kpa_s > ml_sy){swap(kpa_s,ml_sy);}
            if(x_y[kpa_s] == 0){dsn++;}
            x_y[kpa_s]++;
        }
        else if(yht_xyf == 2){
            cin >> kpa_s >> ml_sy;
            if(kpa_s > ml_sy){swap(kpa_s,ml_sy);}
            x_y[kpa_s]--;
            if(x_y[kpa_s] == 0){dsn--;}
        }
        else if(yht_xyf == 3){
            cout << y - dsn << "\n";
        }
    }
}