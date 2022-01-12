#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<queue>
#include<algorithm>
#include<cmath>
#define int long long
#define endl '\n'
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
signed main()
{
    speed;
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char arr[n+1][m+1];
        for(int i=1;i<=n;i++)
        /* 'for' inside */
        {
            for(int j=1;j<=m;j++)
            /* 'for' inside */
            cin>>arr[i][j];
        }
        int pre[n+1][m+1];
        for(int i=0;i<=n;i++)
        /* 'for' inside */
        for(int j=0;j<=m;j++)
        /* 'for' inside */
        pre[i][j]=0;
        for(int i=1;i<=n;i++)
        /* 'for' inside */
        {
            for(int j=1;j<=m;j++)
            /* 'for' inside */
            {
                /* 'if' begin */
                if(arr[i][j]=='*')/* 'if' inside */
                pre[i][j]=pre[i][j-1]+1;
                else pre[i][j]=pre[i][j-1];
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        /* 'for' inside */
        {
            for(int j=1;j<=m;j++)
            /* 'for' inside */
            {
                /* 'if' begin */
                if(arr[i][j]=='*')
                /* 'if' inside */
                {
                    ans++;
                    int w=1;
                    for(int k=i+1;k<=n;k++)
                    /* 'for' inside */
                    {
                        /* 'if' begin */
                        if(pre[k][j+w]-pre[k][j-w-1]==2*w+1)/* 'if' inside */
                        ans++;
                        else break;
                        w++;
                    }
                }

            }
        }
        cout<<ans<<endl;
    }
    return 0;
}





















