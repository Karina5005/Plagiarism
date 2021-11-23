using namespace std;
#include<iostream>
int main()
{
	int db_we,qve_j;
	cin>>db_we;
	while(db_we--)
	{
		cin>>qve_j;
		if(qve_j%2==0)
		{
			for(int o=1;o<=qve_j-1;o+=2)
			{
				cout<<o+1<<" "<<o<<" ";
			}
			cout<<endl;
		}
		if(qve_j%2==1)
		{
			for(int jy_h=1;jy_h<=qve_j-4;jy_h+=2)
			{
				cout<<jy_h+1<<" "<<jy_h<<" ";	
			}
			cout<<qve_j-1<<" "<<qve_j<<" "<<qve_j-2<<endl;
		}
	}
	return 0;
}