#include <bits/stdc++.h>

using namespace std;
#define int long long
int32_t main() {
    int t;cin>>t;
    while(t--){
        string fnc_h;
        cin>>fnc_h;
        for(int i=0;i<fnc_h.length();i++){
            if(i%2==0){
                if(fnc_h[i]=='a')
                fnc_h[i]='b';
                else
                fnc_h[i]='a';
            }
            else{
                 if(fnc_h[i]=='z')
                fnc_h[i]='y';
                else
                fnc_h[i]='z';
            }
        }
        cout<<fnc_h<<endl;
    }
}