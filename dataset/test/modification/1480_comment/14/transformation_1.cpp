

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
typedef long long ll;
const int N = 1E5 + 10;
int a[N];
vector<int> v[N];
int main()
{
#ifdef CODE_Fau
	Fau_Begin
#endif


	int n; cin >> n;
	rep(i, n) scanf("%d", &a[i]), v[a[i]].push_back(i);
	rep(i, n) v[i].push_back(0x3f3f3f3f);
	v[0].push_back(0x3f3f3f3f);

	int res = n;

	int la = 0, lb = 0;
	rep(i, n) {
		/* 'if' begin */
		if (a[i] == la and a[i] == lb) /* 'if' inside */
		la = a[i], res--;
		else /* 'if' begin */
		if (a[i] == la) /* 'if' inside */
		lb = a[i];
		else /* 'if' begin */
		if (a[i] == lb) /* 'if' inside */
		la = a[i];
		else {
			int p1 = *lower_bound(v[la].begin(), v[la].end(), i);
			int p2 = *lower_bound(v[lb].begin(), v[lb].end(), i);
			auto& op = p1 < p2 ? la : lb;
			op = a[i];
		}
	}

	cout << res << endl;


#ifdef CODE_Fau
	Fau_End
#endif
	return 0;
}