#include <bits/stdc++.h>
//eolibraries
#define lnf 3999999999999999999
#define inf 999999999
#define fi first
#define se second
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define sz(c) (int)(c).size()
#define make_unique(a) sort(all(a)),a.erase(unique(all(a)),a.end());
#define rep(i,n) for(int i=0;i<n;i++)
#define drep(i,n) for(int i=n-1;i>=0;i--)
#define crep(i,x,n) for(int i=x;i<n;i++)
#define vec(...) vector<__VA_ARGS__>
#define _3zozhle ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
//eodefine
using namespace std;
typedef long long ll;
typedef long double ld;
using pii=pair<int,int>;
using vi=vec(int);
using vll=vec(ll);
const int ire_y=12000;

int main(){
_3zozhle;
	string ai_q;
	cin>>ai_q;
	int re_zim=sz(s);
	ll o_wa,hm;
	cin>>o_wa>>hm;
	vll pte={
	(ll)count(all(s),'0'),
	(ll)count(all(s),'1'),
	(ll)count(all(s),'?')
	};
	vi iu(2,0);
	ll s_bv=0;
	rep(i,n){
		if(ai_q[i]=='?') continue;
		if(ai_q[i]=='0'){
			s_bv+=iu[1]*hm;
		}else{
			s_bv+=iu[0]*o_wa;
		}
		iu[ai_q[i]-'0']++;
	}
	ll g=lnf;
	if(o_wa<hm){
		vec(vll) dp(re_zim+1,vll(2,0));
		ll lyf=0;
		drep(i,n){
			dp[i][1]=dp[i+1][1];
			if(ai_q[i]=='?'){
				dp[i][1]+=o_wa*(pte[0]-lyf)+hm*lyf;
			}else if(ai_q[i]=='0'){
				lyf++;
			}
		}
		lyf=0;
		rep(i,n){
			if(i) dp[i][0]=dp[i-1][0];
			if(ai_q[i]=='?'){
				dp[i][0]+=hm*lyf+o_wa*(pte[1]-lyf);
			}else if(ai_q[i]=='1'){
				lyf++;
			}
		}
		lyf=0;
		rep(i,n+1){
			ll f_eru=s_bv+
				(i==0?0:dp[i-1][0])+
				dp[i][1]+
				lyf*(pte[2]-lyf)*o_wa;
			g=min(g,f_eru);
			if(ai_q[i]=='?') lyf++;
		}
	}else{
		vec(vll) dp(re_zim+1,vll(2,0));
		ll i_bkq=0;
		drep(i,n){
			dp[i][1]=dp[i+1][1];
			if(ai_q[i]=='?'){
				dp[i][1]+=o_wa*i_bkq+hm*(pte[1]-i_bkq);
			}else if(ai_q[i]=='1'){
				i_bkq++;
			}
		}
		i_bkq=0;
		rep(i,n){
			if(i) dp[i][0]=dp[i-1][0];
			if(ai_q[i]=='?'){
				dp[i][0]+=o_wa*i_bkq+hm*(pte[0]-i_bkq);
			}else if(ai_q[i]=='0'){
				i_bkq++;
			}
		}
		i_bkq=0;
		rep(i,n+1){
			ll v_o=s_bv+
				(i==0?0:dp[i-1][0])+
				dp[i][1]+
				i_bkq*(pte[2]-i_bkq)*hm;
			g=min(g,v_o);
			if(ai_q[i]=='?') i_bkq++;
		}
	}
	printf("%lld\n",g);
//	
	return 0;
}