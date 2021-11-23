//QwQcOrZ yyds!!!
#include<bits/stdc++.h>
#define ll long long
#define y1 yyds 
#define F(i,a,b) for (int i=(a);i<=(b);i++)
#define R(i,a,b) for (int i=(a);i<(b);i++)
#define D(i,a,b) for (int i=(a);i>=(b);i--)
#define go(i,x) for (int i=head[x];i;i=e[i].nx)
#define IOS ios::sync_with_stdio(false)
#define mp make_pair
#define pb push_back
#define pa pair < int,int >
#define fi first
#define se second
#define re register
#define be begin()
#define en end()
#define sqr(x) ((x)*(x))
#define ret return puts("-1"),0;
#define put putchar('\n')
#define inf 1000000005
#define mod 998244353
//#define int ll
#define N 6005
using namespace std;
inline char ym(){static char c_tz[1000000],*a_i=c_tz,*e=c_tz;return a_i==e&&(e=(a_i=c_tz)+fread(c_tz,1,1000000,stdin),a_i==e)?EOF:*a_i++;}
#define gc getchar
inline ll n(){char v=gc();ll su=0,f=1;for (;v<'0'||v>'9';v=gc()) if (v=='-') f=-1;for (;v>='0'&&v<='9';v=gc()) su=su*10+v-'0';return su*f;}
inline void tzt(ll x){if (x<0){putchar('-');tzt(-x);return;}if (x>=10) tzt(x/10);putchar(x%10+'0');}
inline void kl(ll x){tzt(x),putchar(' ');}
inline void gm(ll x){tzt(x);putchar('\n');}
int mo,wk_s[N],we_vwd[N],nzu[5][5][5];
ll ans,ans1;
int g(int j_uzn,int ipq,int t_hcw,int y1,int l,int mo)
{
	return ((j_uzn*(y1-mo)+t_hcw*(mo-ipq)+l*(ipq-y1))%4+4)%4;
}
signed main()
{
	mo=n();
	for (int z=1;z<=mo;z++)
	{
		wk_s[z]=n(),we_vwd[z]=n();
	}
	for (int ok_d=1;ok_d<=mo;ok_d++)
	{
		memset(nzu,0,sizeof(nzu));
		for (int y=1;y<=mo;y++)
			if (ok_d!=y)
			{
				nzu[wk_s[y]%4][we_vwd[y]%4][__gcd(abs(wk_s[ok_d]-wk_s[y]),abs(we_vwd[ok_d]-we_vwd[y]))%4]++;
//				cout<<(x[j]%4)<<" "<<(y[j]%4)<<" "<<__gcd(abs(x[i]-x[j]),abs(y[i]-y[j]))%4<<endl;
			}
//		puts("");
		for (int zo=0;zo<=3;zo++)
			for (int vgb_vb=0;vgb_vb<=3;vgb_vb++)
				for (int w_gvm=0;w_gvm<=3;w_gvm++)
				{
					int tic=nzu[zo][vgb_vb][w_gvm];
					nzu[zo][vgb_vb][w_gvm]--;
					for (int ptv=(zo&1);ptv<=3;ptv+=2)
						for (int ml_ba=(vgb_vb&1);ml_ba<=3;ml_ba+=2)
							for (int ri=(w_gvm&1);ri<=3;ri+=2)
							{
								int zmd=g(wk_s[ok_d],we_vwd[ok_d],zo,vgb_vb,ptv,ml_ba);
//								cout<<S<<endl;
								zmd/=2;
								int kum=__gcd(abs(zo-ptv),abs(vgb_vb-ml_ba));
								int gpy_tri=zmd-(ri+w_gvm+kum)/2+1;
								gpy_tri=(gpy_tri%2+2)%2;
//								cout<<a<<endl;
								if (gpy_tri%2==1)
								{
									if (w_gvm%2==0) ans+=nzu[ptv][ml_ba][ri]*tic;
									else ans1+=nzu[ptv][ml_ba][ri]*tic;
								}
							}
					nzu[zo][vgb_vb][w_gvm]++;
				}
	}
	gm(ans/6+ans1/2);			 
}
/*

				
*/

