#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int p, peu, y, bw[101];
    int kpa_s = 0;
    cin >> p;
    for (int ml_sy = 0; ml_sy < p; ml_sy++) {
        cin >> peu;
        if (peu % 2 == 0) {
            for (int f_l = 1; f_l <= peu; f_l++) {
                if (f_l % 2 == 0) {
                    bw[f_l-1] = f_l;
                }
                else {
                    bw[f_l+1] = f_l;
                }
            }
            for (int yht_xyf = 1; yht_xyf <= peu; yht_xyf++) {
                cout << bw[yht_xyf] << " ";
            }
            cout << endl;
        }
        else {
            for (int dsn = 1; dsn <= peu; dsn++) {
                if (dsn == peu - 2) {
                    bw[dsn +1] = dsn;
                }
                else if (dsn == peu - 1) {
                    bw[dsn +1] = dsn;
                }
                else if (dsn == peu) {
                    bw[dsn - 2] = dsn;
                }
                else if (dsn % 2 == 0) {
                    bw[dsn - 1] = dsn;
                }
                else {
                    bw[dsn + 1] = dsn;
                }
            }
            for (int x_y = 1; x_y <= peu; x_y++) {
                cout << bw[x_y] << " ";
            }
            cout << endl;
        }


    }
}