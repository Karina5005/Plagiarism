#include <bits/stdc++.h>
#define int long long
using namespace std;


int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()%2) { cout<<"NO\n"; continue; }
        
        string c1,c2;
        for(int i =0 ; i<s.size(); i++){
            if(i>=s.size()/2) c2+=s[i];
            else c1+=s[i];
        }
        
        if(c1==c2) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
