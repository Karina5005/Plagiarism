#include<stdio.h>
int s[401][401],x[401][401],c[401],d[401],e[401],i,j;
int p(int left,int right){
	int ans=0;
	ans+=(right-left-1)*2-(d[right-1]-d[left]);
	ans+=c[right-1]-c[left];
	ans+=(j-i-1)*2-(c[left]-c[left-1])-(c[right]-c[right-1]);
	return ans;
}

int main(){
	int left,right,t,min=200000,minl,minr,f,a,b,n,m,k,l,tl,tr,sl,sr;
	scanf("%d",&n); 
	while(n){
		scanf("%d%d",&a,&b);
		for(i=1;i<=a;i++)
			/* 'for' inside */
			for(j=1;j<=b;j++)/* 'for' inside */
			scanf("%1d",&s[i][j]);
		for(i=1;i<=b;i++)/* 'for' inside */
		x[1][i]=s[1][i];
		for(i=2;i<=a;i++)
			/* 'for' inside */
			for(j=1;j<=b;j++)/* 'for' inside */
			x[i][j]=x[i-1][j]+s[i][j];
		for(i=1;i<=a-4;i++)
			/* 'for' inside */
			for(j=i+4;j<=a;j++)/* 'for' inside */
			{
				f=0;left=1;right=4;tl=1;tr=1;
				c[0]=0;
				c[1]=x[j-1][1]-x[i][1];
				d[1]=0;
				for(k=2;k<=b;k++)/* 'for' inside */
				{
					d[k]=d[k-1]+s[i][k]+s[j][k]; 
					c[k]=c[k-1]+x[j-1][k]-x[i][k];
				}
				while(right<=b){
					/* 'if' begin */
					if(p(left,right)>=p(right-3,right))/* 'if' inside */
					left=right-3;
					/* 'if' begin */
					if(p(left,right)<min)/* 'if' inside */
					min=p(left,right);
					right++;
				}
			}
		n--;
		printf("%d\n",min);
		min=200000;
	}
	return 0;
}