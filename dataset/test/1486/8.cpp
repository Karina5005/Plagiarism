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

    int n; cin>>n;
    while(n--){
        ll m; cin>>m;
        bool ok = true;
        ll cnt = 0;
        ll remain = 0;
        while(m--){
            ll x; cin>>x;
            if(x+remain < cnt) ok = false;
            remain = x + remain - cnt;
            cnt ++;
        }
        cout<<(ok?"YES":"NO")<<endl;
    }
    return 0;
}
