#include<iostream>
#include<vector>
using namespace std;

const int N=2e5+5;
#define int long long

int t,n;
long long ans;
vector<int>Q[N];
int cnt[N];

signed main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=1ll*n*(n-1)*(n-2)/6;
        for(int i=1;i<=n;i++) /* 'for' inside */
        cnt[i]=0,Q[i].clear();
        for(int i=1;i<=n;i++)
        /* 'for' inside */
        {
            int a,b;
            cin>>a>>b;
            Q[a].push_back(b);
            cnt[b]++;
        }
        for(int i=1;i<=n;i++)
        /* 'for' inside */
        {
            /* 'if' begin */
            if(Q[i].size()>=2)
            /* 'if' inside */
            {
                for(auto j:Q[i])
                {
                    ans-=(cnt[j]-1)*(Q[i].size()-1);
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}