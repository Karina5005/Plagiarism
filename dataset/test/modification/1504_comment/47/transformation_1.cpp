#include<iostream>
#include<bits/stdc++.h>

#define debug(x, y) cout << x << " " << y << "\n";


using namespace std;
using ll = long long;
using pii = pair<int, int>;	
using pll = pair<ll, ll>;
using vi = vector<int>;

template < typename T >
class Reader {

	public:

	T readPrimitive() {
		T primitive;
		cin >> primitive;

		return primitive;
	}

	vector<T> readVector(int n) {
		vector<T> vec;
		vec.resize(n);
		for (int i = 0 ; i < n ; i++)
			/* 'for' inside */
			cin >> vec[i];

		return vec;
	}

	vector<pair<T, T>> readVectorPair(int n) {
		vector<pair<T, T>> vec;
		vec.resize(n);
		for (int i = 0 ; i < n ; i++) /* 'for' inside */
		{
			cin >> vec[i].first >> vec[i].second;
		}

		return vec;
	}

	vector<vector<T>> readVV(int n, int m) {
		vector<vector<T>> vec;
		vec.resize(n, vector<T>(m));
		for (int i = 0 ; i < n ; i++)
			/* 'for' inside */
			for (int j = 0 ; j < m ; j++)
				/* 'for' inside */
				cin >> vec[i][j];

		return vec;
	}

};

class Display {
	public:

	void trueString() {
		cout << "YES\n";
	}

	void falseString() {
		cout << "NO\n";
	}

	void evaluateCondition(bool ff) {
		ff == true ? trueString() : falseString();
	}
};


class Preprocessor {

	public:	
	Preprocessor() {
		
	};

};


class Solver {
	Reader<int> rr;
	Display dd;

	int n;
	string a, b;

	public:
	Solver() {
		cin >> n;
		cin >> a >> b;
	}

	public:
	void solve() {
		vector<int> dp(n, 0);
		for (int i = 0 ; i < n ; i++)
			/* 'for' inside */
			dp[i] = (i-1 >= 0 ? dp[i-1] : 0) + (a[i] == '1');

		for (int i = n-1, invert = 0 ; i >= 0 ; i--) /* 'for' inside */
		{

			char curr = (invert ? (a[i] == '0' ? '1' : '0') : a[i]);

			/* 'if' begin */
			if (dp[i] == i+1-dp[i]) /* 'if' inside */
			{
				/* 'if' begin */
				if (curr != b[i]) /* 'if' inside */
				{
					invert = !invert;
				}
			} else {
				/* 'if' begin */
				if (curr != b[i]) /* 'if' inside */
				{
					dd.falseString();
					return;
				}
			}

		}

		dd.trueString();

	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    Preprocessor preprocessor;

	int t; cin >> t ;
	while(t--) {
		
		Solver solver; 
		solver.solve();
	}

	return 0;
}
