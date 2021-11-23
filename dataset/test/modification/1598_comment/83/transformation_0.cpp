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
    int t;
    cin>>t;
    start:
    while(t--){
        ll n; cin>>n;
        vector<vector<ll>> v(n, vector<ll>(5));
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++){
                cin>>v[i][j];
            }
        }
        for(int i=0;i<5;i++){
            for(int j=i+1;j<5;j++){
                int a = 0, b = 0, c = 0;
                for(int k=0;k<n;k++){
                    if(v[k][i] && v[k][j]){
                        c++;
                    }
                    else if(v[k][i]){
                        b++;
                    }
                    else if(v[k][j]){
                        a++;
                    }
                    else break;
                }
                if(a + b + c != n){
                    continue;
                }
                else{
                    if(a <= n/2 and b <= n/2){
                        cout<<"YES\n";
                        goto start;
                    }
                }
            }
        }
        cout<<"NO\n";
    }
	return 0;
}
