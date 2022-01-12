

#include <bits/stdc++.h>

using namespace std;

#define _TestCases_ ll tcs; cin >> tcs; while (tcs--)
#define db double
#define ld long double
#define ll long long
#define i64 __int64 
#define ull unsigned long long
#define ui64 unsigned __int64 
#define pq priority_queue
#define sortU(v) sort(v.begin(), v.end())
#define sortD(v) sort(v.rbegin(), v.rend())
#define pcl pair<char, ll>

ll GCD(ll a, ll b) {
	while (b) { a = a % b; swap(a, b); }
	return a;
} 
ll LCM(ll a, ll b) {
	return (a * b) / GCD(a, b);
} 
ll findGCD(vector<ll>& arr) {
	ll n = arr.size(); ll result = arr[0];
	for (ll i = 1; i < n; i++) /* 'for' inside */
	{ result = GCD(arr[i], result); /* 'if' begin */
	if (result == 1) /* 'if' inside */
	return 1; }
	return result;
} 

void SolveProblem()
{
	ll n, count = 0; cin >> n;
	vector<ll>a(n);
	for (ll i = 0; i < n; i++) /* 'for' inside */
	cin >> a[i];
	sortU(a);
	for (ll i = 0; i < n; i++)
		/* 'for' inside */
		/* 'if' begin */
		if (a[i] == a[0])
			/* 'if' inside */
			count++;
	cout << n - count << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	_TestCases_
		SolveProblem();
	return 0;
}