
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    int n,m;cin>>n>>m;
    int ans=n;
    for(int i=0;i<m;i++)
    /* 'for' inside */
    {
        int a,b;cin>>a>>b;
        /* 'if' begin */
        if(mp[min(a,b)]==0) 
        /* 'if' inside */
        ans--;
        mp[min(a,b)]++;

    }
    int q;cin>>q;
    while(q--)
    {
       
        int c;cin>>c;
        /* 'if' begin */
        if(c==1)
        /* 'if' inside */
        {
            int a,b;cin>>a>>b;
            /* 'if' begin */
            if(mp[min(a,b)]==0) 
            /* 'if' inside */
            ans--;
            mp[min(a,b)]++;
        }
        else /* 'if' begin */
        if(c==2)
        /* 'if' inside */
        {
            int a,b;cin>>a>>b;
            /* 'if' begin */
            if(mp[min(a,b)]==1)
            /* 'if' inside */
            ans++;
            mp[min(a,b)]--;
        }
        else
        cout<<ans<<endl;
    }
    

}