#include<bits/stdc++.h>
using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
    #endif
    int n,m;
    
    cin>>n>>m;
    vector<int> bigfrnd(n+1,0);
    int ans=n;
    for(int i=0;i<m;i++)/* 'for' inside */
    {
        int a,b;
        cin>>a>>b;
        int x=min(a,b);
        int y=max(a,b);

        /* 'if' begin */
        if(bigfrnd[x]==0)/* 'if' inside */
        {
            ans--;
        }
        bigfrnd[x]++;
    }
    int t;
    cin>>t;
    while(t){
        int chc;
        cin>>chc;
        /* 'if' begin */
        if(chc==1)/* 'if' inside */
        {
            int a,b;
            cin>>a>>b;
            int x=min(a,b);
            int y=max(a,b);
            
            /* 'if' begin */
            if(bigfrnd[x]==0)/* 'if' inside */
            {
                ans--;
            }
            bigfrnd[x]++;
            
            
        }
        /* 'if' begin */
        if(chc==2)/* 'if' inside */
        {
            int a,b;
            cin>>a>>b;
            int x=min(a,b);
            int y=max(a,b);

            bigfrnd[x]--;
            /* 'if' begin */
            if(bigfrnd[x]==0)/* 'if' inside */
            {
                ans++;
            }

        }
        /* 'if' begin */
        if(chc==3)/* 'if' inside */
        {
            cout<<ans<<endl;
        }
        t--;
    }
    return 0;
}