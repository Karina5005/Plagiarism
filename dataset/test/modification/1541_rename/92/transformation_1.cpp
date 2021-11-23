#include <iostream>
using namespace std;

int main(){
	int hs_mzb;
	cin>>hs_mzb;
	while(hs_mzb--)
	{
		int g;
		cin>>g;
		int* oy=new int [g];
		if(g%2==0)
		{
			for(int osb=0;osb<g;osb++)
			{
				if(osb%2==0)
				{
					oy[osb]=osb+2;
				}
				else
				{
					oy[osb]=osb;
				}
			}
		}
		else
		{
			oy[0]=2;
			oy[1]=3;
			oy[2]=1;
			for(int p=3;p<g;p++)
			{
				if(p%2==1)
				{
					oy[p]=p+2;
				}
				else
				{
					oy[p]=p;
				}
			}
		}
		for(int q=0;q<g;q++)
		{
			cout<<oy[q]<<" ";
		}
		cout<<endl;
	}
}