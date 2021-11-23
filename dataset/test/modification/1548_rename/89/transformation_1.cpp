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
	int o_k;
// 	cin>>t;
    o_k=1;
	while(o_k--){
	    int trb,tvx;cin>>trb>>tvx;
	    vector<int>dit(trb+1);
	    int oi=0;
	    rep(i,0,m-1){
	        int ro_jd,pop;cin>>ro_jd>>pop;
	        if(ro_jd>pop) swap(ro_jd,pop);
	        dit[ro_jd]++;
	        if(dit[ro_jd]==1) oi++;
	    }
	    int pat_ce;cin>>pat_ce;
	    while(pat_ce--){
	        int rq;cin>>rq;
	        if(rq==3) cout<<trb-oi<<"\n";
	        else{
	            int udf_kku,scm;cin>>udf_kku>>scm;
	            if(udf_kku>scm) swap(udf_kku,scm);
	            if(rq==2) {dit[udf_kku]--;;if(dit[udf_kku]==0) oi--;}
	            else {dit[udf_kku]++;if(dit[udf_kku]==1) oi++;}
	        }
	    }
	}
	return 0;
}

// abcabcabc

 