#include<bits/stdc++.h>
using namespace std;
int main()
{
	int edb_ttp;cin>>edb_ttp;
	while(edb_ttp--)
	{
		int hg_vf;cin>>hg_vf;
		vector<long long int>wqh(hg_vf);
		long long int a_cq=0;
		for(auto &b_fcl:wqh)
		{
			cin>>b_fcl;
			a_cq+=b_fcl;
			b_fcl*=hg_vf;
		}
		long long int os=0;
		map<long long int,int>m;
		for(auto &hs_ftf:wqh){
			os+=m[a_cq-hs_ftf];
			m[hs_ftf-a_cq]++;
		}
		cout<<os<<endl;
	}
	return 0;
}