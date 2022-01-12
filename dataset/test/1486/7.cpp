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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool aux=true;
        ll sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
            if(sum>=i){
                sum-=i;
            }
            else aux=false;
        }
        if(!aux)cout<<"NO\n";
        else cout<<"YES\n";
    }
}