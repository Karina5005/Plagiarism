#include <bits/stdc++.h>

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

using namespace std;
typedef long long ll;
typedef long double ld;
using pii=pair<int,int>;
using vi=vec(int);
using vll=vec(ll);
const int mxn=12000;

int main(){
_3zozhle;
	string s;
	cin>>s;
	int n=sz(s);
	ll _a,_b;
	cin>>_a>>_b;
	vll cnt={
	(ll)count(all(s),'0'),
	(ll)count(all(s),'1'),
	(ll)count(all(s),'?')
	};
	vi reb(2,0);
	ll cost=0;
	rep(i,n){
		/* 'if' begin */
		if(s[i]=='?') /* 'if' inside */
		continue;
		/* 'if' begin */
		if(s[i]=='0')/* 'if' inside */
		{
			cost+=reb[1]*_b;
		}else{
			cost+=reb[0]*_a;
		}
		reb[s[i]-'0']++;
	}
	ll ans=lnf;
	/* 'if' begin */
	if(_a<_b)/* 'if' inside */
	{
		vec(vll) dp(n+1,vll(2,0));
		ll h=0;
		drep(i,n){
			dp[i][1]=dp[i+1][1];
			/* 'if' begin */
			if(s[i]=='?')/* 'if' inside */
			{
				dp[i][1]+=_a*(cnt[0]-h)+_b*h;
			}else /* 'if' begin */
			if(s[i]=='0')/* 'if' inside */
			{
				h++;
			}
		}
		h=0;
		rep(i,n){
			/* 'if' begin */
			if(i) /* 'if' inside */
			dp[i][0]=dp[i-1][0];
			/* 'if' begin */
			if(s[i]=='?')/* 'if' inside */
			{
				dp[i][0]+=_b*h+_a*(cnt[1]-h);
			}else /* 'if' begin */
			if(s[i]=='1')/* 'if' inside */
			{
				h++;
			}
		}
		h=0;
		rep(i,n+1){
			ll necost=cost+
				(i==0?0:dp[i-1][0])+
				dp[i][1]+
				h*(cnt[2]-h)*_a;
			ans=min(ans,necost);
			/* 'if' begin */
			if(s[i]=='?') /* 'if' inside */
			h++;
		}
	}else{
		vec(vll) dp(n+1,vll(2,0));
		ll h=0;
		drep(i,n){
			dp[i][1]=dp[i+1][1];
			/* 'if' begin */
			if(s[i]=='?')/* 'if' inside */
			{
				dp[i][1]+=_a*h+_b*(cnt[1]-h);
			}else /* 'if' begin */
			if(s[i]=='1')/* 'if' inside */
			{
				h++;
			}
		}
		h=0;
		rep(i,n){
			/* 'if' begin */
			if(i) /* 'if' inside */
			dp[i][0]=dp[i-1][0];
			/* 'if' begin */
			if(s[i]=='?')/* 'if' inside */
			{
				dp[i][0]+=_a*h+_b*(cnt[0]-h);
			}else /* 'if' begin */
			if(s[i]=='0')/* 'if' inside */
			{
				h++;
			}
		}
		h=0;
		rep(i,n+1){
			ll necost=cost+
				(i==0?0:dp[i-1][0])+
				dp[i][1]+
				h*(cnt[2]-h)*_b;
			ans=min(ans,necost);
			/* 'if' begin */
			if(s[i]=='?') /* 'if' inside */
			h++;
		}
	}
	printf("%lld\n",ans);

	return 0;
}