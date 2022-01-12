#include <iostream>
using namespace std;
int main(){
    int pi_d, mav_iz;
    string z;
    cin >> pi_d;
    while(pi_d--){
        cin >> mav_iz >> z;
        if(z[0] == '2' && z[1] == '0' && z[2] == '2' && z[3] == '0')
            cout << "YES\n";
        else if(z[0] == '2' && z[1] == '0' && z[2] == '2' && z[mav_iz - 1] == '0')
            cout << "YES\n";
        else if(z[0] == '2' && z[1] == '0' && z[mav_iz - 2] == '2' && z[mav_iz - 1] == '0')
            cout << "YES\n";
        else if(z[0] == '2' && z[mav_iz - 3] == '0' && z[mav_iz - 2] == '2' && z[mav_iz - 1] == '0')
            cout << "YES\n";
        else if(z[mav_iz - 4] == '2' && z[mav_iz - 3] == '0' && z[mav_iz - 2] == '2' && z[mav_iz - 1] == '0')
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
