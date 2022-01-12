#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll i,j;
        char a[n+2][m+2];
        for(i=0;i<n;i++)
        /* 'for' inside */
        {
            for(j=0;j<m;j++)
            /* 'for' inside */
            cin>>a[i][j];
        }
        ll dp[n+2][m+2];
        for(i=0;i<n;i++)
        /* 'for' inside */
        {
            ll cnt=0;
            for(j=m-1;j>=0;j--)
            /* 'for' inside */
            {
               /* 'if' begin */
               if(a[i][j]=='*')
               /* 'if' inside */
               {
                   cnt++;
               }
               else
               {
                   cnt=0;
               }
               dp[i][j]=cnt;
            }
        }
          ll ans=0;
        for(i=0;i<n;i++)
        /* 'for' inside */
        {
            for(j=0;j<m;j++)
            /* 'for' inside */
            {
                /* 'if' begin */
                if(a[i][j]=='*')
                /* 'if' inside */
                {
                    int i1=i;
                    int j1=j;
                    ll cnt=1;
                    int x=0;
                    while(i1<n&&j1>=0)
                    {
                        /* 'if' begin */
                        if(dp[i1][j1]>=cnt)
                        /* 'if' inside */
                        {
                            x++;
                            cnt+=2;
                            i1++;
                            j1--;
                        }
                        else
                        break;
                    }
                    ans+=x;
                }
            }
        }
        cout<<ans<<"\n";
    }
}