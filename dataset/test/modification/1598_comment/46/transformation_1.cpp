#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        int n,cnt=0;
        cin>>n;
        cin>>s1;
        cin>>s2;
        for(int i=0;i<n;i++)
        /* 'for' inside */
        {
            /* 'if' begin */
            if(s1[i]=='1'&&s2[i]=='1')
            /* 'if' inside */
            cnt++;

        }
        /* 'if' begin */
        if(cnt!=0)
        /* 'if' inside */
        cout<<"NO"<<'\n';
        else
        cout<<"YES"<<'\n';
    }
    return 0;
}