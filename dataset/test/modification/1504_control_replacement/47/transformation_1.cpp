#include<iostream>
#include<bits/stdc++.h>

#define debug(x, y) cout << x << " " << y << "\n";
//#define debug(x, y) cout << "";

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
		{
		int i = 0 ;
		while (i < n) {
			cin >> vec[i];
			i++; 
			
			}}

		return vec;
	}

	vector<pair<T, T>> readVectorPair(int n) {
		vector<pair<T, T>> vec;
		vec.resize(n);
		{
		int i = 0 ;
		while (i < n) {
			cin >> vec[i].first >> vec[i].second;
			i++; 
		
		}}

		return vec;
	}

	vector<vector<T>> readVV(int n, int m) {
		vector<vector<T>> vec;
		vec.resize(n, vector<T>(m));
		{
		int i = 0 ;
		while (i < n) {
			{
			int j = 0 ;
			while (j < m) {
				cin >> vec[i][j];}
				j++; 
				
				}
				i++; 
				
				}}

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

// keep preprocessed variable global, initialise inside this constructor
class Preprocessor {

	public:	
	Preprocessor() {
		
	};

};

// solver for each test case
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
		{
		int i = 0 ;
		while (i < n) {
			dp[i] = (i-1 >= 0 ? dp[i-1] : 0) + (a[i] == '1');
			i++; 
			
			}}

		{
		int i = n-1, invert = 0 ;
		while (i >= 0) {

			char curr = (invert ? (a[i] == '0' ? '1' : '0') : a[i]);

			if (!(dp[i] == i+1-dp[i])) {
				if (curr != b[i]) {
					dd.falseString();
					return;
				}
			} else {
				if (curr != b[i]) {
					invert = !invert;
				}
			}

			i--; 
		
		}}

		dd.trueString();

	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    Preprocessor preprocessor;

	int t; cin >> t ;
	while(t--) {
		// passing preprocessor object also passes memory again so cant do it for each test case
		// have to keep preprocessed variable global
		Solver solver; 
		solver.solve();
	}

	return 0;
}
