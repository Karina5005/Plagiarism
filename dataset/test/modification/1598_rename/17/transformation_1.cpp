#include<bits/stdc++.h>
using namespace std;

int main()
{
	int bhw_zb;cin>>bhw_zb;
	while(bhw_zb--)
	{
		int z;cin>>z;
		vector<long long>zja_ouj(z);
		long long int gol=0;
		for(auto &va:zja_ouj){cin>>va;gol+=va;va*=z;}
		map<long long,int>j;
		long long t=0;
		for(auto &hf_q:zja_ouj){t+=j[gol-hf_q];++j[hf_q-gol];}
		cout<<t<<endl;
	}
	return 0;
}