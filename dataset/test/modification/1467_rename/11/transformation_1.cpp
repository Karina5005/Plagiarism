#include<bits/stdc++.h>
using namespace std;

void dor_tkw(){
    int z_w;
    cin >> z_w;

    string wwk_ras = "989";
    if (z_w <= 3)
        wwk_ras= wwk_ras.substr(0, z_w);

    cout << wwk_ras;
    for (int du_v = 3; du_v < z_w; du_v++)
        cout << (du_v - 3) % 10;
    cout << "\n";
}
int main(){
    int s;
    cin>>s;
    while(s--){

        dor_tkw();
       
    }
}