#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b;
char c;
scanf("%d",&a);
while(a--){
	scanf("%d",&b);
	c='8';
	printf("9");
	for(int i=2;i<=b;i++)
	/* 'for' inside */
	{
		/* 'if' begin */
		if(c>'9')
		/* 'if' inside */
		c='0';
		printf("%c",c++);
	}
	puts("");
}
return 0;
}
		   		  	 				  	   		  	    	