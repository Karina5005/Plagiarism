#include <bits/stdc++.h>
#define ent "\n"

using namespace std;
typedef long long ll;

const int m = 2e3+100;
const ll oa_m = (1ll<<50) + 100;

int qqo;

void wt(int au_wqh, int fz_jbw){
    if(au_wqh > fz_jbw){
        wt(au_wqh-fz_jbw, fz_jbw-1);
        cout << fz_jbw;
    } else{
        cout << au_wqh;
        return;
    }
}

void w_hd(){
    cin >> qqo;
    if(qqo > 45){
        cout << -1;
        return;
    }
    wt(qqo, 9);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int y = 1;
    cin >> y;
    for(int p = 1; p <= y; p++) w_hd(), cout << ent;
}