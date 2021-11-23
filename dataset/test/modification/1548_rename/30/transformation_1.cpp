#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll   n = 998244353;
const int  tgw_xb = 2e5 + 5;
/*
é¢æï¼æä¸ªè´µææ¯å¿åï¼æ¯å¾çå³ç³»ãåºå·ã1ï¼nãä»£è¡¨åä¸ªè´µæå¿åã
å¯ä»¥å è¾¹ï¼å¯ä»¥åè¾¹ãå¯ä»¥è¯¢é®å­æ´»ä¸ªæ°ã
ï¼å­æ´»ä¸ªæ°ï¼å¿åå°çä¼è¢«å¿åå¤§çæ¶ç­ï¼ç´å°å³ç³»éåªæä»1äººä¸ºæ­¢ãï¼

******
å¾è®º----ç±äºæ°æ®è¿å¤§ï¼æä»¥ï¼å¯è½æ¯å¾è®ºæç»´é¢ã
1.è¿éå ä¸ºæ¶åå°å è¾¹ï¼é¾å¼ååæå¤çèµ·æ¥æ¯è¾éº»ç¦ï¼æä»¥ç¨é»æ¥è¡¨ã
2.æ ¹æ®é¢æåæå¯ç¥ï¼éåä¸éä»ä»¬å¯ä»¥å çä¸ªæ°ansä¸ªã 

è¿æ¯æ°æ®ç»æé¢ã
ç¨setä¸ç¨vectorçåå æ¯ï¼vectorä¸è½å é¤æç¹æ°å­ãæ¯å¦ææ³å 5ï¼vector åä¸å°ã 
èä¸ç±äºä»æ¯æåºçããå³ï¼å¦æ200>199,é£ä¹200å¿å®å¤§äºæ¯199å°çæ°ãï¼æä»¥æä»¬åªéè¦çä»æå¤§ä½æ¯å¦æ¯ä¸æ iå¤§å³å¯ã 
setä¸­ *h[u].rbegin() å°±å¾å¥½ç¨äºã 
*/

set<int> cu[tgw_xb]; 
//vector<int> h[maxn];//--- 
int main(){
	int nwq_coh,ix,z_d;
	cin>>ix>>nwq_coh;
	for(int vz_ycf=0;vz_ycf<nwq_coh;vz_ycf++)
	{
		int z_vun,v_ec;
		scanf("%d %d",&z_vun,&v_ec);
		cu[z_vun].insert(v_ec);
		cu[v_ec].insert(z_vun);
	}
	
	int h=0;
	for(int pwf=1;pwf<=ix;pwf++)
	{
		if(cu[pwf].size()&&(*cu[pwf].rbegin())>pwf) h++; 
	}
	scanf("%d",&z_d);
	while(z_d--)
	{
		int tig_lt,sku,p;
		scanf("%d",&tig_lt);
		if(tig_lt==1)//å¦ææ¯å è¾¹ã 
		{
			//ä¸ä¼å¯¹å¶ä»äº§çå½±åæ¯å§ 
			scanf("%d %d",&sku,&p);
			if(sku>p) swap(sku,p);//æ ¹æ®é¢æ ï¼	ä»å°å°å¤§éåã æä»¥uæ°¸è¿å°ï¼væ°¸è¿å¤§ï¼å°æå¤§ã 
			if(!cu[sku].size()||(*cu[sku].rbegin())<sku) h++;
			cu[sku].insert(p);
			cu[p].insert(sku);
		}
		else if(tig_lt==2)
		{
			scanf("%d %d",&sku,&p);
			cu[sku].erase(p);
			cu[p].erase(sku);
			if(sku>p) swap(sku,p);
			if(!cu[sku].size()||(*cu[sku].rbegin())<sku) h--;
		}
		else
		{
			printf("%d\n",ix-h);
		}
	} 
	return 0;
}