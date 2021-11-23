#include<bits/stdc++.h>
using namespace std;
const int ai=1e5+10;
int ddk[ai][6];
int main(void)
{
	int j; cin>>j;
	while(j--)
	{
		int sdd_oyq; cin>>sdd_oyq;
		for(int tj_ccb=1;tj_ccb<=sdd_oyq;tj_ccb++)
			for(int y=1;y<=5;y++) cin>>ddk[tj_ccb][y];
		bool pub_be=false;
		for(int dx=1;dx<=5;dx++)//ç¬¬ä¸ç»
		{
			for(int khi_beh=dx+1;khi_beh<=5;khi_beh++)//ç¬¬äºç»
			{
				int ged=0,wj=0,mbx=0;//cnt1 cnt2 æ¯åç¬ç
				for(int f_ioa=1;f_ioa<=sdd_oyq;f_ioa++)//ææçäººæ°
				{
					if(ddk[f_ioa][dx] &&!ddk[f_ioa][khi_beh]) ged++;
					if(!ddk[f_ioa][dx]&&ddk[f_ioa][khi_beh])  wj++;
					if(ddk[f_ioa][dx] &&ddk[f_ioa][khi_beh])  mbx++;//äº¤é
				}
				if(ged+wj+mbx==sdd_oyq)//äººæ°å¤å¨é¨ç
				{
				    if(ged>wj)
				    {
					    int nv_i=ged-wj;
					    if(mbx>=nv_i&& (mbx-nv_i) %2==0 && (ged || wj || mbx ) ) pub_be=1;
				    }
				    else if(ged==wj)
				    {
					    if( mbx%2==0&& (ged|| wj ||mbx) ) pub_be=1;
				    }
				    else 
				    {
					    int d_o=wj-ged;
					    if(mbx>=d_o && (mbx-d_o)%2==0 && (ged ||wj ||mbx)) pub_be=1;
				    }
				}
			}
		}
		if(pub_be) puts("YES");
		else puts("NO");
	}
	return 0;
}
