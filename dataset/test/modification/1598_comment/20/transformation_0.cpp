/**
 *    author:  Tyrant67
 *    created: 12.11.2021       
**/
#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
using namespace std;
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
const int mod = 1e9 + 7;
const int MAXN = 2e6;
const int inf = 0x3f3f3f3f;    

void IO(){
#ifdef LOCAL_MACHINE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int C(int x){
	return (x*(x-1)*(x-2))/6;
}

void solve(){
    int n; cin>>n;
	vector<pair<int,int>> v(n);
	for(int i=0;i<n;i++){
        cin>>v[i].ff>>v[i].ss;
    }

	vector<int> x(n+5),y(n+5);
	for(int i=0;i<n;i++){
		x[v[i].ff]++;
		y[v[i].ss]++;
	}
	int ans=0;
	for(int i=0;i<n;i++){
		ans+= (x[v[i].ff]-1)* (y[v[i].ss]-1);
	}

	//cout<<ans<<endl;
    cout<<(C(n)-ans)<<endl;


    // hope
}

signed main(){
    IO();
    int tc; tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }

    // hope
    return 0-0;
}