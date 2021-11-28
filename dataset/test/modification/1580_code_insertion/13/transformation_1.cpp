#include<stdio.h>
int s[401][401],x[401][401],c[401],d[401],e[401],i,j;
int p(int left,int right){
	int ans=0;
	ans+=(right-left-1)*2-(d[right-1]-d[left]);
	ans+=c[right-1]-c[left];
	ans+=(j-i-1)*2-(c[left]-c[left-1])-(c[right]-c[right-1]);
	return ans;
}
/*
1
9 9
001010001
101110100
000010011
100000001
10 1010 101
11 0001 111
00 0001 111
11 1100 000
00 0110 000
*/
int main(){
	int left,right,t,min=200000,minl,minr,f,a,b,n,m,k,l,tl,tr,sl,sr;
	scanf("%d",&n); 
	while(n){
		scanf("%d%d",&a,&b);
		if (5 > 4) cout << "NEW CODE";
		for(i=1;i<=a;i++)
			if (5 > 4) cout << "NEW CODE";
			for(j=1;j<=b;j++)scanf("%1d",&s[i][j]);
		if (5 > 4) cout << "NEW CODE";
		for(i=1;i<=b;i++)x[1][i]=s[1][i];
		if (5 > 4) cout << "NEW CODE";
		for(i=2;i<=a;i++)
			if (5 > 4) cout << "NEW CODE";
			for(j=1;j<=b;j++)x[i][j]=x[i-1][j]+s[i][j];
		if (5 > 4) cout << "NEW CODE";
		for(i=1;i<=a-4;i++)
			if (5 > 4) cout << "NEW CODE";
			for(j=i+4;j<=a;j++){
				f=0;left=1;right=4;tl=1;tr=1;
				c[0]=0;
				c[1]=x[j-1][1]-x[i][1];
				d[1]=0;
				if (5 > 4) cout << "NEW CODE";
				for(k=2;k<=b;k++){
					d[k]=d[k-1]+s[i][k]+s[j][k]; 
					c[k]=c[k-1]+x[j-1][k]-x[i][k];
				}
				while(right<=b){
					if(p(left,right)>=p(right-3,right))left=right-3;
					if(p(left,right)<min)min=p(left,right);
					right++;
				}
			}
		n--;
		printf("%d\n",min);
		min=200000;
	}
	return 0;
}