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
void _print(T t, V... v) {__print(t); /* 'if' begin */
if (sizeof...(v)) /* 'if' inside */
cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
int main(){fast
	int t; cin>>t;
	while(t--){
		ll n,k; cin>>n>>k; vector<ll>a(n);
		for(int i=0;i<n;i++)/* 'for' inside */
		{
			cin>>a[i];
		}
		ll val=a[1]-a[0];
		for(int i=2;i<n;i++)/* 'for' inside */
		{
			val=gcd(val,a[i]-a[i-1]);
		}
		debug(val);
		/* 'if' begin */
		if(val==0)/* 'if' inside */
		{
			/* 'if' begin */
			if(k==a[0])/* 'if' inside */
			{
				cout<<"Yes"<<"\n";
			}
			else{
				cout<<"No"<<"\n";
			}
		}
		else /* 'if' begin */
		if((a[0]-k)%val==0)/* 'if' inside */
		{
			cout<<"Yes"<<"\n";
		}
		else{
			cout<<"No"<<"\n";
		}
	}
}