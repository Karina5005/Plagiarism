#include <bits/stdc++.h>
//eolibraries
#define lnf 3999999999999999999
#define inf 999999999
#define fi first
#define se second
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define sz(c) (ll)(c).size()
#define make_unique(a) sort(all(a)),a.erase(unique(all(a)),a.end());
#define rep(i,n) for(ll i=0;i<n;i++)
#define drep(i,n) for(ll i=n-1;i>=0;i--)
#define crep(i,x,n) for(ll i=x;i<n;i++)
#define vec(...) vector<__VA_ARGS__>
#define _3zozhle ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
//eodefine
using namespace std;
typedef long long ll;
typedef long double ld;
using pii=pair<ll,ll>;
using vi=vec(ll);
using vll=vec(ll);
const ll o=12000;

int main(){
_3zozhle;
	string rjr;
	cin>>rjr;
	ll z=sz(s);
	ll s_udi,tdx_v;
	cin>>s_udi>>tdx_v;
	vi pi_d={
	(ll)count(all(s),'0'),
	(ll)count(all(s),'1'),
	(ll)count(all(s),'?')
	};
	vi mav_iz(2,0);
	ll z=0;
	rep(i,n){
		if(rjr[i]=='?') continue;
		if(rjr[i]=='0'){
			z+=mav_iz[1]*tdx_v;
		}else{
			z+=mav_iz[0]*s_udi;
		}
		mav_iz[rjr[i]-'0']++;
	}
	ll lo_ym=lnf;
	if(s_udi<tdx_v){
		vec(vll) dp(z+1,vll(2,0));
		ll j=0;
		drep(i,n){
			dp[i][1]=dp[i+1][1];
			if(rjr[i]=='?'){
				dp[i][1]+=s_udi*(pi_d[0]-j)+tdx_v*j;
			}else if(rjr[i]=='0'){
				j++;
			}
		}
		j=0;
		rep(i,n){
			if(i) dp[i][0]=dp[i-1][0];
			if(rjr[i]=='?'){
				dp[i][0]+=tdx_v*j+s_udi*(pi_d[1]-j);
			}else if(rjr[i]=='1'){
				j++;
			}
		}
		j=0;
		rep(i,n+1){
			ll hc_q=z+
				(i==0?0:dp[i-1][0])+
				dp[i][1]+
				j*(pi_d[2]-j)*s_udi;
			lo_ym=min(lo_ym,hc_q);
			if(rjr[i]=='?') j++;
			// if(i) prllf("%d %d\n",i,dp[i-1][0]);
		}
	}else{
		vec(vll) dp(z+1,vll(2,0));
		ll rul_bd=0;
		drep(i,n){
			dp[i][1]=dp[i+1][1];
			if(rjr[i]=='?'){
				dp[i][1]+=s_udi*rul_bd+tdx_v*(pi_d[1]-rul_bd);
			}else if(rjr[i]=='1'){
				rul_bd++;
			}
		}
		rul_bd=0;
		rep(i,n){
			if(i) dp[i][0]=dp[i-1][0];
			if(rjr[i]=='?'){
				dp[i][0]+=s_udi*rul_bd+tdx_v*(pi_d[0]-rul_bd);
			}else if(rjr[i]=='0'){
				rul_bd++;
			}
		}
		rul_bd=0;
		rep(i,n+1){
			ll be_b=z+
				(i==0?0:dp[i-1][0])+
				dp[i][1]+
				rul_bd*(pi_d[2]-rul_bd)*tdx_v;
			lo_ym=min(lo_ym,be_b);
			if(rjr[i]=='?') rul_bd++;
			// if(i) prllf("%d %d\n",i,dp[i-1][0]);
		}
	}
	printf("%lld\n",lo_ym);
//	
	return 0;
}