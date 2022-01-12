#include <bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
#define all(x) x.begin(), x.end();
#define mod 10000000 + 9;
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll hf_q;
	cin >> hf_q;
	while (hf_q--)
	{
		ll wye_en; cin >> wye_en;
		ll d = 0;
		for(int lqq = 3; lqq*lqq <= 2*wye_en-1; lqq+=2){
			d++;
		}
		cout << d << endl;
	}

	return 0;
}