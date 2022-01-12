#include <bits/stdc++.h>
using namespace std;
#define int               long long
#define precise(a)        fixed<<setprecision(a)
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define rall(x)           (x).rbegin(),(x).rend()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i = a; i < b; i++)
#define rrep(i,b,a)        for(int i = b; i >= a ; i--)
#define trav(a, x)        for(auto& a : x)
#define display(x)        trav(a,x) cout<<a<<" "; cout<<"\n";
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define PI                3.14159265358979323844
#define INF               1000000000000000000  

void solve() {
    int n;
    cin >> n;
    int res = 0;
    for(int i = 2; (i*i-1)/2 + 1 <= n; i++) /* 'for' inside */
    {
        /* 'if' begin */
        if((i*i - 1)%2 != 0) /* 'if' inside */
        continue;
        res++;
    }
    cout << res << "\n";
}
signed main(){
    #ifndef ONLINE_JUDGE
    
    freopen("input.txt", "r", stdin);
    
    freopen("output.txt", "w", stdout);
   #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}