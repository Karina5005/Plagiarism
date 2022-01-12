#include<bits/stdc++.h>
using namespace std;
//long long int c[60];
int main(){
int a,b;
char c;
scanf("%d",&a);
while(a--){
	scanf("%d",&b);
	c='8';
	printf("9");
	for(int i=2;i<=b;i++)
	{
		if(c>'9')
		c='0';
		printf("%c",c++);
	}
	puts("");
}
return 0;
}
		   		  	 				  	   		  	    	