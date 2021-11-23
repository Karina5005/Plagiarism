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
void yd(bool yae_qdv){if(yae_qdv)cout<<"YES";else cout<<"NO";cout<<'\n';}

int d_fsi[256][256];

signed main(){
	fastio
	
	int s,uux;
	cin>>s>>uux;
	
	int qsn_oh=min((int)(0.5*sqrt(uux))+2,256);
	
	int bb_vey[s][2];
	
	int ej_wcu[s][2];
	
	fill(days,-1);
	
	vector<int> x_gl;
	
	rep(i,0,n){
		rep(j,0,2)cin>>bb_vey[i][j];
		if(bb_vey[i][0]+bb_vey[i][1]>=qsn_oh)x_gl.pb(i);
	}
	
	auto v_ny = [&](int k,int el_ffe,int pcq,int qoe_fxz){
		int kfw_xz=el_ffe+pcq;
		k=(k+el_ffe)%kfw_xz;
		rep(i,0,y){
			d_fsi[kfw_xz][(i+k)%kfw_xz]+=qoe_fxz;
		}
	};
	
	auto ri = [&](int w_s){
		int rl_dsq=0;
		rep(i,2,sz){
			rl_dsq+=d_fsi[i][w_s%i];
		}
		return rl_dsq;
	};

	int vq_feb[uux+1]={0};
	int vn=0;
	
	rep(j,1,m+1){
		int j_u,z;
		cin>>j_u>>z;--z;
		
		if(j_u==1){
			ej_wcu[z][0]=j;
			ej_wcu[z][1]=uux+1;
		}
		else ej_wcu[z][1]=j;
		
		int s=0;
		
		if(bb_vey[z][0]+bb_vey[z][1]<qsn_oh){
			v_ny(ej_wcu[z][0],bb_vey[z][0],bb_vey[z][1],((j_u==1)?1:-1));
		}
		else {
			int tis=bb_vey[z][0]+bb_vey[z][1];
			if(j_u==1){
				for(int i=j+train[y][0];i<=m;i+=p)++pre[i];
				for(int i=j+p;i<=m;i+=p)--pre[i];
			}
			else {
				for(int xgr=ej_wcu[z][0]+bb_vey[z][0];xgr<=uux;xgr+=tis){
					 if(xgr<j && xgr+bb_vey[z][1]>=j)--vn;
					--pre[i];
				}
				for(int ncz=ej_wcu[z][0]+tis;ncz<=uux;ncz+=tis){
					++pre[i];
				}
			}
		}
		ans+=pre[j];
		cout<<ri(j)+vn<<'\n';
	}
	
	return 0;
}