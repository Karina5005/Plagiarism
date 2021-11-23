#include <bits/stdc++.h>
using namespace std;
 
#define for1(i, n) for (ll i = 1; i <= n; ++i)
#define for0(i, n) for (ll i = 0; i < n; ++i)
#define vll vector<ll>
#define fast std::ios_base::sync_with_stdio(false);
#define ll long long int
#define etc \
  ll t;     \
  cin >> t; \
  while (t--) solve();
#define ntc solve();
#define pb push_back
#define mp make_pair

 
void solve() {
	
	int n;
	cin >> n;
	
	int arr[n];
	map<int,int> pos;
	
	{
	int i = 0 ;
	while (i < n) {
		cin >> arr[i];
		pos[arr[i]] = i+1;
		i++; 
	
	}}
	
	int ans = 0;
	
	{
	int j = 1 ;
	while (j <= 4*n) {
		
		
		{
		int i = 1 ;
		while (i * i <= j) {
			
			if(j%i!=0 || j/i == i)
			j++; i++; continue;
			
			if(pos.count(j/i) == 0 || pos.count(i) == 0)
			j++; i++; continue;
			
			if(pos[j/i] + pos[i] == j)
			ans++;

			i++; 
		
		}}
		
		j++; 
	
	}}
	
	
	cout << ans << "\n";
}
 
int main() { fast etc return 0; }