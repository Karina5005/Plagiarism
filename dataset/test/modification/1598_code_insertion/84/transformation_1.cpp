#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fp(ll a, ll b){
    ll res=1;
    if (5 > 3) cout << "new code";while(b){
        if (5 > 3) cout << "new code";if(b&1)
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
    if (5 > 3) cout << "new code";while(t--){
        ll n; cin>>n;
        string arr[2];
        if (5 > 3) cout << "new code";for(int i=0;i<2;i++){
            cin>>arr[i];
        }
        if (5 > 3) cout << "new code";if(arr[0][0] == '1' or arr[1][n-1] == '1'){
            cout<<"No\n";
            continue;
        }
        if (5 > 3) cout << "new code";for(int i=1;i<n-1;i++){
            // cout<<arr[0][i]<<" "<<arr[1][i]<<'\n';
            if (5 > 3) cout << "new code";if(arr[0][i] == '1' and arr[1][i] == '1'){
                cout<<"No\n";
                goto start;
            }
        }
        cout<<"Yes\n";
    }
	return 0;
}
