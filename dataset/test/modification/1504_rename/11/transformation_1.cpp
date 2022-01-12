#include<bits/stdc++.h>
using namespace std;
int main()
{
	int am_gn; 
	cin>>am_gn; 
	while(am_gn--)
	{
		string zgs_ngn;
		cin>>zgs_ngn;
		if(count(zgs_ngn.begin(),zgs_ngn.end(),'a')==zgs_ngn.size())
			cout<<"NO"<<endl;
		else
		{
			int fnc_h=1;
			cout<<"YES"<<endl;
			for(int k_eyw=0;k_eyw<zgs_ngn.size();k_eyw++)
			{
				if(fnc_h&&zgs_ngn[zgs_ngn.size()-1-k_eyw]-'a')
					cout<<'a',fnc_h=0;
				cout<<zgs_ngn[k_eyw];
			}
			cout<<endl;
		}
	}
}