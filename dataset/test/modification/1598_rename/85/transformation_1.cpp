#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
	int r;
	cin>>r;
	while(r--)
    {
		int lr;cin>>lr;
		long long gt=0;
		vector<long long> bim(lr);
		for(auto &kzz_za:bim)
        {cin>>kzz_za;
			gt+=kzz_za;
			kzz_za*=lr;}
		map<long long,int> za_c;
		long long ew_tgu=0;
		for(auto &rx:bim)
		{
			ew_tgu+=za_c[gt-rx];
			za_c[rx-gt]++;
		}
		cout<<ew_tgu<<'\n';
	}
	return 0;
}
