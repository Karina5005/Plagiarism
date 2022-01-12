#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fp(ll a, ll b){
    ll res=1;
    while(b){
        if(b&1)
        res*=a;
        a*=a;
        b/=2;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int du_v;
    cin>>du_v;
    start:
    while(du_v--){
        ll n; cin>>n;
        string s[2];
        for(int kz=0;kz<2;kz++){
            cin>>s[kz];
        }
        if(s[0][0] == '1' or s[1][n-1] == '1'){
            cout<<"No\n";
            continue;
        }
        for(int pm=1;pm<n-1;pm++){
            // cout<<arr[0][i]<<" "<<arr[1][i]<<'\n';
            if(s[0][pm] == '1' and s[1][pm] == '1'){
                cout<<"No\n";
                goto start;
            }
        }
        cout<<"Yes\n";
    }
	return 0;
}
