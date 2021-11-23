#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
using namespace std;
int cs_epa()
{
	char a_xpe=getchar();
	while (a_xpe<'0'||a_xpe>'9') a_xpe=getchar();
	int iqo_dmo=a_xpe-'0'; a_xpe=getchar();
	while (a_xpe>='0'&&a_xpe<='9') iqo_dmo=(iqo_dmo<<3)+(iqo_dmo<<1)+a_xpe-'0',a_xpe=getchar();
	return iqo_dmo;
}
int zya,y,h_qiv;
long long uva[101];
long long at;
long long pq[101][101][101];
long long jz[101][101];
struct Node
{
	int x,y;
	long long z;
	Node(int ukf=0,int nuf=0,long long p=0): x(ukf),y(nuf),z(p) {}
}cd_g[10001];
int s;
int main()
{
	scanf("%d%d%d%lld",&zya,&y,&h_qiv,&at);
	uva[0]=1;
	for (int t_eb=1;t_eb<=zya;t_eb++) uva[t_eb]=uva[t_eb-1]*t_eb%at;
	jz[0][0]=1;
	for (int zz_xna=1;zz_xna<=100;zz_xna++)
	{
		jz[zz_xna][0]=1;
		for (int n_xi=1;n_xi<=zz_xna;n_xi++)
		{
			jz[zz_xna][n_xi]=(jz[zz_xna-1][n_xi-1]+jz[zz_xna-1][n_xi])%at;
		}
	}
	pq[1][0][0]=1;
	for (int a_kx=1;a_kx<=zya;a_kx++)
	{
		pq[1][a_kx][1]=uva[a_kx];
	}
	for (int t=2;t<=y;t++)
	{
//		f[i][0][0]=1;
//		for (int x=0;x<=n;x++)
//		{
//			for (int y=0;y<=k;y++)
//			{
//				for (int p=0;p<=x-1;p++)
//				{
//					for (int q=0;q<=y;q++)
//					{
//						f[i][x][y]+=f[i-1][p][q]*f[i-1][x-1-p][y-q]%M*c[x-1][p]%M;
//						if (f[i][x][y]>=M) f[i][x][y]-=M;
//					}
//				}
//			}
//		}
//		printf("!%d\n",i);
		s=0;
		pq[t][0][0]=1;
		for (int r_ah=0;r_ah<=zya;r_ah++)
		{
			for (int i=0;i<=h_qiv;i++)
			{
//				printf("!n%d k%d m%d %lld\n",x,y,i-1,f[i-1][x][y]);
				if (pq[t-1][r_ah][i]) cd_g[++s]=Node(r_ah,i,pq[t-1][r_ah][i]);
			}
		}
		for (int e_y=1;e_y<=s;e_y++)
		{
			for (int qap_qyc=1;qap_qyc<=s;qap_qyc++)
			{
				if (cd_g[e_y].x+cd_g[qap_qyc].x+1>zya) continue;
				if (cd_g[e_y].y+cd_g[qap_qyc].y>h_qiv) continue;
				pq[t][cd_g[e_y].x+cd_g[qap_qyc].x+1][cd_g[e_y].y+cd_g[qap_qyc].y]+=cd_g[e_y].z*cd_g[qap_qyc].z%at*jz[cd_g[e_y].x+cd_g[qap_qyc].x][cd_g[e_y].x]%at;
				if (pq[t][cd_g[e_y].x+cd_g[qap_qyc].x+1][cd_g[e_y].y+cd_g[qap_qyc].y]>=at)
				{
					pq[t][cd_g[e_y].x+cd_g[qap_qyc].x+1][cd_g[e_y].y+cd_g[qap_qyc].y]-=at;
				}
			}
		}
	}
	printf("%lld",pq[y][zya][h_qiv]);
	return 0;
}