#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <climits>
#include<set>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

#define DEBUG(x) cout << endl << "DEBUG # " << x << endl
#define DEBUG2(x, y) cout << endl << "DEBUG # " << (x) << " AND " << (y) << endl
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mp make_pair
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define srt(c) sort(all(c))
#define forn(i, a, b) for(int i = a; i < b; i++)
#define F first
#define S second
#define E end
#define file freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
const long long mod = 1e9 + 7, maxn = 1e5, inf = INT_MAX;
int t;

int main() {
	fast;

	cin >> t;

	while(t--) {
		int n, a[maxn];
		cin >> n;

		for(int i = 0; i < n; i++)
			cin >> a[i];

		set<int> nums;
		vector<int> larges;

		for(int i = 0; i < n; i++) {
			if(a[i] > n || nums.find(a[i]) != nums.end()) {
				larges.push_back(a[i]);
			} else
				nums.insert(a[i]);
		}

		for(int i = 0; i < larges.size(); i++) {
			while(larges[i] > n) {
				larges[i] /= 2;
			}

			while(nums.find(larges[i]) != nums.end()) {
				larges[i] /= 2;
				if(larges[i] == 0)
					break;
			}
			if(larges[i] != 0)
				nums.insert(larges[i]);
		}

		if(nums.size() == n)
			cout  << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}
	return 0;
}
