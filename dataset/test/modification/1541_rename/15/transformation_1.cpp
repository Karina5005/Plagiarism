/*
 * @Autor: Zver
 * @Date: 2021-11-11 18:09:20
 * @LastEditTime: 2021-11-11 18:13:35
 */
#include <iostream>

using namespace std;
int main()
{
    int vdr_bo;
    cin >> vdr_bo;
    while (vdr_bo--) {
        int a_okh;
        cin >> a_okh;
        if (a_okh & 1) {
            if (a_okh >= 3) {
                cout << 3 << " " << 1 << " " << 2 << " ";
            }
            for (int a_zxf = 4; a_zxf <= a_okh; a_zxf += 2) {
                cout << a_zxf + 1 << " " << a_zxf << " ";
            }
        } else {
            for (int ux = 1; ux <= a_okh; ux += 2) {
                cout << ux + 1 << " " << ux << " ";
            }
        }
        cout << endl;
    }

    return 0;
}