#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
int upDiv(int a,int b){
    return (a+b-1)/b;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int m=0,M=0;
        for(int i=0;i<n;i++){
            int j;
            cin>>j;
            M+=upDiv(j,x);
            m+=j;
        }
        m=upDiv(m,x);
        cout<<m<<" "<<M<<"\n";
    }
}