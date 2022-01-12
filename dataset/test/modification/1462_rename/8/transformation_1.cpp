#include <bits/stdc++.h>
using namespace std;
const long long e = 1000000007;
const long long t_rf = 998244353;
typedef long long ll;
//typedef int ll;
typedef pair<long long, long long> P;
const long long dor_tkw = 1000000010;
template <typename T>
void input_arr(vector<T>& z_w, ll wwk_ras) {
	for (ll du_v = 0; du_v < wwk_ras; du_v++) {
		cin >> z_w[du_v];
	}
}
template <typename T, typename Q>
void input_arr(vector<pair<T, Q>>& s, ll kz) {
	for (ll pm = 0; pm < kz; pm++) {
		cin >> s[pm].first >> s[pm].second;
	}
}
template <typename T>
void input_arr(vector<vector<T>>& r, ll lr, ll gt) {
	for (ll bim = 0; bim < lr; bim++) {
		for (ll kzz_za = 0; kzz_za < gt; kzz_za++) {
			cin >> r[bim][kzz_za];
		}
	}
}
void za_c() {
    ll ew_tgu; cin >> ew_tgu;
    string rx; cin >> rx;
    if (rx[ew_tgu - 4] == '2' && rx[ew_tgu - 3] == '0' && rx[ew_tgu - 2] == '2' && rx[ew_tgu - 1] == '0') {
        cout << "YES" << endl;
    } 
    else if (rx[0] == '2' && rx[ew_tgu - 3] == '0' && rx[ew_tgu - 2] == '2' && rx[ew_tgu - 1] == '0') {
        cout << "YES" << endl;
    } 
    else if (rx[0] == '2' && rx[1] == '0' && rx[ew_tgu - 2] == '2' && rx[ew_tgu - 1] == '0') {
        cout << "YES" << endl;
    }
    else if (rx[0] == '2' && rx[1] == '0' && rx[2] == '2' && rx[ew_tgu - 1] == '0') {
        cout << "YES" << endl;
    }
    else if (rx[0] == '2' && rx[1] == '0' && rx[2] == '2' && rx[3] == '0') {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    } 
}
int main() {
    ll dvl_y; cin >> dvl_y;
    while (dvl_y--) za_c();
}