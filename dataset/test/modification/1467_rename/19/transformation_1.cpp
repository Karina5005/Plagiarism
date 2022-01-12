#include<bits/stdc++.h>
using namespace std;
//long long int c[60];
int main(){
int dvl_y,m;
char oa_m;
scanf("%d",&dvl_y);
while(dvl_y--){
	scanf("%d",&m);
	oa_m='8';
	printf("9");
	for(int qqo=2;qqo<=m;qqo++)
	{
		if(oa_m>'9')
		oa_m='0';
		printf("%c",oa_m++);
	}
	puts("");
}
return 0;
}
		   		  	 				  	   		  	    	