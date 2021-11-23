#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef vector<int> VI;
typedef long long ll;
typedef pair<int,int> PII;
typedef double db;
mt19937 icw(random_device{}()); 
const ll v=1000000007;
const ll oe=998244353;
int a(int fa) { return icw() % fa;}
ll hcm_guu(ll cg,ll kjy_t) {ll b_ipv=1;cg%=v; assert(b>=0); for(;kjy_t;kjy_t>>=1){if(kjy_t&1)b_ipv=b_ipv*cg%v;cg=cg*cg%v;}return b_ipv;}
ll xc_cg(ll i_i,ll i_ej) { return i_ej?xc_cg(i_ej,i_i%i_ej):i_i;}
// head

const int ww=201000;
const int gx=300;
int qo,c_qti,f[ww],zh_zp[ww],w[ww],oom[ww],l_oz[ww],l[gx][gx];
VI mo[ww];

int main() {
	scanf("%d%d",&qo,&c_qti);
	rep(i,1,n+1) scanf("%d%d",f+i,zh_zp+i),f[i]=min(f[i],ww),zh_zp[i]=min(zh_zp[i],ww);
	rep(i,1,m+1) {
		int jdv,w;
		scanf("%d%d",&jdv,&w);
		if (f[w]+zh_zp[w]>=gx) {
			mo[w].pb(i);
		} else {
			if (jdv==1) l_oz[w]=i;
			int qz_tdq=f[w]+zh_zp[w];
			rep(j,0,a) if (j>=f[w]) l[qz_tdq][(l_oz[w]+j)%qz_tdq]+=(jdv==1?1:-1);
		}
		rep(j,1,BLOCK) oom[i]+=l[j][i%j];
	}
	rep(i,1,n+1) if (SZ(pos[i])&1) mo[i].pb(c_qti+1);
	rep(i,1,n+1) {
		if (f[i]+zh_zp[i]>=gx) {
			assert(SZ(pos[i])%2==0);
			for (int sz_ipz=0;sz_ipz<SZ(pos[i]);sz_ipz+=2) {
				int mmr_rcz=mo[i][sz_ipz],it=mo[i][sz_ipz+1];
				while (mmr_rcz<it) {
					mmr_rcz+=f[i]; if (mmr_rcz>=it) break;
					w[mmr_rcz]++; mmr_rcz=min(it,mmr_rcz+zh_zp[i]); w[mmr_rcz]--;
				}
			}
		}
	}
	rep(i,1,m+1) w[i]+=w[i-1];
	rep(i,1,m+1) printf("%d\n",oom[i]+w[i]);
}