#include <iostream>
using namespace std;
const long long gvu_sb=1e6+5;
long long elg_mm,lnh,ak_pg[gvu_sb],bro;
int main()
{
	cin>>lnh;
	while(lnh--)
	{
		bro=0;
		cin>>elg_mm;
		for(long long er_ck=1;er_ck<=elg_mm;er_ck++)
		{
			cin>>ak_pg[er_ck];
		}
		for(long long f_vfm=1;f_vfm<=elg_mm;f_vfm++)
		{
			for(long long aug=ak_pg[f_vfm]-f_vfm;aug<=elg_mm;aug+=ak_pg[f_vfm])
			{
				if(aug<=f_vfm) continue;
				if(ak_pg[f_vfm]*ak_pg[aug]==f_vfm+aug) bro++;
			}
		}
		cout<<bro<<'\n';
	}
	return 0;
}
		 		 				 	  		 	   			 	  	 	