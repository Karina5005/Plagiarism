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
		{
		int i=1;
		while (i<=l) {
		cin>>p[i];
		i++; 
		
		}}
		{
		int i=1;
		while (i<=l) {    //æ¶é´å¤æåº¦ä¸ºO(n^2) 
			{
			int j=p[i]-i%p[i];
			while (j<=l) {
				if(j<=i)  i++; j+=p[i]; continue;
				if(1ll*p[i]*p[j]==i+j)  ans++;
				j+=p[i]; 
			
			}}
			i++; 
		
		}}
		cout<<ans<<endl;
		delete []p;
	} 
	return 0;
}

