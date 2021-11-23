// Code Force
// wangqc
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void fhn()
{
	int j;
	cin >> j;
	ll zn_m[j],w_n = 0;
	for(int lx_rs=0 ; lx_rs<j ; lx_rs++)
	{
		cin >> zn_m[lx_rs];
		w_n += zn_m[lx_rs];
	}
	if((2*w_n)%j!=0)
	{
		cout << 0 << endl;
		return;
	}
 
	ll g = 2*w_n/j;
 
	ll w = 0;
	map<ll,ll>t;
	for(int uu=0 ; uu<j ; uu++)
	{
		if(t[g - zn_m[uu]])
			w += t[g - zn_m[uu]];
 
		t[zn_m[uu]]++;
	}
 
	cout << w << endl;
 
}
int main()
{
 
	int aao_be;
	cin >> aao_be;
	while (aao_be--) {
		fhn();
	}
	return 0;
}