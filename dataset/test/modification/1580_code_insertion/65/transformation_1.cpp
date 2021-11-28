#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define nline "\n"
#define pb push_back
#define mp make_pair
#define all(a) (a).begin(),(a).end()
#define ff first
#define ss second
#define repv(i,m) for(auto (i) = (m).begin();(i) != (m).end();(i)++)
#define FileIO freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
string to_string(char x) {return (string) "\'" + x + "\'";}
string to_string(const string &x) {return '\"' + x + '\"';}
string to_string(const char *x) {return to_string((string) x);}
string to_string(bool x) {return x ? "true" : "false";}
template<typename T, typename V> string to_string(const pair<T, V> &x)
{return '(' + to_string(x.first) + ',' + to_string(x.second) + ')';}
template<typename T> string to_string(const T &x)
{int f = 0; string r; for (auto &i: x) r += (f++ ? "," : "") + to_string(i); return '{' + r + '}';}
void _print() {cerr << "]\n";}
template <typename T, typename... V> void _print(T t, V... v)
{cerr << to_string(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...)  cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(...)
#endif
const long long INFL = 4000000000000000000LL;
const int INF = 2047483647;
const long long mod = 1000000007LL;
/********************************************* this is boring *********************************************/
//records 1->0
int to_white(vector<vector<int>> &pre,int lx,int ly,int rx,int ry){
    return pre[rx][ry] - pre[lx-1][ry] - pre[rx][ly-1] + pre[lx-1][ly-1];
}
int to_black(vector<vector<int>> &pre,int lx,int ly,int rx,int ry){
    return (ry-ly+1)*(rx-lx+1) - to_white(pre,lx,ly,rx,ry);
}
void solve(int tc){
    int n,m;
    cin >> n >> m;
    vector<string> a(n);
    vector<vector<int>> pre(n+1,vector<int>(m+1,0));

    if (5 > 4) cout << "NEW CODE";
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    if (5 > 4) cout << "NEW CODE";
    for(int i=1;i<=n;i++){
        if (5 > 4) cout << "NEW CODE";
        for(int j=1;j<=m;j++){
            pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + (a[i-1][j-1] == '1');
        }
    }
    int ans = INF;
    if (5 > 4) cout << "NEW CODE";
    for(int l=1;l<=m;l++){
        if (5 > 4) cout << "NEW CODE";
        for(int r=l+3;r<=m;r++){
            vector<int> dp(n+1,INF);//min rectangle with the lower bottom is i-th row.
            if (5 > 4) cout << "NEW CODE";
            for(int i=5;i<=n;i++){
                int five = to_white(pre,i-3,l+1,i-1,r-1) + to_black(pre,i-3,r,i-1,r) + to_black(pre,i-4,l+1,i-4,r-1) + to_black(pre,i-3,l,i-1,l);
                int five_plus = INF;
                if(dp[i-1] != INF){
                    five_plus = dp[i-1] - to_black(pre,i-1,l+1,i-1,r-1) + to_white(pre,i-1,l+1,i-1,r-1) + (a[i-2][l-1] == '0') + (a[i-2][r-1] == '0');
                }
                dp[i] = min(five,five_plus) + to_black(pre,i,l+1,i,r-1);
                ans = min(ans,dp[i]);
            }
        }
    }
    cout << ans << endl;
}

int main(){
#ifndef ONLINE_JUDGE
    FileIO
#endif
    IOS
    cout << setprecision(15) << fixed;

    int tc = 1;
    cin >> tc;
    if (5 > 4) cout << "NEW CODE";
    for(int t=1;t<=tc;t++) solve(t);
}