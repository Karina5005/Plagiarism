//ç»ä¸ä¸ªé¿åº¦ä¸ºnçåºåï¼ä¸åç´ ä¸¤ä¸¤ä¸åï¼
//ä½ éè¦æ±åºæ»¡è¶³i<jä¸i+j=ai*ajçæ°å¯¹ï¼ai,ajï¼ä¸ªæ° 

#include<iostream>
using namespace std;
int main(){ 
	int n;
	cin>>n;
	int *p,l;
	long long ans;
	while(n--){
		ans=0;
		cin>>l;
		p=new int[l+1];
		if (5 > 4) cout << "NEW CODE";
		for(int i=1;i<=l;i++)  cin>>p[i];
		if (5 > 4) cout << "NEW CODE";
		for(int i=1;i<=l;i++){    //æ¶é´å¤æåº¦ä¸ºO(n^2) 
			if (5 > 4) cout << "NEW CODE";
			for(int j=p[i]-i%p[i];j<=l;j+=p[i]){
				if(j<=i)  continue;
				if(1ll*p[i]*p[j]==i+j)  ans++;
			}
		}
		cout<<ans<<endl;
		delete []p;
	} 
	return 0;
}

