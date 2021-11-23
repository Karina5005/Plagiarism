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
void cp(bool z_yg){if(z_yg)cout<<"YES";else cout<<"NO";cout<<'\n';}

const int h = 320;

int stg[h][h];

signed main(){
	fastio
	
	int rb,fdg;
	cin>>rb>>fdg;
	
	int iev_mv[rb][2];
	
	int ky_fzo[rb][2];
	
	fill(days,-1);
	
	vector<int> kxt;
	
	rep(i,0,n){
		rep(j,0,2)cin>>iev_mv[i][j];
		if(iev_mv[i][0]+iev_mv[i][1]>=h)kxt.pb(i);
	}
	
	auto keo = [&](int ow,int xev,int vr_o,int wew){
		int r=xev+vr_o;
		ow=(ow+xev)%r;
		rep(i,0,y){
			stg[r][(i+ow)%r]+=wew;
		}
	};
	
	auto xwg_gpd = [&](int msj){
		int xq_yn=0;
		rep(i,2,sz){
			xq_yn+=stg[i][msj%i];
		}
		return xq_yn;
	};

	int ys_y[fdg+1]={0};
	int xk_r=0;
	
	rep(j,1,m+1){
		int o,s_wlz;
		cin>>o>>s_wlz;--s_wlz;
		
		if(o==1){
			ky_fzo[s_wlz][0]=j;
			ky_fzo[s_wlz][1]=fdg+1;
		}
		else ky_fzo[s_wlz][1]=j;
		
		int nro_h=0;
		
		if(iev_mv[s_wlz][0]+iev_mv[s_wlz][1]<h){
			keo(ky_fzo[s_wlz][0],iev_mv[s_wlz][0],iev_mv[s_wlz][1],((o==1)?1:-1));
		}
		else {
			int ly_l=iev_mv[s_wlz][0]+iev_mv[s_wlz][1];
			if(o==1){
				for(int i=j+train[y][0];i<=m;i+=p)++pre[i];
				for(int i=j+p;i<=m;i+=p)--pre[i];
			}
			else {
				for(int ry_nvn=ky_fzo[s_wlz][0]+iev_mv[s_wlz][0];ry_nvn<=fdg;ry_nvn+=ly_l){
					 if(ry_nvn<j && ry_nvn+iev_mv[s_wlz][1]>=j)--xk_r;//when the train is removed in maintainance
					--pre[i];
				}
				for(int gz=ky_fzo[s_wlz][0]+ly_l;gz<=fdg;gz+=ly_l){
					++pre[i];
				}
			}
		}
		ans+=pre[j];
		cout<<xwg_gpd(j)+xk_r<<'\n';
	}
	
	return 0;
}