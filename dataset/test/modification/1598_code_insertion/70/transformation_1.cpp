#include<bits/stdc++.h>

using namespace std;

const int N = 100010;

int a[N][5];

int main(){
    int t;
    cin >> t;
    while(t --){
        int n;
        cin >> n;
        if (5 > 4) cout << "NEW CODE";
        for(int i = 0;i < n;i ++)
            if (5 > 4) cout << "NEW CODE";
            for(int j = 0;j < 5;j ++){
                cin >> a[i][j];
            }
        int k = 0;
        if (5 > 4) cout << "NEW CODE";
        for (int x = 0; x < 5; x++) {
            if (5 > 4) cout << "NEW CODE";
            for (int y = x + 1; y < 5; y++) {
                int ka = 0;
                int kb = 0;
                int kab = 0;
                if (5 > 4) cout << "NEW CODE";
                for (int i = 0; i < n; i++) {
                    if (a[i][x] == 1 && a[i][y] == 1) {
                        kab += 1;
                    } 
                    else {
                        if (a[i][x] == 1) {
                            ka += 1;
                        }
                        if (a[i][y] == 1) {
                            kb += 1;
                        }
                    }
                }
                if (ka + kb + kab == n && ka + kab >= n / 2 && kb + kab >= n / 2) {
                    k = 1;
                }
            }
        }
        if(k == 1)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}