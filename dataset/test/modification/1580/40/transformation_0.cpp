#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ld long double
#define pii pair<int,int>
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i,x,y) for(int i=x; i<y; i++)
#define fill(a,b) memset(a,b,sizeof(a))
#define goog(tno) cout << "Case #" << tno <<": "
#define vi vector<int>
#define vii vector<pair<int,int>>
#define setbits(x) __builtin_popcountll(x)
#define in(a) for(auto &x: a)cin>>x;
#define out(a) for(auto x: a){cout<<x<<' ';}cout<<'\n';
#define F(T) int ttt;cin>>ttt;for(int T=1;T<=ttt;T++)
#define inf 1000000000
#define binf 1e18+100
//#define mm 1000000007 998244353
void print(bool n){if(n)cout<<"YES";else cout<<"NO";cout<<'\n';}

int h[256][256];

signed main(){
	fastio
	
	int n,m;
	cin>>n>>m;
	
	int sz=min((int)(0.5*sqrt(m))+2,256);
	
	int train[n][2];
	
	int days[n][2];
	
	fill(days,-1);
	
	vector<int> heavytrains;
	
	rep(i,0,n){
		rep(j,0,2)cin>>train[i][j];
		if(train[i][0]+train[i][1]>=sz)heavytrains.pb(i);
	}
	
	auto change = [&](int st,int x,int y,int ch){
		int p=x+y;
		st=(st+x)%p;
		rep(i,0,y){
			h[p][(i+st)%p]+=ch;
		}
	};
	
	auto get = [&](int day){
		int ret=0;
		rep(i,2,sz){
			ret+=h[i][day%i];
		}
		return ret;
	};

	int pre[m+1]={0};
	int ans=0;
	
	rep(j,1,m+1){
		int x,y;
		cin>>x>>y;--y;
		
		if(x==1){
			days[y][0]=j;
			days[y][1]=m+1;
		}
		else days[y][1]=j;
		
		int xxx=0;
		
		if(train[y][0]+train[y][1]<sz){
			change(days[y][0],train[y][0],train[y][1],((x==1)?1:-1));
		}
		else {
			int p=train[y][0]+train[y][1];
			if(x==1){
				for(int i=j+train[y][0];i<=m;i+=p)++pre[i];
				for(int i=j+p;i<=m;i+=p)--pre[i];
			}
			else {
				for(int i=days[y][0]+train[y][0];i<=m;i+=p){
					 if(i<j && i+train[y][1]>=j)--ans;
					--pre[i];
				}
				for(int i=days[y][0]+p;i<=m;i+=p){
					++pre[i];
				}
			}
		}
		ans+=pre[j];
		cout<<get(j)+ans<<'\n';
	}
	
	return 0;
}