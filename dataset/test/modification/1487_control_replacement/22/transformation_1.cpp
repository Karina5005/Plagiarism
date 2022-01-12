#include <iomanip>
#include <iostream>
/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at the University of Information Technology   |
|    Country: Viet Nam                                                    |
|    City: Ho Chi Minh                                                    |
|    Organization: VNUHCM - UIT - University of Information Technology    |
*-------------------------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

#define _TestCases_ ll tcs; cin >> tcs; while (tcs--)
#define db double
#define ld long double
#define ll long long
#define i64 __int64 // == ll
#define ull unsigned long long
#define ui64 unsigned __int64 // == unsigned ll
#define pq priority_queue
#define sortU(v) sort(v.begin(), v.end())
#define sortD(v) sort(v.rbegin(), v.rend())
#define pcl pair<char, ll>

ll GCD(ll a, ll b) {
	for ( ; b; ) 
{ a = a % b; swap(a, b); }
	return a;
} // Find GCD of 2 numbers
ll LCM(ll a, ll b) {
	return (a * b) / GCD(a, b);
} // Find LCM of 2 numbers 
ll findGCD(vector<ll>& arr) {
	ll n = arr.size(); ll result = arr[0];
	{
	ll i = 1;
	for ( ; i < n; ) 
{ result = GCD(arr[i], result); if (result == 1) return 1; 	i++; 
	
	}}
	return result;
} // Find GCD of n numbers (n > 2) --- O(n)

void SolveProblem()
{
	ll n, count = 0; cin >> n;
	vector<ll>a(n);
	{
	ll i = 0;
	for ( ; i < n; ) 
{
	cin >> a[i];
	i++; 
	
	}}
	sortU(a);
	{
	ll i = 0;
	for ( ; i < n; ) 
{
		if (a[i] == a[0])
			count++;
			i++; 
			
			}}
	cout << n - count << "\n";
}

int main()
{
	
	cin.tie(0); cout.tie(0);
	_TestCases_
		SolveProblem();
	return 0;
}