//ç»ä¸ä¸ªé¿åº¦ä¸ºnçåºåï¼ä¸åç´ ä¸¤ä¸¤ä¸åï¼
//ä½ éè¦æ±åºæ»¡è¶³i<jä¸i+j=ai*ajçæ°å¯¹ï¼ai,ajï¼ä¸ªæ° 

#include<iostream>
using namespace std;
int main(){ 
	int axi_ijb;
	cin>>axi_ijb;
	int *wuo_o,vom;
	long long atn_s;
	while(axi_ijb--){
		atn_s=0;
		cin>>vom;
		wuo_o=new int[vom+1];
		for(int g_fth=1;g_fth<=vom;g_fth++)  cin>>wuo_o[g_fth];
		for(int dgz=1;dgz<=vom;dgz++){    //æ¶é´å¤æåº¦ä¸ºO(n^2) 
			for(int pwg=wuo_o[dgz]-dgz%wuo_o[dgz];pwg<=vom;pwg+=wuo_o[dgz]){
				if(pwg<=dgz)  continue;
				if(1ll*wuo_o[dgz]*wuo_o[pwg]==dgz+pwg)  atn_s++;
			}
		}
		cout<<atn_s<<endl;
		delete []wuo_o;
	} 
	return 0;
}

