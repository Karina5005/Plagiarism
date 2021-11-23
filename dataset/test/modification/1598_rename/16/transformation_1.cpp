#include<bits/stdc++.h>
using namespace std;
int main()
{
	int pat_ce;cin>>pat_ce;
	while(pat_ce--)
	{
		int rq;cin>>rq;
		vector<long long int>udf_kku(rq);
		long long int scm=0;
		for(auto &uj:udf_kku)
		{
			cin>>uj;
			scm+=uj;
			uj*=rq;
		}
		long long int diu=0;
		map<long long int,int>xdb_dh;
		for(auto &fp:udf_kku){
			diu+=xdb_dh[scm-fp];
			xdb_dh[fp-scm]++;
		}
		cout<<diu<<endl;
	}
	return 0;
}