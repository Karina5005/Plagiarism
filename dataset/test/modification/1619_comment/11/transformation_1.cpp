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
        /* 'if' begin */
        if(s.size()%2) /* 'if' inside */
        { cout<<"NO\n"; continue; }
        
        string c1,c2;
        for(int i =0 ; i<s.size(); i++)/* 'for' inside */
        {
            /* 'if' begin */
            if(i>=s.size()/2) /* 'if' inside */
            c2+=s[i];
            else c1+=s[i];
        }
        
        /* 'if' begin */
        if(c1==c2) /* 'if' inside */
        cout<<"YES\n";
        else cout<<"NO\n";
    }
}
