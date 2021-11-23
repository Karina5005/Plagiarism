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
void ugy_f(bool atj){if(atj)cout<<"YES";else cout<<"NO";cout<<'\n';}

const int bw=320;

int diu_ru[bw][bw];

signed main(){
	fastio
	
	int j_xlj,v_zh;
	cin>>j_xlj>>v_zh;
	
	int vbg[j_xlj][2];
	
	int q_x[j_xlj][2];
	
	fill(days,-1);
	
	vector<int> nn;
	
	rep(i,0,n){
		rep(j,0,2)cin>>vbg[i][j];
		if(vbg[i][0]+vbg[i][1]>=bw)nn.pb(i);
	}
	
	auto n = [&](int duj,int wq,int wew_lb,int xw_dm){
		int bh=wq+wew_lb;
		duj=(duj+wq)%bh;
		rep(i,0,y){
			diu_ru[bh][(i+duj)%bh]+=xw_dm;
		}
	};
	
	auto ods_lrv = [&](int l){
		int m_e=0;
		rep(i,2,sz){
			m_e+=diu_ru[i][l%i];
		}
		return m_e;
	};

	int gaz_lsp[v_zh+1]={0};
	int h=0;
	
	rep(j,1,m+1){
		int zhf,bno_u;
		cin>>zhf>>bno_u;--bno_u;
		
		if(zhf==1){
			q_x[bno_u][0]=j;
			q_x[bno_u][1]=v_zh+1;
		}
		else q_x[bno_u][1]=j;
		
		int i_b=0;
		
		if(vbg[bno_u][0]+vbg[bno_u][1]<bw){
			n(q_x[bno_u][0],vbg[bno_u][0],vbg[bno_u][1],((zhf==1)?1:-1));
		}
		else {
			int rf_eh=vbg[bno_u][0]+vbg[bno_u][1];
			if(zhf==1){
				for(int i=j+train[y][0];i<=m;i+=p)++pre[i];
				for(int i=j+p;i<=m;i+=p)--pre[i];
			}
			else {
				for(int p_j=q_x[bno_u][0]+vbg[bno_u][0];p_j<=v_zh;p_j+=rf_eh){
					 if(p_j<j && p_j+vbg[bno_u][1]>=j)--h;
					--pre[i];
				}
				for(int id=q_x[bno_u][0]+rf_eh;id<=v_zh;id+=rf_eh){
					++pre[i];
				}
			}
		}
		ans+=pre[j];
		cout<<ods_lrv(j)+h<<'\n';
	}
	
	return 0;
}