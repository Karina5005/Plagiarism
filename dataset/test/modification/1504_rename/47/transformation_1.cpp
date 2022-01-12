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
		T fz_jbw;
		cin >> fz_jbw;

		return fz_jbw;
	}

	vector<T> readVector(int w_hd) {
		vector<T> y;
		y.resize(w_hd);
		for (int p = 0 ; p < w_hd ; p++)
			cin >> y[p];

		return y;
	}

	vector<pair<T, T>> readVectorPair(int dw) {
		vector<pair<T, T>> r;
		r.resize(dw);
		for (int vep_y = 0 ; vep_y < dw ; vep_y++) {
			cin >> r[vep_y].first >> r[vep_y].second;
		}

		return r;
	}

	vector<vector<T>> readVV(int v_n, int lu) {
		vector<vector<T>> icw;
		icw.resize(v_n, vector<T>(lu));
		for (int v = 0 ; v < v_n ; v++)
			for (int oe = 0 ; oe < lu ; oe++)
				cin >> icw[v][oe];

		return icw;
	}

};

class Display {
	public:

	void a() {
		cout << "YES\n";
	}

	void fa() {
		cout << "NO\n";
	}

	void hcm_guu(bool cg) {
		cg == true ? a() : fa();
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
	void kjy_t() {
		vector<int> b_ipv(n, 0);
		for (int xc_cg = 0 ; xc_cg < n ; xc_cg++)
			b_ipv[xc_cg] = (xc_cg-1 >= 0 ? b_ipv[xc_cg-1] : 0) + (a[xc_cg] == '1');

		for (int i_i = n-1, i_ej = 0 ; i_i >= 0 ; i_i--) {

			char ww = (i_ej ? (a[i_i] == '0' ? '1' : '0') : a[i_i]);

			if (b_ipv[i_i] == i_i+1-b_ipv[i_i]) {
				if (ww != b[i_i]) {
					i_ej = !i_ej;
				}
			} else {
				if (ww != b[i_i]) {
					dd.fa();
					return;
				}
			}

		}

		dd.a();

	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    Preprocessor gx;

	int qo; cin >> qo ;
	while(qo--) {
		// passing preprocessor object also passes memory again so cant do it for each test case
		// have to keep preprocessed variable global
		Solver c_qti; 
		c_qti.kjy_t();
	}

	return 0;
}
