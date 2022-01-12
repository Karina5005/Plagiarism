#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const long long MOD1 = 1000000007;
const long long MOD2 = 998244353;
typedef long long ll;
//typedef int ll;
typedef pair<long long, long long> P;
const long long INF = 1000000010;
template <typename T>
void input_arr(vector<T>& A, ll N) {
	{
	ll i = 0;
	for ( ; i < N; ) 
{
		cin >> A[i];
		i++; 
	
	}}
}
template <typename T, typename Q>
void input_arr(vector<pair<T, Q>>& A, ll N) {
	{
	ll i = 0;
	for ( ; i < N; ) 
{
		cin >> A[i].first >> A[i].second;
		i++; 
	
	}}
}
template <typename T>
void input_arr(vector<vector<T>>& A, ll H, ll W) {
	{
	ll i = 0;
	for ( ; i < H; ) 
{
		{
		ll j = 0;
		for ( ; j < W; ) 
{
			cin >> A[i][j];
			j++; 
		
		}}
		i++; 
	
	}}
}
void solve() {
    ll N; cin >> N;
    string S; cin >> S;
    if (S[N - 4] == '2' && S[N - 3] == '0' && S[N - 2] == '2' && S[N - 1] == '0') {
        cout << "YES" << endl;
    } 
    else if (S[0] == '2' && S[N - 3] == '0' && S[N - 2] == '2' && S[N - 1] == '0') {
        cout << "YES" << endl;
    } 
    else if (S[0] == '2' && S[1] == '0' && S[N - 2] == '2' && S[N - 1] == '0') {
        cout << "YES" << endl;
    }
    else if (S[0] == '2' && S[1] == '0' && S[2] == '2' && S[N - 1] == '0') {
        cout << "YES" << endl;
    }
    else if (S[0] == '2' && S[1] == '0' && S[2] == '2' && S[3] == '0') {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    } 
}
int main() {
    ll T; cin >> T;
    for ( ; T--; ) 
solve();
}