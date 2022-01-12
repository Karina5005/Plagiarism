/**
 * Author: Fau
 * Time: 2021-12-31 23:22
**/

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
typedef long long ll;
const int ai = 1E5 + 10;
int ddk[ai];
vector<int> j[ai];
int main()
{
#ifdef CODE_Fau
	Fau_Begin
#endif
//--------------------------------------------------CODE BEGIN--------------------------------------------------

	int sdd_oyq; cin >> sdd_oyq;
	rep(i, n) scanf("%d", &ddk[i]), j[ddk[i]].push_back(i);
	rep(i, n) j[i].push_back(0x3f3f3f3f);
	j[0].push_back(0x3f3f3f3f);

	int tj_ccb = sdd_oyq;

	int y = 0, pub_be = 0;
	rep(i, n) {
		if (ddk[i] == y and ddk[i] == pub_be) y = ddk[i], tj_ccb--;
		else if (ddk[i] == y) pub_be = ddk[i];
		else if (ddk[i] == pub_be) y = ddk[i];
		else {
			int dx = *lower_bound(j[y].begin(), j[y].end(), i);
			int khi_beh = *lower_bound(j[pub_be].begin(), j[pub_be].end(), i);
			auto& ged = dx < khi_beh ? y : pub_be;
			ged = ddk[i];
		}
	}

	cout << tj_ccb << endl;//

//---------------------------------------------------CODE END---------------------------------------------------
#ifdef CODE_Fau
	Fau_End
#endif
	return 0;
}