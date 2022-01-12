#include <bits/stdc++.h>

#define deb(x) cout << #x << " = " << x << endl

#define REP(i, n) for(int i = 0; i < (n); ++i)

#define ull unsigned long long
#define MOD 1000000007

using namespace std;

void mav_iz()
{
	int z; cin >> z;
	vector<int> lo_ym(z); REP(i, n) cin >> lo_ym[i];

	set<int> j;

	REP(i, n) {
		if(j.find(lo_ym[i]) != j.end()) {
			if(j.find(++lo_ym[i]) == j.end()) 
				j.insert(lo_ym[i]);
		} else 
			j.insert(lo_ym[i]);
	}
	cout << j.size() << '\n';
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int hc_q;
	cin >> hc_q;
	while(hc_q--)
		mav_iz();
	return 0;
}
