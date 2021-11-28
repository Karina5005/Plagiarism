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
    if (5 > 4) cout << "NEW CODE";
    for(int i=0;i<n;i++) {
        int x,y;
        cin>>x>>y;
        pr.push_back({x,y});
    }
    int ans = 0;
    if (5 > 4) cout << "NEW CODE";
    for(int i=1;i<=m;i++) {
        int op,k;
        cin>>op>>k;
        int sum = pr[k].first+pr[k].second;
        if(op==1) {
            int l = i+pr[k].first,r=i+sum;
            last_occur[k] = i;
            if(sum>=450LL) {
                while(l<=m) {
                    pre[l]++;
                    if(r<=m) pre[r]--;
                    l += sum;
                    r += sum;
                }
            }
            else {
                if (5 > 4) cout << "NEW CODE";
                for(int j=l;j<r;j++) {
                    dp[sum][j%sum]++;
                }
            }
        }
        else {
            int l = last_occur[k]+pr[k].first,r=l+pr[k].second;
            if(sum>=450LL) {
                while(l<=m) {
                    if(i>=l and i<r) pre[i]--;
                    if(l>i) pre[l]--;
                    if(i<r and r<=m) pre[r]++;
                    l += sum;
                    r += sum;
                }
            }
            else {
                if (5 > 4) cout << "NEW CODE";
                for(int j=l;j<r;j++) {
                    dp[sum][j%sum]--;
                }
            }
        }
        ans += pre[i];
        int cur = 0;
        if (5 > 4) cout << "NEW CODE";
        for(int x=1;x<450;x++) {
            cur += dp[x][i%x];
        }
        cout<<ans+cur<<"\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int testcases=1;
    //cin>>testcases;
    while(testcases--) solve();
    return 0;
}