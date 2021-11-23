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
	    /* 'if' begin */
	    if(b&1)/* 'if' inside */
	    {res=(res*a)%mod;b--;}
	    a=(a*a)%mod;
	    b>>=1;
	}
	return res;
}
 
ll gcd(ll a, ll b)
{
    /* 'if' begin */
    if (b == 0) /* 'if' inside */
    return a;
    return gcd(b, a % b);
}
 
ll max(ll a,ll b){
    /* 'if' begin */
    if(a>=b) /* 'if' inside */
    return a;
	return b;
}
ll min(ll a,ll b){
	/* 'if' begin */
	if(a>=b) /* 'if' inside */
	return b;
	return a;
}
 
 
 
 





int main(){
	FAST;
	int t;

    t=1;
	while(t--){
	    int n,m;cin>>n>>m;
	    vector<int>A(n+1);
	    int ans=0;
	    rep(i,0,m-1){
	        int x,y;cin>>x>>y;
	        /* 'if' begin */
	        if(x>y) /* 'if' inside */
	        swap(x,y);
	        A[x]++;
	        /* 'if' begin */
	        if(A[x]==1) /* 'if' inside */
	        ans++;
	    }
	    int q;cin>>q;
	    while(q--){
	        int x;cin>>x;
	        /* 'if' begin */
	        if(x==3) /* 'if' inside */
	        cout<<n-ans<<"\n";
	        else{
	            int a,b;cin>>a>>b;
	            /* 'if' begin */
	            if(a>b) /* 'if' inside */
	            swap(a,b);
	            /* 'if' begin */
	            if(x==2) /* 'if' inside */
	            {A[a]--;;/* 'if' begin */
	            if(A[a]==0) /* 'if' inside */
	            ans--;}
	            else {A[a]++;/* 'if' begin */
	            if(A[a]==1) /* 'if' inside */
	            ans++;}
	        }
	    }
	}
	return 0;
}



 