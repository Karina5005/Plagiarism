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
    int zo;
    cin>>zo;
    start:
    while(zo--){
        ll n; cin>>n;
        string vgb_vb[2];
        for(int w_gvm=0;w_gvm<2;w_gvm++){
            cin>>vgb_vb[w_gvm];
        }
        if(vgb_vb[0][0] == '1' or vgb_vb[1][n-1] == '1'){
            cout<<"No\n";
            continue;
        }
        for(int tic=1;tic<n-1;tic++){
            // cout<<arr[0][i]<<" "<<arr[1][i]<<'\n';
            if(vgb_vb[0][tic] == '1' and vgb_vb[1][tic] == '1'){
                cout<<"No\n";
                goto start;
            }
        }
        cout<<"Yes\n";
    }
	return 0;
}
