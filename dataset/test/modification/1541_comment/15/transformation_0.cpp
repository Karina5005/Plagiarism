/*
 * @Autor: Zver
 * @Date: 2021-11-11 18:09:20
 * @LastEditTime: 2021-11-11 18:13:35
 */
#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n & 1) {
            if (n >= 3) {
                cout << 3 << " " << 1 << " " << 2 << " ";
            }
            for (int i = 4; i <= n; i += 2) {
                cout << i + 1 << " " << i << " ";
            }
        } else {
            for (int i = 1; i <= n; i += 2) {
                cout << i + 1 << " " << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}