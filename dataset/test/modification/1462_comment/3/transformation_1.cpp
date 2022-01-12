#include <bits/stdc++.h>
using namespace std;
int t,n;
int main() {
    cin>>t;
    while(t--){
        cin>>n;
        string s,s1,s2;
        cin>>s;
        /* 'if' begin */
        if(s[0]=='2'&&s[1]=='0'&&s[2]=='2')/* 'if' inside */
        {
            /* 'if' begin */
            if(s[n-1]=='0'||s[3]=='0')/* 'if' inside */
            {
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        else /* 'if' begin */
        if(s[0]=='2'&&s[1]=='0'&&s[n-2]=='2'&&s[n-1]=='0')/* 'if' inside */
        { 
            cout<<"YES"<<endl;
        }
        else /* 'if' begin */
        if(s[n-3]=='0'&&s[n-2]=='2'&&s[n-1]=='0')/* 'if' inside */
        {
            /* 'if' begin */
            if(s[0]=='2'||s[n-4]=='2')/* 'if' inside */
            {
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
