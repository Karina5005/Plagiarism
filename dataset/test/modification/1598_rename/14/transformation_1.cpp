#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p_fzz;cin>>p_fzz;
	while(p_fzz--)
	{
		int ofz;cin>>ofz;
		vector<long long int>s_f(ofz);
		long long int nef_gn=0;
		for(auto &h_b:s_f)
		{
			cin>>h_b;
			nef_gn+=h_b;
			h_b*=ofz;
		}
		long long int x=0;
		map<long long int,int>vpy_pw;
		for(auto &fg:s_f){
			x+=vpy_pw[nef_gn-fg];
			vpy_pw[fg-nef_gn]++;
		}
		cout<<x<<endl;
	}
	return 0;
}