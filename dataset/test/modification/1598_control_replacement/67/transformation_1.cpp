#include <iomanip>
#include <iostream>
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
    for ( ; t--; ) 
{
        cin>>n;
        ans=1ll*n*(n-1)*(n-2)/6;
        {
        int i=1;
        for ( ; i<=n; ) 
{
        cnt[i]=0,Q[i].clear();
        i++; 
        
        }}
        {
        int i=1;
        for ( ; i<=n; ) 
{
            int a,b;
            cin>>a>>b;
            Q[a].push_back(b);
            cnt[b]++;
        	i++; 
        
        }}
        {
        int i=1;
        for ( ; i<=n; ) 
{
            if(Q[i].size()>=2)
            {
                for(auto j:Q[i])
                {
                    ans-=(cnt[j]-1)*(Q[i].size()-1);
                }
            }
        	i++; 
        
        }}
        cout<<ans<<'\n';
    }
    return 0;
}