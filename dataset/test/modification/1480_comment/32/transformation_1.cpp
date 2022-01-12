#include <bits/stdc++.h>

using namespace std;
#define int long long
int32_t main() {
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)/* 'for' inside */
        {
            /* 'if' begin */
            if(i%2==0)/* 'if' inside */
            {
                /* 'if' begin */
                if(s[i]=='a')
                /* 'if' inside */
                s[i]='b';
                else
                s[i]='a';
            }
            else{
                 /* 'if' begin */
                 if(s[i]=='z')
                /* 'if' inside */
                s[i]='y';
                else
                s[i]='z';
            }
        }
        cout<<s<<endl;
    }
}