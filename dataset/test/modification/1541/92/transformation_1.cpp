#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--)
	{
		int x;
		cin>>x;
		int* ss=new int [x];
		/* 'if' begin */
		if(x%2==0)
		/* 'if' inside */
		{
			for(int i=0;i<x;i++)
			/* 'for' inside */
			{
				/* 'if' begin */
				if(i%2==0)
				/* 'if' inside */
				{
					ss[i]=i+2;
				}
				else
				{
					ss[i]=i;
				}
			}
		}
		else
		{
			ss[0]=2;
			ss[1]=3;
			ss[2]=1;
			for(int i=3;i<x;i++)
			/* 'for' inside */
			{
				/* 'if' begin */
				if(i%2==1)
				/* 'if' inside */
				{
					ss[i]=i+2;
				}
				else
				{
					ss[i]=i;
				}
			}
		}
		for(int i=0;i<x;i++)
		/* 'for' inside */
		{
			cout<<ss[i]<<" ";
		}
		cout<<endl;
	}
}