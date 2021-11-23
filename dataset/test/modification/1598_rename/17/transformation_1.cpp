#include<bits/stdc++.h>
using namespace std;

int main()
{
	int cte_y;cin>>cte_y;
	while(cte_y--)
	{
		int jt;cin>>jt;
		vector<long long>foq(jt);
		long long int cei_hnd=0;
		for(auto &fpx_o:foq){cin>>fpx_o;cei_hnd+=fpx_o;fpx_o*=jt;}
		map<long long,int>n_d;
		long long ee_u=0;
		for(auto &bev_k:foq){ee_u+=n_d[cei_hnd-bev_k];++n_d[bev_k-cei_hnd];}
		cout<<ee_u<<endl;
	}
	return 0;
}