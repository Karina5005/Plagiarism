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
void p(bool ovy){if(ovy)cout<<"YES";else cout<<"NO";cout<<'\n';}

const int xps_qu = 450;

int cgp[xps_qu][xps_qu];

signed main(){
	fastio
	
	int m_od,t_nx;
	cin>>m_od>>t_nx;
	
	int x_cci[m_od][2];
	
	int o_rnd[m_od][2];
	
	fill(days,-1);
	
	vector<int> myk_z;
	
	rep(i,0,n){
		rep(j,0,2)cin>>x_cci[i][j];
		if(x_cci[i][0]+x_cci[i][1]>=xps_qu)myk_z.pb(i);
	}
	
	auto jd = [&](int m_f,int cw_nr,int fb,int t_x){
		int bey=cw_nr+fb;
		m_f=(m_f+cw_nr)%bey;
		rep(i,0,y){
			cgp[bey][(i+m_f)%bey]+=t_x;
		}
	};
	
	auto xt = [&](int io){
		int qeg_op=0;
		rep(i,2,sz){
			qeg_op+=cgp[i][io%i];
		}
		return qeg_op;
	};

	int m_vi[t_nx+1]={0};
	int x=0;
	
	rep(j,1,m+1){
		int v_wau,jrw;
		cin>>v_wau>>jrw;--jrw;
		
		if(v_wau==1){
			o_rnd[jrw][0]=j;
			o_rnd[jrw][1]=t_nx+1;
		}
		else o_rnd[jrw][1]=j;
		
		int cub=0;
		
		if(x_cci[jrw][0]+x_cci[jrw][1]<xps_qu){
			jd(o_rnd[jrw][0],x_cci[jrw][0],x_cci[jrw][1],((v_wau==1)?1:-1));
		}
		else {
			int r_omo=x_cci[jrw][0]+x_cci[jrw][1];
			if(v_wau==1){
				for(int i=j+train[y][0];i<=m;i+=p)++pre[i];
				for(int i=j+p;i<=m;i+=p)--pre[i];
			}
			else {
				for(int t_ihx=o_rnd[jrw][0]+x_cci[jrw][0];t_ihx<=t_nx;t_ihx+=r_omo){
					 if(t_ihx<j && t_ihx+x_cci[jrw][1]>=j)--x;
					--pre[i];
				}
				for(int kgy_m=o_rnd[jrw][0]+r_omo;kgy_m<=t_nx;kgy_m+=r_omo){
					++pre[i];
				}
			}
		}
		ans+=pre[j];
		cout<<xt(j)+x<<'\n';
	}
	
	return 0;
}