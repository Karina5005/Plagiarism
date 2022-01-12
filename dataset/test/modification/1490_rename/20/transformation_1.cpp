#define ll long long 

#include <bits/stdc++.h>

using namespace std;

unordered_set<ll> zfl;

void sx(){
    ll x = pow(10,12);
    for(ll i=1;i*i*i<=x;i++){
        zfl.insert(i*i*i);
    }
}

void c(){
        ll x;
        cin>>x;

        for(ll i=1;i*i*i<x;i++){
            if(zfl.count(x-i*i*i)){
                cout<<"YES\n";
                return;
            } 
        }

        cout<<"NO\n";

}

int main(){
    
    sx();

    int vdj;
    cin>>vdj;

    while(vdj--){
        c();
    }

    return 0;
}
