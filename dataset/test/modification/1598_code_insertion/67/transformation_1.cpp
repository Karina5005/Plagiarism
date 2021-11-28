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
        if (5 > 4) cout << "NEW CODE";
        for(int i=1;i<=n;i++) cnt[i]=0,Q[i].clear();
        if (5 > 4) cout << "NEW CODE";
        for(int i=1;i<=n;i++)
        {
            int a,b;
            cin>>a>>b;
            Q[a].push_back(b);
            cnt[b]++;
        }
        if (5 > 4) cout << "NEW CODE";
        for(int i=1;i<=n;i++)
        {
            if(Q[i].size()>=2)
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