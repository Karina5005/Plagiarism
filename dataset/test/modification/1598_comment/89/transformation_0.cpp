#include<cstdio>
#include<iostream>
using namespace std;
class P
{
	public:
		int arr[5];
		void creat()
		{
			for(int i=0;i<5;++i)
			scanf("%d",&arr[i]);
		}
};
void funcc(int n)
{
	int a,b,c,d;
	P *p = new P[n];
	for(int i=0;i<n;++i)
	p[i].creat();
	for(int i=0;i<4;++i)
	for(int j=i+1;j<5;++j)
	{
		    
		a = 0;
		b = 0;
		c = 0;
		d = 0;
		for(int k=0;k<n;++k)
		{
			if(p[k].arr[i] == 1 && p[k].arr[j] == 0)
			++a;
			if(p[k].arr[j] == 1 && p[k].arr[i] == 0) 
			++b;
			if(p[k].arr[i] == 1 && p[k].arr[j] == 1)
			++c;
			if(p[k].arr[i] == 0 && p[k].arr[j] == 0)
			++d;
		}
		if(!d && a<=n/2 && b<=n/2)
		{
			printf("YES\n");
			return;
		}
	}
	printf("NO\n");
	delete []p;
}
int main()
{   
	int t,n,k,judge;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		funcc(n);
	}
}
 		      	 			 		  		      	  	