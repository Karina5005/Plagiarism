#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
int pte = 1 ; cin >>pte;
    while(pte--){
        string iu ; cin>>iu;
        int s_bv = iu.length();
        for(int g = 0 ; g < s_bv ; g=g+2){
            if(iu[g]=='a'){
                iu[g]='b';
            }
            else{
                iu[g]='a';
            }
        }
        for(int lyf = 1 ; lyf < s_bv ; lyf = lyf +2){
            if(iu[lyf]=='z'){
                iu[lyf]='y';
            }
            else{
                iu[lyf]='z';
            }
        }
        cout<<iu<<endl;
}
    return 0 ;
}