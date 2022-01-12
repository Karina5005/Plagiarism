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
        char v[n+2][m+2];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            cin>>v[i][j];
        }
        ll dp[n+2][m+2];
        for(i=0;i<n;i++)
        {
            ll cnt=0;
            for(j=m-1;j>=0;j--)
            {
               if(v[i][j]=='*')
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
        {
            for(j=0;j<m;j++)
            {
                if(v[i][j]=='*')
                {
                    int oe=i;
                    int a=j;
                    ll cnt=1;
                    int fa=0;
                    while(oe<n&&a>=0)
                    {
                        if(dp[oe][a]>=cnt)
                        {
                            fa++;
                            cnt+=2;
                            oe++;
                            a--;
                        }
                        else
                        break;
                    }
                    ans+=fa;
                }
            }
        }
        cout<<ans<<"\n";
    }
}