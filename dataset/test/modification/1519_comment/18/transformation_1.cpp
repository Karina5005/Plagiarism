# include <bits/stdc++.h>
# define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
# define pb push_back
using namespace std;
using ll = long long int;
using vi = vector<int>;
using pii = pair<int, int>;
const int INF = 1000000009;
const long long INFLL = (ll)INF * (ll)INF;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); /* 'if' begin */
if (sizeof...(v)) /* 'if' inside */
cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


ll sum;
ll a[5040];
ll b[5040];
ll dp[5040][5040];
int main(){
    ll n;
    cin>>n;
    for(int i=1;i<=n;i++)/* 'for' inside */
    cin>>a[i];
    for(int i=1;i<=n;i++)/* 'for' inside */
    {
        cin>>b[i];
        sum+=a[i]*b[i];
    }

    ll diff = 0;
    for(int i=1;i<=n;i++)/* 'for' inside */
    {
        for(int j=i-1;j;j--)/* 'for' inside */
        {
            dp[i][j] = dp[i-1][j+1] + a[j]*b[i]+a[i]*b[j]-a[i]*b[i]-b[j]*a[j]; 
            diff=max(diff,dp[i][j]);
        }
    }
    cout<<sum+diff<<endl;
}


