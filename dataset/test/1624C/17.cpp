#define ll long long
const ll M = 998244353;
#define     addM(a,b)           (((a)%M)+((b)%M))%M
#define     subM(a,b)           (((((a)%M)-((b)%M))+ M)%M)
#define     mulM(a,b)           (((a)%M)*((b)%M))%M
#define inf 1e18
#include<bits/stdc++.h>
#define show(x) cout<<#x<<" "<<x<<endl;
using namespace std;
ll per[55];
int main()
{
     /// *****try to give explanation while coding*****
    int t = 1;

    scanf("%d",&t);
    while(t--)
    {
       ll n,i,j;
       bool ans = true;
       scanf("%lld",&n);

       for(i=1;i<=n;i++)
       {
           scanf("%lld",&per[i]);

           while(per[i]/2>50)
           {
               per[i]/=2;
           }
       }


       sort(per,per+n+1);

       map<ll,ll>used,mp;
       for(i=1;i<=n;i++)
       {
           ll num = per[i];
           used[num] = 1;
           while(num)
           {
               num/=2;
               used[num]++;
           }
       }
       vector<pair<ll,ll>>v;
       for(i=1;i<=n;i++)
       {
           v.push_back({used[i],i});
       }

       sort(v.begin(),v.end());
       ll cnt = 0;
       for(i=0;i<n;i++)
       {
           bool got = 0;
           for(j=1;j<=n&&!got;j++)
           {
               if(!mp[j])
               {
                   ll num = per[j];

                   while(num)
                   {
                       if(num==v[i].second)
                       {
                          cnt++;
                          mp[j] = 1;
                          got = 1;
                          break;
                       }

                       else
                        num/=2;
                   }
               }
           }
       }

       if(cnt==n)
       {
           printf("YES\n");
       }

       else
        printf("NO\n");

    }
}
