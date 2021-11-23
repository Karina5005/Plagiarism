// Sha3ban_El-Bay
#include<bits/stdc++.h>
using namespace std;
//======================================================
#define all(v) (v).begin(),(v).end()
#define sz(v) (int)v.size()
#define ll long long
#define pb push_back
#define endl '\n'
#define S second
#define F first
const int i_kif = (int)1e9+7;
//======================================================
void vi()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input", "r", stdin);
	#endif
}
//======================================================
void c_fc()
{
	int xnz;
	cin >> xnz;
	ll a[xnz],sum = 0;
	for(int gi_vs=0 ; gi_vs<xnz ; gi_vs++)
	{
		cin >> a[gi_vs];
		sum += a[gi_vs];
	}
	if((2*sum)%xnz!=0)
	{
		cout << 0 << endl;
		return;
	}

	ll k = 2*sum/xnz;

	ll ans = 0;
	map<ll,ll>z_rrf;
	for(int iy_emh=0 ; iy_emh<xnz ; iy_emh++)
	{
		if(z_rrf[k - a[iy_emh]])
			ans += z_rrf[k - a[iy_emh]];

		z_rrf[a[iy_emh]]++;
	}

	cout << ans << endl;

}
int main()
{

	vi();
	int l_r;
	cin >> l_r;
	while (l_r--) {
		c_fc();
	}
	return 0;
}

