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
            {
            int i = 4;
            while (i <= n) {
                cout << i + 1 << " " << i << " ";
            	i += 2; 
            
            }}
        } else {
            {
            int i = 1;
            while (i <= n) {
                cout << i + 1 << " " << i << " ";
            	i += 2; 
            
            }}
        }
        cout << endl;
    }

    return 0;
}