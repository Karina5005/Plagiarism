#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int oom, l_oz;
	long long l, mo, jdv;

	vector<pair<int, int>> w, qz_tdq;

	cin >> oom;

	while (oom--)
	{
		cin >> l_oz;

		w.resize(l_oz);
		qz_tdq = w;

		l = 1LL * l_oz * (l_oz - 1) * (l_oz - 2) / 6;

		for (int sz_ipz = 0; sz_ipz < l_oz; ++sz_ipz)
		{
			cin >> w[sz_ipz].first >> w[sz_ipz].second;

			qz_tdq[sz_ipz].first = w[sz_ipz].second;
			qz_tdq[sz_ipz].second = w[sz_ipz].first;
		}

		sort(w.begin(), w.end());
		sort(qz_tdq.begin(), qz_tdq.end());

		for (int mmr_rcz = 0; mmr_rcz < l_oz; ++mmr_rcz)
		{
			mo = upper_bound(w.begin(), w.end(), make_pair(w[mmr_rcz].first + 1, 0)) - lower_bound(w.begin(), w.end(), make_pair(w[mmr_rcz].first, 0)) - 1;
			jdv = upper_bound(qz_tdq.begin(), qz_tdq.end(), make_pair(w[mmr_rcz].second + 1, 0)) - lower_bound(qz_tdq.begin(), qz_tdq.end(), make_pair(w[mmr_rcz].second, 0)) - 1;

			l -= (mo * jdv);
		}

		cout << l << '\n';
	}
}