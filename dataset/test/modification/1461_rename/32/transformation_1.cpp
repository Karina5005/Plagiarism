
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int pm;
    cin>>pm;
    while(pm--) {
        long long int r, lr;
        cin >> r >> lr;
        long long int gt = r / 3;
        long long int bim = r % 3;
       while(gt--) {
           cout << "abc";
       }
       if(bim>0) {
           bim--;
           cout << "a";
       }
       if(bim>0) {
           bim--;
           cout << "b";
       }
       cout << endl;
    }
    return 0;
}