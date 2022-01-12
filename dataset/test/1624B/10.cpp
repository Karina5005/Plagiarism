#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		int z=(a+c);
		if((2*b>c&&(b+b-c)%a==0)||(2*b>a&&(b+b-a)%c==0)||((z/2)%b==0&&z%2==0))
			printf("yes\n");
		else
			printf("no\n");
	}
} 