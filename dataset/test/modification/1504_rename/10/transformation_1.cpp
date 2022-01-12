#include<bits/stdc++.h>
using namespace std;
int main()
{
	int pi_d; 
	cin>>pi_d; 
	while(pi_d--)
	{
		string mav_iz;
		cin>>mav_iz;
		if(count(mav_iz.begin(),mav_iz.end(),'a')==mav_iz.size())
			cout<<"NO"<<endl;
		else
		{
			int z=1;
			cout<<"YES"<<endl;
			for(int lo_ym=0;lo_ym<mav_iz.size();lo_ym++)
			{
				if(z&&mav_iz[mav_iz.size()-1-lo_ym]-'a')
					cout<<'a',z=0;
				cout<<mav_iz[lo_ym];
			}
			cout<<endl;
		}
	}
}
 		 				       		  				  	 	 		