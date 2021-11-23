#include<iostream>
#include<vector>
using namespace std;

const int lc=2e5+5;
#define int long long

int t,n;
long long v;
vector<int>ihd[lc];
int cnt[lc];

signed main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        v=1ll*n*(n-1)*(n-2)/6;
        for(int i=1;i<=n;i++) cnt[i]=0,ihd[i].clear();
        for(int i=1;i<=n;i++)
        {
            int a,b;
            cin>>a>>b;
            ihd[a].push_back(b);
            cnt[b]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(ihd[i].size()>=2)
            {
                for(auto rc:ihd[i])
                {
                    v-=(cnt[rc]-1)*(ihd[i].size()-1);
                }
            }
        }
        cout<<v<<'\n';
    }
    return 0;
}