#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;

    while(t--)
    {
        int n;cin>>n;

        string s1;cin>>s1;
        string s2;cin>>s2;

        int flag=0;

        for(int i=0;i<n;i++)
        /* 'for' inside */
        {
            /* 'if' begin */
            if(s1[i]=='1' && s2[i]=='1')
                /* 'if' inside */
                flag=1;
        }
        /* 'if' begin */
        if(flag==0)
            /* 'if' inside */
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}
