#include <bits/stdc++.h>
using namespace std;
#define ll long long  int
#define rep(i,a,b)  for(ll i=a;i<=b;i++)
#define rep2(i,a,b) for(ll i=b;i>=a;i--)
#define MOD 1000000007
#define pb push_back
#define FAST ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ss second
#define ff first
#define mod 1000000007
#define inf (ll)(1e18)
#define MAXN 10000001
 
 
ll power(ll a, ll b){
	ll res=1;
	a=a%mod;
	while(b>0){
	    if(b&1){res=(res*a)%mod;b--;}
	    a=(a*a)%mod;
	    b>>=1;
	}
	return res;
}
 
ll gcd(ll a, ll b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}
 
ll max(ll a,ll b){
    if(a>=b) return a;
	return b;
}
ll min(ll a,ll b){
	if(a>=b) return b;
	return a;
}
 
 
 
 
//------------------------------------------------------------------------------------------------------------------------------------




int main(){
	FAST;
	int t;
// 	cin>>t;
    t=1;
	while(t--){
	    int n,m;cin>>n>>m;
	    vector<int>A(n+1);
	    int ans=0;
	    rep(i,0,m-1){
	        int x,y;cin>>x>>y;
	        if(x>y) swap(x,y);
	        A[x]++;
	        if(A[x]==1) ans++;
	    }
	    int q;cin>>q;
	    while(q--){
	        int x;cin>>x;
	        if(!(x==3)) {
	            int a,b;cin>>a>>b;
	            if(a>b) swap(a,b);
	            if(x==2) {A[a]--;;if(A[a]==0) ans--;}
	            else {A[a]++;if(A[a]==1) ans++;}
	        }
	        elsecout<<n-ans<<"\n";
	    }
	}
	return 0;
}

// abcabcabc

 