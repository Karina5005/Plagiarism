#include <bits/stdc++.h>
using namespace std;
 
void ef(){
    string ang_cvn;
    cin >> ang_cvn;
    int lc = 0;
    for(int v=0;v<ang_cvn.size();v++){
        if(ang_cvn[v]=='N'){
            lc++;
        }
    }
    if(lc == 1){
        cout << "No" << endl;
        return;
    }
    cout << "yes" << endl;
}
 
int main(){
    int ihd;
    cin >> ihd;
    while(ihd--){
        ef();
    }
}