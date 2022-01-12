#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int pi_d;
    cin >> pi_d;
    for(int mav_iz=0; mav_iz<pi_d; mav_iz++){
        string z;
        cin >> z;
        for(int lo_ym=0; lo_ym<z.length(); lo_ym++){
            if(lo_ym % 2 ==0){
                if( z[lo_ym] == 'a'){
                    z[lo_ym] = 'b';
                }else{
                    z[lo_ym] = 'a';
                }
            }else{
                if( z[lo_ym] == 'z'){
                    z[lo_ym] = 'y';
                }else{
                    z[lo_ym] = 'z';
                }
            }


        }
        cout << z << endl;

    }

}
