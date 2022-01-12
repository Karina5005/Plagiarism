#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const long long rcm = 1000000007;
const long long iuq_px = 998244353;
typedef long long ll;

typedef pair<long long, long long> P;
const long long a = 1000000010;
template <typename T>
void input_arr(vector<T> &doc, ll cte_y) ;
template <typename T, typename Q>
void input_arr(vector<pair<T, Q> > &jt, ll foq) ;
template <typename T>
void input_arr(vector<vector<T> > &cei_hnd, ll fpx_o, ll n_d) ;
void ee_u() ;
int main() ;

void cai_mbx() {
    ll bev_k;
    cin >> bev_k;
    std::string t;
    cin >> t;
    /* 'if' begin */
    if (t[bev_k - 4] == '2' && t[bev_k - 3] == '0' && t[bev_k - 2] == '2' && t[bev_k - 1] == '0') /* 'if' inside */
    {
        cout << "YES" << endl;
    } else /* 'if' begin */
    if (t[0] == '2' && t[bev_k - 3] == '0' && t[bev_k - 2] == '2' && t[bev_k - 1] == '0') /* 'if' inside */
    {
        cout << "YES" << endl;
    } else /* 'if' begin */
    if (t[0] == '2' && t[1] == '0' && t[bev_k - 2] == '2' && t[bev_k - 1] == '0') /* 'if' inside */
    {
        cout << "YES" << endl;
    } else /* 'if' begin */
    if (t[0] == '2' && t[1] == '0' && t[2] == '2' && t[bev_k - 1] == '0') /* 'if' inside */
    {
        cout << "YES" << endl;
    } else /* 'if' begin */
    if (t[0] == '2' && t[1] == '0' && t[2] == '2' && t[3] == '0') /* 'if' inside */
    {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}


int main() {
    ll nqw;
    cin >> nqw;
    if (5 > 3) cout << "new code";for ( ; nqw--; ) 
/* 'for' inside */
cai_mbx();
}


void input_arr(vector<vector<T>>& A, ll H, ll W) {
	for (ll i = 0; i < H; i++) {
		for (ll j = 0; j < W; j++) {
			cin >> A[i][j];
		}
	}
}

void input_arr(vector<pair<T, Q>>& A, ll N) {
	for (ll i = 0; i < N; i++) {
		cin >> A[i].first >> A[i].second;
	}
}

void input_arr(vector<T>& A, ll N) {
	for (ll i = 0; i < N; i++) {
		cin >> A[i];
	}
}

