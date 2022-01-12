#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <array>
#include <iomanip>
 
using namespace std;
 
typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<ll> vl;
typedef vector<int> vi;
#define fo(i, a, n) for(int i = a; i < n; i++)
#define fi(i, n, a) for(int i = n; i >= a; i--)
#define mp make_pair
#define pb push_back
#define INF 2e18
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 
void solve() {
    ll A, B, C; cin >> A >> B >> C;
    ll G1 = 2*B-C;
    ll G2 = 2*B-A;
    ll G3 = A+C;
    cout << ((G1%A==0&&G1>0)||(G2%C==0&&G2>0)||(G3%2==0&&(G3/2)%B==0&&G3>0)?"YES":"NO") << "\n";
 
}
 
int main() {
    cin.tie(0)->sync_with_stdio(0); 
    cin.exceptions(cin.failbit);
 
    int T = 1;
    cin >> T;
    while(T--) {
        solve();
    }
 
	return 0;
}