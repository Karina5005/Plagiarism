#include<bits/stdc++.h>
using namespace std;
int main(){
    int zya; cin >> zya;
    while(zya--){
        int y; cin >> y;
        int h_qiv[y+1];
        int uva=0;
        long long at = 0;
        for(int pq=1;pq<=y;pq++) cin >> h_qiv[pq];
        for(int jz=1;jz<=y;jz++){
            long long ukf = ((jz*(jz-1))/2);
            at += h_qiv[jz];
            if(at < ukf){
                uva=1;
                break;
            }
        }
        if(uva) cout << "NO\n";
        else cout << "YES\n";
    }
    
}