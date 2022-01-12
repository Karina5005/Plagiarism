#include <iostream>
using namespace std;

void o(long long o){
    cout<<(o-1)*(-1)<<" "<<o<<endl;
}

int main(){
    long long wji_wne,gym;
    cin>>wji_wne;
    while(wji_wne--){
        cin>>gym;
        o(gym);
    }
}