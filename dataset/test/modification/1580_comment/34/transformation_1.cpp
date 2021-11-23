#include <bits/stdc++.h>
using namespace std;
#define sz(s) (int)s.size()
#define all(v) (v).begin(),(v).end()
#define fill(dp) memset(dp,-1,sizeof(dp))
#define input(vec) for (auto &el : vec) cin >> el;
#define print(vec) for (auto &el : vec) cout << el << " "; cout << "\n"; 
int n,m,dp[450][450];

void solve() {
    cin>>n>>m;
    vector<int>pre(m+1),last_occur(n+1);
    vector<pair<int,int>>pr;
    pr.push_back({0,0});
    for(int i=0;i<n;i++) /* 'for' inside */
    {
        int x,y;
        cin>>x>>y;
        pr.push_back({x,y});
    }
    int ans = 0;
    for(int i=1;i<=m;i++) /* 'for' inside */
    {
        int op,k;
        cin>>op>>k;
        int sum = pr[k].first+pr[k].second;
        /* 'if' begin */
        if(op==1) /* 'if' inside */
        {
            int l = i+pr[k].first,r=i+sum;
            last_occur[k] = i;
            /* 'if' begin */
            if(sum>=450LL) /* 'if' inside */
            {
                while(l<=m) {
                    pre[l]++;
                    /* 'if' begin */
                    if(r<=m) /* 'if' inside */
                    pre[r]--;
                    l += sum;
                    r += sum;
                }
            }
            else {
                for(int j=l;j<r;j++) /* 'for' inside */
                {
                    dp[sum][j%sum]++;
                }
            }
        }
        else {
            int l = last_occur[k]+pr[k].first,r=l+pr[k].second;
            /* 'if' begin */
            if(sum>=450LL) /* 'if' inside */
            {
                while(l<=m) {
                    /* 'if' begin */
                    if(i>=l and i<r) /* 'if' inside */
                    pre[i]--;
                    /* 'if' begin */
                    if(l>i) /* 'if' inside */
                    pre[l]--;
                    /* 'if' begin */
                    if(i<r and r<=m) /* 'if' inside */
                    pre[r]++;
                    l += sum;
                    r += sum;
                }
            }
            else {
                for(int j=l;j<r;j++) /* 'for' inside */
                {
                    dp[sum][j%sum]--;
                }
            }
        }
        ans += pre[i];
        int cur = 0;
        for(int x=1;x<450;x++) /* 'for' inside */
        {
            cur += dp[x][i%x];
        }
        cout<<ans+cur<<"\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int testcases=1;
    
    while(testcases--) solve();
    return 0;
}