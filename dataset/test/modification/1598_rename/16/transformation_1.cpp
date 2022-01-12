#include<bits/stdc++.h>
using namespace std;
int main()
{
	int dvl_y;cin>>dvl_y;
	while(dvl_y--)
	{
		int m;cin>>m;
		vector<long long int>oa_m(m);
		long long int qqo=0;
		for(auto &wt:oa_m)
		{
			cin>>wt;
			qqo+=wt;
			wt*=m;
		}
		long long int au_wqh=0;
		map<long long int,int>fz_jbw;
		for(auto &w_hd:oa_m){
			au_wqh+=fz_jbw[qqo-w_hd];
			fz_jbw[w_hd-qqo]++;
		}
		cout<<au_wqh<<endl;
	}
	return 0;
}