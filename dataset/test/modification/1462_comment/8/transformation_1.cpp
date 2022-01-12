#include <bits/stdc++.h>
using namespace std;
const long long MOD1 = 1000000007;
const long long MOD2 = 998244353;
typedef long long ll;

typedef pair<long long, long long> P;
const long long INF = 1000000010;
template <typename T>
void input_arr(vector<T>& A, ll N) {
	for (ll i = 0; i < N; i++) /* 'for' inside */
	{
		cin >> A[i];
	}
}
template <typename T, typename Q>
void input_arr(vector<pair<T, Q>>& A, ll N) {
	for (ll i = 0; i < N; i++) /* 'for' inside */
	{
		cin >> A[i].first >> A[i].second;
	}
}
template <typename T>
void input_arr(vector<vector<T>>& A, ll H, ll W) {
	for (ll i = 0; i < H; i++) /* 'for' inside */
	{
		for (ll j = 0; j < W; j++) /* 'for' inside */
		{
			cin >> A[i][j];
		}
	}
}
void solve() {
    ll N; cin >> N;
    string S; cin >> S;
    /* 'if' begin */
    if (S[N - 4] == '2' && S[N - 3] == '0' && S[N - 2] == '2' && S[N - 1] == '0') /* 'if' inside */
    {
        cout << "YES" << endl;
    } 
    else /* 'if' begin */
    if (S[0] == '2' && S[N - 3] == '0' && S[N - 2] == '2' && S[N - 1] == '0') /* 'if' inside */
    {
        cout << "YES" << endl;
    } 
    else /* 'if' begin */
    if (S[0] == '2' && S[1] == '0' && S[N - 2] == '2' && S[N - 1] == '0') /* 'if' inside */
    {
        cout << "YES" << endl;
    }
    else /* 'if' begin */
    if (S[0] == '2' && S[1] == '0' && S[2] == '2' && S[N - 1] == '0') /* 'if' inside */
    {
        cout << "YES" << endl;
    }
    else /* 'if' begin */
    if (S[0] == '2' && S[1] == '0' && S[2] == '2' && S[3] == '0') /* 'if' inside */
    {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    } 
}
int main() {
    ll T; cin >> T;
    while (T--) solve();
}