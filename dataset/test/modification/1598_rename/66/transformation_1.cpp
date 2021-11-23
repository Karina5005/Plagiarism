#include<bits/stdc++.h>
#include <vector>
using namespace std;


void ohh_cav(){
    int py_vi;
    cin >> py_vi;
    vector<char> n_ap;
    vector<char> qqc_n;
    for(int omw_h = 0; omw_h < py_vi; omw_h++){
        char bys;
        cin >> bys;
        /* cout << x << " "; */
        n_ap.push_back(bys);
    }
    for(int tn = 0; tn < py_vi; tn++){
        char oym;
        cin >> oym;
        /* cout << y << " "; */
        qqc_n.push_back(oym);
    }

    int yty = 2;
    int v_iy = 1;
    while(yty < py_vi && v_iy){
        if(n_ap[yty - 1] == '0' || qqc_n[yty - 1] == '0'){
            yty++;
        }
        else{
            v_iy = 0;
        }
    }

    /* cout << n; */
    /* for(int x : up){ */
        /* cout << x; */
    /* } */
    /* cout << " "; */
    /* for(int x : down){ */
        /* cout << x; */
    /* } */
    /* while(n--){ */
    /*     cout << up[n] << down[n] << " "; */
    /* } */

    if(v_iy){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout.precision(numeric_limits<double>::max_digits10);

    int nmg_y;
    cin >> nmg_y;
    while(nmg_y--) ohh_cav();

    return 0;
}
