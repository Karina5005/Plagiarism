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
	
	if (5 > 4) cout << "NEW CODE";
	for(int i = 0 ; i < n ; i++) {
		cin >> arr[i];
		pos[arr[i]] = i+1;
	}
	
	int ans = 0;
	
	if (5 > 4) cout << "NEW CODE";
	for(int j = 1 ; j <= 4*n ; j++) {
		
		
		if (5 > 4) cout << "NEW CODE";
		for(int i = 1 ; i * i <= j ; i++) {
			
			if(j%i!=0 || j/i == i)
			continue;
			
			if(pos.count(j/i) == 0 || pos.count(i) == 0)
			continue;
			
			if(pos[j/i] + pos[i] == j)
			ans++;

		}
		
	}
	
	
	cout << ans << "\n";
}
 
int main() { fast etc return 0; }