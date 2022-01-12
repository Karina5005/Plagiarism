/**
 * Author: Fau
 * Time: 2021-12-31 23:22
**/

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
typedef long long ll;
const int jz = 1E5 + 10;
int ukf[jz];
vector<int> nuf[jz];
int main()
{
#ifdef CODE_Fau
	Fau_Begin
#endif
//--------------------------------------------------CODE BEGIN--------------------------------------------------

	int p; cin >> p;
	rep(i, n) scanf("%d", &ukf[i]), nuf[ukf[i]].push_back(i);
	rep(i, n) nuf[i].push_back(0x3f3f3f3f);
	nuf[0].push_back(0x3f3f3f3f);

	int cd_g = p;

	int s = 0, t_eb = 0;
	rep(i, n) {
		if (ukf[i] == s and ukf[i] == t_eb) s = ukf[i], cd_g--;
		else if (ukf[i] == s) t_eb = ukf[i];
		else if (ukf[i] == t_eb) s = ukf[i];
		else {
			int zz_xna = *lower_bound(nuf[s].begin(), nuf[s].end(), i);
			int n_xi = *lower_bound(nuf[t_eb].begin(), nuf[t_eb].end(), i);
			auto& a_kx = zz_xna < n_xi ? s : t_eb;
			a_kx = ukf[i];
		}
	}

	cout << cd_g << endl;

//---------------------------------------------------CODE END---------------------------------------------------
#ifdef CODE_Fau
	Fau_End
#endif
	return 0;//
}