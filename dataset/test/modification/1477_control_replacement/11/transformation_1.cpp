#include <iomanip>
#include <iostream>
/*

p_b_p_b txdy
AThousandMoon txdy
AThousandSuns txdy
hxy txdy

*/

#include <bits/stdc++.h>
#define pb push_back
#define fst first
#define scd second

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;

const int maxn = 200100;

ll n, m, a[maxn];

ll gcd(ll a, ll b) {
	return b ? gcd(b, a % b) : a;
}

void solve() {
	scanf("%lld%lld", &n, &m);
	{
	int i = 1;
	for ( ; i <= n; ) 
{
		scanf("%lld", &a[i]);
		++i; 
	
	}}
	ll g = 0;
	{
	int i = 1;
	for ( ; i <= n; ) 
{
		g = gcd(g, a[i] - a[1]);
		++i; 
	
	}}
	puts(abs(m - a[1]) % g ? "NO" : "YES");
}

int main() {
	int T = 1;
	scanf("%d", &T);
	for ( ; T--; ) 
{
		solve();
	}
	return 0;
}
