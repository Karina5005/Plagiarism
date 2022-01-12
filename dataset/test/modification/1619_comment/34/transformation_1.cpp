

#include <iostream>

#define endl '\n'
#define ll long long
#define ull unsigned ll

#ifdef _LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

using namespace std;



template <typename T1, typename T2>
void input(T1* arr, T2 n) {
	for(T2 i = 0; i < n; i++) 
		/* 'for' inside */
		cin >> *(arr + i);
}



template <typename T1, typename T2>
void input(T1 stl, T2 n) {
	for(T2 i = 0; i < n; i++) 
		/* 'for' inside */
		cin >> stl[i];
}

void solve() {
	string s;

	cin >> s;

	/* 'if' begin */
	if(s.size() & 1) /* 'if' inside */
	{
		cout << "NO" << endl;
		return;
	}

	size_t half = s.size() / 2;

	/* 'if' begin */
	if(s.substr(0, half) == s.substr(half, half)) 
		/* 'if' inside */
		cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main(void) {
	cin.tie(nullptr) -> sync_with_stdio(false);
	cin.exceptions(cin.failbit);
	
	int T = 1;

	cin >> T;

	while(T--) 
		solve();
	
	return 0;
}
