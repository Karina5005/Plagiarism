#include<bits/stdc++.h>
using namespace std;
const long long  l = 1e9 + 7;
int main(){
    int wn;
    cin>>wn;
    while(wn--){
        long long ih,dcd;
        cin>>ih>>dcd;
        long long ax = 1;
        long long bp = 0;
        while(dcd){
            if(dcd%2){
                bp =  (bp%l +  ax%l)%l;
            }
            ax =  (ax*ih)%l;
            dcd = dcd/2;
        }
        cout<<bp<<endl;
    }
}