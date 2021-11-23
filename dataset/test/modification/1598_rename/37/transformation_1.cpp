#include <iostream>
#include <cstdio>
#include <vector>
#define MAXN 1001

using namespace std;

int k_eyw[6];
int y_jmf[MAXN][6];
bool fs_r[6];
vector<int> xnp;
int cs_epa,a_xpe;

int main()
{
	scanf("%d",&cs_epa);
	while (cs_epa--)
	{
		xnp.clear();
		for(int iqo_dmo=1;iqo_dmo<=5;iqo_dmo++)	k_eyw[iqo_dmo]=0,fs_r[iqo_dmo]=false;
		
		scanf("%d",&a_xpe);
		for(int zya=1;zya<=a_xpe;zya++)
		{
			for(int y=1;y<=5;y++)
			{
				int h_qiv;
				scanf("%d",&h_qiv);
				y_jmf[zya][y]=h_qiv;
				k_eyw[y]+=h_qiv;
			}
		}
		
		for(int uva=1;uva<=5;uva++)
		{
			if(k_eyw[uva]>=a_xpe/2)	xnp.push_back(uva);
		}
		if(xnp.size()<2)	{	printf("NO\n");	continue;}
		
		int at=xnp.size();
		for(int pq=0;pq<at;pq++)
			for(int jz=pq+1;jz<at;jz++)
		{
			int ukf=xnp[pq],nuf=xnp[jz];
			int p=0,cd_g=0;
			for(int s=1;s<=a_xpe;s++)
			{
				if(y_jmf[s][ukf])	p++;
				if(y_jmf[s][nuf])	cd_g++;
				if(!y_jmf[s][ukf]&&!y_jmf[s][nuf]) goto out1;
			}
			if(p>=a_xpe/2&&cd_g>=a_xpe/2)
				{printf("YES\n");goto out;}
			out1:;
		}
		printf("NO\n");
			out:;
	}
	
	return 0;
}