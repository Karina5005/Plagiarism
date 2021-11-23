#include <iomanip>
#include <iostream>
#include<cstdio>
#include<iostream>
using namespace std;
class P
{
	public:
		int arr[5];
		void creat()
		{
			{
			int i=0;
			for ( ; i<5; ) 
{
			scanf("%d",&arr[i]);
			++i; 
			
			}}
		}
};
void funcc(int n)
{
	int a,b,c,d;
	P *p = new P[n];
	{
	int i=0;
	for ( ; i<n; ) 
{
	p[i].creat();
	++i; 
	
	}}
	{
	int i=0;
	for ( ; i<4; ) 
{
	{
	int j=i+1;
	for ( ; j<5; ) 
{
		    
		a = 0;
		b = 0;
		c = 0;
		d = 0;
		{
		int k=0;
		for ( ; k<n; ) 
{
			if(p[k].arr[i] == 1 && p[k].arr[j] == 0)
			++a;
			if(p[k].arr[j] == 1 && p[k].arr[i] == 0) 
			++b;
			if(p[k].arr[i] == 1 && p[k].arr[j] == 1)
			++c;
			if(p[k].arr[i] == 0 && p[k].arr[j] == 0)
			++d;
			++k; 
		
		}}
		if(!d && a<=n/2 && b<=n/2)
		{
			std::cout << "YES\n";
			return;
		}
		++j; 
	
	}}
}	std::cout << "NO\n";
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
 		      	 			 		  		      	  	