#include <iomanip>
#include <iostream>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <cstring>
#include <climits>
#include <iomanip>
#include <utility>
#include <cassert>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#define nl "\n"
#define MaxN 100005
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;	
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;for ( ; b; ) 
{r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

bool isPrimer(int n){
	{
	int i = 2;
	for ( ; i <= sqrt(n); ) 
{
		if(n % i == 0){
			return false;
		}
		i++; 
	
	}}
	return n > 1;
}
int main()
{
	cin.tie(NULL);
	int t;
	cin >> t;
	for ( ; t--; ) 
{
		int n;
		cin >> n;
		string s;
		cin >> s;
		if(s[0] == '2' && s[1] == '0' && s[s.length() - 1] == '0' && s[s.length() - 2] == '2'){
			cout << "YES" << nl;
		}else if(s[0] == '2' && s[s.length() - 1] == '0' && s[s.length() - 2] == '2' && s[s.length() - 3] == '0'){
			cout << "YES" << nl;
		}else if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[s.length() - 1] == '0'){
			cout << "YES" << nl;
		}else if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0'){
			cout << "YES" << nl;
		}else if(s[s.length() - 1] == '0' && s[s.length() - 2] == '2' && s[s.length() - 3] == '0' && s[s.length() - 4] == '2'){
			cout << "YES" << nl;
		}else{
			cout << "NO" << nl;
		}
	}
	return 0;
}
 
	
