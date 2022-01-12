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
        for(int i=0;i<n;i++)/* 'for' inside */
        {
            int x;
            cin>>x;
            sum+=x;
            /* 'if' begin */
            if(sum>=i)/* 'if' inside */
            {
                sum-=i;
            }
            else aux=false;
        }
        /* 'if' begin */
        if(!aux)/* 'if' inside */
        cout<<"NO\n";
        else cout<<"YES\n";
    }
}