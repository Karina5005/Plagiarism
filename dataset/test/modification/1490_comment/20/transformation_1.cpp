#define ll long long 

#include <bits/stdc++.h>

using namespace std;

unordered_set<ll> s;

void cal(){
    ll x = pow(10,12);
    for(ll i=1;i*i*i<=x;i++)/* 'for' inside */
    {
        s.insert(i*i*i);
    }
}

void solve(){
        ll x;
        cin>>x;

        for(ll i=1;i*i*i<x;i++)/* 'for' inside */
        {
            /* 'if' begin */
            if(s.count(x-i*i*i))/* 'if' inside */
            {
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

    while(t--){
        solve();
    }

    return 0;
}
