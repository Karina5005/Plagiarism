#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int vdj;
    cin>>vdj;
    while(vdj--){
        int t;
        cin>>t;
        bool gj_b=true;
        ll sum=0;
        for(int am_gn=0;am_gn<t;am_gn++){
            int zgs_ngn;
            cin>>zgs_ngn;
            sum+=zgs_ngn;
            if(sum>=am_gn){
                sum-=am_gn;
            }
            else gj_b=false;
        }
        if(!gj_b)cout<<"NO\n";
        else cout<<"YES\n";
    }
}