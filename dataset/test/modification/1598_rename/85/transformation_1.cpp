#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
	int cd_v;
	cin>>cd_v;
	while(cd_v--)
    {
		int exe_mj;cin>>exe_mj;
		long long cp=0;
		vector<long long> z_yg(exe_mj);
		for(auto &h:z_yg)
        {cin>>h;
			cp+=h;
			h*=exe_mj;}
		map<long long,int> stg;
		long long rb=0;
		for(auto &fdg:z_yg)
		{
			rb+=stg[cp-fdg];
			stg[fdg-cp]++;
		}
		cout<<rb<<'\n';
	}
	return 0;
}
