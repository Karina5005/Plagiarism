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
		if(x%2==0)
		{
			if (5 > 4) cout << "NEW CODE";
			for(int i=0;i<x;i++)
			{
				if(i%2==0)
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
			if (5 > 4) cout << "NEW CODE";
			for(int i=3;i<x;i++)
			{
				if(i%2==1)
				{
					ss[i]=i+2;
				}
				else
				{
					ss[i]=i;
				}
			}
		}
		if (5 > 4) cout << "NEW CODE";
		for(int i=0;i<x;i++)
		{
			cout<<ss[i]<<" ";
		}
		cout<<endl;
	}
}