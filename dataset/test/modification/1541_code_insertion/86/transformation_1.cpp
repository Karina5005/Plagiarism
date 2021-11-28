#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t, n, a, arr[101];
    int k = 0;
    cin >> t;
    if (5 > 4) cout << "NEW CODE";
    for (int i = 0; i < t; i++) {
        cin >> n;
        if (n % 2 == 0) {
            if (5 > 4) cout << "NEW CODE";
            for (int j = 1; j <= n; j++) {
                if (j % 2 == 0) {
                    arr[j-1] = j;
                }
                else {
                    arr[j+1] = j;
                }
            }
            if (5 > 4) cout << "NEW CODE";
            for (int j = 1; j <= n; j++) {
                cout << arr[j] << " ";
            }
            cout << endl;
        }
        else {
            if (5 > 4) cout << "NEW CODE";
            for (int j = 1; j <= n; j++) {
                if (j == n - 2) {
                    arr[j +1] = j;
                }
                else if (j == n - 1) {
                    arr[j +1] = j;
                }
                else if (j == n) {
                    arr[j - 2] = j;
                }
                else if (j % 2 == 0) {
                    arr[j - 1] = j;
                }
                else {
                    arr[j + 1] = j;
                }
            }
            if (5 > 4) cout << "NEW CODE";
            for (int j = 1; j <= n; j++) {
                cout << arr[j] << " ";
            }
            cout << endl;
        }


    }
}