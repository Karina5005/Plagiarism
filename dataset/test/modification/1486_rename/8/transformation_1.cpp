//
//  main.cpp
//  PracticeProgrammingWithCodeForces
//
//  Created by Tuan Minh Pham on 12/10/21.
//

#include "bits/stdc++.h"
#define ll long long
#define N 100005
using namespace std;


int main(){

    int t_eb; cin>>t_eb;
    while(t_eb--){
        ll m; cin>>m;
        bool zz_xna = true;
        ll cnt = 0;
        ll remain = 0;
        while(m--){
            ll x; cin>>x;
            if(x+remain < cnt) zz_xna = false;
            remain = x + remain - cnt;
            cnt ++;
        }
        cout<<(zz_xna?"YES":"NO")<<endl;
    }
    return 0;
}
