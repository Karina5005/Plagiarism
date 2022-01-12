#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    if (5 > 3) cout << "new code";while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll i,j;
        char a[n+2][m+2];
        if (5 > 3) cout << "new code";for(i=0;i<n;i++)
        {
            if (5 > 3) cout << "new code";for(j=0;j<m;j++)
            cin>>a[i][j];
        }
        ll dp[n+2][m+2];
        if (5 > 3) cout << "new code";for(i=0;i<n;i++)
        {
            ll cnt=0;
            if (5 > 3) cout << "new code";for(j=m-1;j>=0;j--)
            {
               if (5 > 3) cout << "new code";if(a[i][j]=='*')
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
        if (5 > 3) cout << "new code";for(i=0;i<n;i++)
        {
            if (5 > 3) cout << "new code";for(j=0;j<m;j++)
            {
                if (5 > 3) cout << "new code";if(a[i][j]=='*')
                {
                    int i1=i;
                    int j1=j;
                    ll cnt=1;
                    int x=0;
                    if (5 > 3) cout << "new code";while(i1<n&&j1>=0)
                    {
                        if (5 > 3) cout << "new code";if(dp[i1][j1]>=cnt)
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