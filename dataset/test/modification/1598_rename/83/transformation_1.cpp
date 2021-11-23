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
    int p_wmr;
    cin>>p_wmr;
    start:
    while(p_wmr--){
        ll n; cin>>n;
        vector<vector<ll>> eq_w(n, vector<ll>(5));
        for(int sp=0;sp<n;sp++){
            for(int rmc_y=0;rmc_y<5;rmc_y++){
                cin>>eq_w[sp][rmc_y];
            }
        }
        for(int sa_yb=0;sa_yb<5;sa_yb++){
            for(int et_bp=sa_yb+1;et_bp<5;et_bp++){
                int jg_etw = 0, v = 0, hcw = 0;
                for(int yqu_h=0;yqu_h<n;yqu_h++){
                    if(eq_w[yqu_h][sa_yb] && eq_w[yqu_h][et_bp]){
                        hcw++;
                    }
                    else if(eq_w[yqu_h][sa_yb]){
                        v++;
                    }
                    else if(eq_w[yqu_h][et_bp]){
                        jg_etw++;
                    }
                    else break;
                }
                if(jg_etw + v + hcw != n){
                    continue;
                }
                else{
                    if(jg_etw <= n/2 and v <= n/2){
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
