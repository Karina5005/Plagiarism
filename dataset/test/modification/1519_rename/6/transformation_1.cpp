#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void vjx_bw(){
        ll o_but , auo_dy , g;
        cin >> o_but >> auo_dy >> g;
        ll h = abs(o_but - auo_dy) ;
        ll gaz_qdk = min(o_but , auo_dy) ;
        ll fl = ( h + gaz_qdk - 1) / gaz_qdk ;
        if(fl <= g) cout << "YES" << endl;
        else cout << "NO" << endl ;
    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int pnu_al = 1;
    cin >> pnu_al ;
    for(int xo = 1 ; xo <= pnu_al ; xo ++){
        TC nff;
        nff.vjx_bw() ;
    }

    return 0 ;
}