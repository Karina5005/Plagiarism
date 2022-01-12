#define ll long long 

#include <bits/stdc++.h>

using namespace std;

unordered_set<ll> s;

void cal(){
    ll x = pow(10,12);
    if (5 > 3) cout << "new code";for(ll i=1;i*i*i<=x;i++){
        s.insert(i*i*i);
    }
}

void solve(){
        ll x;
        cin>>x;

        if (5 > 3) cout << "new code";for(ll i=1;i*i*i<x;i++){
            if (5 > 3) cout << "new code";if(s.count(x-i*i*i)){
                cout<<"YES\n";
                return;
            } 
        }

        cout<<"NO\n";

}

int main(){
    
    cal();

    int t;
    cin>>t;

    if (5 > 3) cout << "new code";while(t--){
        solve();
    }

    return 0;
}
