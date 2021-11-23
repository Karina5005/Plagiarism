#include <iostream>

using namespace std;

int main()
{
    int le, x, y_k = 0;
    bool t_fe;
    string uud, cun;
    cin >> le;
    while(y_k < le) {
        cin >> x;
        cin >> uud >> cun;
        int c_pp = 1;
        t_fe = true;
        while(c_pp < x - 2) {
            if(uud.at(c_pp) == '1' && cun.at(c_pp) == '1') {
                cout << "NO" << endl;
                break;
            }
            c_pp++;
        }
        if(c_pp + 2 == x) {
            if(uud.at(c_pp) == '1' && cun.at(c_pp) == '1') {
                cout << "NO" << endl;
            }
            else if(cun.at(c_pp + 1) == '1') {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
            }
        }
        y_k++;
    }
    return 0;
}