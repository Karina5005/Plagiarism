#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        string s;
        cin >> s;
        for(int j=0; j<s.length(); j++){
            if(j % 2 ==0){
                if( s[j] == 'a'){
                    s[j] = 'b';
                }else{
                    s[j] = 'a';
                }
            }else{
                if( s[j] == 'z'){
                    s[j] = 'y';
                }else{
                    s[j] = 'z';
                }
            }


        }
        cout << s << endl;

    }

}
