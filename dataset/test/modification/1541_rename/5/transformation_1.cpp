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

 
void v() {
	
	int yda_w;
	cin >> yda_w;
	
	int hl[yda_w];
	map<int,int> fwo_ch;
	
	for(int t_ch = 0 ; t_ch < yda_w ; t_ch++) {
		cin >> hl[t_ch];
		fwo_ch[hl[t_ch]] = t_ch+1;
	}
	
	int ws_r = 0;
	
	for(int lm = 1 ; lm <= 4*yda_w ; lm++) {
		
		
		for(int skx = 1 ; skx * skx <= lm ; skx++) {
			
			if(lm%skx!=0 || lm/skx == skx)
			continue;
			
			if(fwo_ch.count(lm/skx) == 0 || fwo_ch.count(skx) == 0)
			continue;
			
			if(fwo_ch[lm/skx] + fwo_ch[skx] == lm)
			ws_r++;

		}
		
	}
	
	
	cout << ws_r << "\n";
}
 
int main() { fast etc return 0; }