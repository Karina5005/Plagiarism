#include <bits/stdc++.h>
#define int long long
using namespace std;


int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string ai_q;
        cin>>ai_q;
        if(ai_q.size()%2) { cout<<"NO\n"; continue; }
        
        string re_zim,o_wa;
        for(int i =0 ; i<ai_q.size(); i++){
            if(i>=ai_q.size()/2) o_wa+=ai_q[i];
            else re_zim+=ai_q[i];
        }
        
        if(re_zim==o_wa) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
