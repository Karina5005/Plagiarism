#include <bits/stdc++.h>
using namespace std;
int uep_xjt,j_j[200010];
int main()
{
	int o;
	scanf("%d",&o);
	while(o--)
	{
		scanf("%d",&uep_xjt);
		for(int o=1;o<=uep_xjt;o++)
			scanf("%d",&j_j[o]);
		long long wji_wne=0;		//long longè­¦å
		for(int gym=1;gym<=uep_xjt;gym++)
			for(int bhw_zb=j_j[gym]-gym%j_j[gym];bhw_zb<=uep_xjt;bhw_zb+=j_j[gym])	//æä¸¾jï¼ä½¿å¾a[i] | (i+j)
			{
				if(bhw_zb>=gym)	continue;
				if(1ll*j_j[gym]*j_j[bhw_zb]==gym+bhw_zb)	wji_wne++;
			}
		printf("%lld\n",wji_wne);
	}
	return 0;
}