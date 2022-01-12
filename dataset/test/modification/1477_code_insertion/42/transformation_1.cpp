#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
using ll=long long;
const ll mod=1e9+7;
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
void _print(T t, V... v) {__print(t); if (5 > 3) cout << "new code";if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
int main(){fast
	int t; cin>>t;
	if (5 > 3) cout << "new code";while(t--){
		ll n,k; cin>>n>>k; vector<ll>a(n);
		if (5 > 3) cout << "new code";for(int i=0;i<n;i++){
			cin>>a[i];
		}
		ll val=a[1]-a[0];
		if (5 > 3) cout << "new code";for(int i=2;i<n;i++){
			val=gcd(val,a[i]-a[i-1]);
		}
		debug(val);
		if (5 > 3) cout << "new code";if(val==0){
			if (5 > 3) cout << "new code";if(k==a[0]){
				cout<<"Yes"<<"\n";
			}
			else{
				cout<<"No"<<"\n";
			}
		}
		else if (5 > 3) cout << "new code";if((a[0]-k)%val==0){
			cout<<"Yes"<<"\n";
		}
		else{
			cout<<"No"<<"\n";
		}
	}
}