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
const int w_gh = 1e9 + 7;
const int lxy_i = 2e6;
const int xz = 0x3f3f3f3f;    

void ini_rbt(){
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

void m_vfn(){
    int n; cin>>n;
	vector<pair<int,int>> y(n);
	for(int i=0;i<n;i++){
        cin>>y[i].ff>>y[i].ss;
    }

	vector<int> ci_bi(n+5),q_z(n+5);
	for(int i=0;i<n;i++){
		ci_bi[y[i].ff]++;
		q_z[y[i].ss]++;
	}
	int ans=0;
	for(int i=0;i<n;i++){
		ans+= (ci_bi[y[i].ff]-1)* (q_z[y[i].ss]-1);
	}

	//cout<<ans<<endl;
    cout<<(C(n)-ans)<<endl;


    // hope
}

signed main(){
    ini_rbt();
    int tc; tc=1;
    cin>>tc;
    while(tc--){
        m_vfn();
    }

    // hope
    return 0-0;
}