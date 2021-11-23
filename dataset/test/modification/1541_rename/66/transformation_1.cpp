#include <iostream>
#include <algorithm>
#include <cstring>
 
using namespace std;
int main ()
{
	int xrr_g;
	cin>>xrr_g;
	while(xrr_g--)
	{
		int ly_obk;
		cin>>ly_obk;
		if(ly_obk%2==0)
		{
			for(int gd=1;gd<=ly_obk;gd++,gd++)
			{
				cout<<gd+1<<" "<<gd<<" ";
			}
		}else{
			cout<<"3 1 2 ";
			for(int ibm_oo=4;ibm_oo<=ly_obk;ibm_oo++,ibm_oo++)
			{
				cout<<ibm_oo+1<<" "<<ibm_oo<<" ";
			}
		}
		cout<<endl;
	}
}
