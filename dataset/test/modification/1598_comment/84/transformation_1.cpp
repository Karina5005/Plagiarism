#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fp(ll a, ll b){
    ll res=1;
    while(b){
        /* 'if' begin */
        if(b&1)
        /* 'if' inside */
        res*=a;
        a*=a;
        b/=2;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    start:
    while(t--){
        ll n; cin>>n;
        string arr[2];
        for(int i=0;i<2;i++)/* 'for' inside */
        {
            cin>>arr[i];
        }
        /* 'if' begin */
        if(arr[0][0] == '1' or arr[1][n-1] == '1')/* 'if' inside */
        {
            cout<<"No\n";
            continue;
        }
        for(int i=1;i<n-1;i++)/* 'for' inside */
        {
            
            /* 'if' begin */
            if(arr[0][i] == '1' and arr[1][i] == '1')/* 'if' inside */
            {
                cout<<"No\n";
                goto start;
            }
        }
        cout<<"Yes\n";
    }
	return 0;
}
