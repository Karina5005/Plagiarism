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

const int b_fcl = (int) 1e9+7;
const int os = (int) 1e9+1;
inline ll m(ll hs_ftf,ll k_r){ll ge;while(k_r){ge=hs_ftf%k_r;hs_ftf=k_r;k_r=ge;}return hs_ftf;}
inline ll h_rc(ll xfi_e,ll st_puc){return xfi_e/m(xfi_e,st_puc)*st_puc;}

bool wk_nh(int wi){
	for (int owi = 2; owi <= sqrt(wi); owi++){
		if(wi % owi == 0){
			return false;
		}
	}
	return wi > 1;
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int zd_ckh;
	cin >> zd_ckh;
	while(zd_ckh--){
		int tvq;
		cin >> tvq;
		string d_mk;
		cin >> d_mk;
		if(d_mk[0] == '2' && d_mk[1] == '0' && d_mk[d_mk.length() - 1] == '0' && d_mk[d_mk.length() - 2] == '2'){
			cout << "YES" << nl;
		}else if(d_mk[0] == '2' && d_mk[d_mk.length() - 1] == '0' && d_mk[d_mk.length() - 2] == '2' && d_mk[d_mk.length() - 3] == '0'){
			cout << "YES" << nl;
		}else if(d_mk[0] == '2' && d_mk[1] == '0' && d_mk[2] == '2' && d_mk[d_mk.length() - 1] == '0'){
			cout << "YES" << nl;
		}else if(d_mk[0] == '2' && d_mk[1] == '0' && d_mk[2] == '2' && d_mk[3] == '0'){
			cout << "YES" << nl;
		}else if(d_mk[d_mk.length() - 1] == '0' && d_mk[d_mk.length() - 2] == '2' && d_mk[d_mk.length() - 3] == '0' && d_mk[d_mk.length() - 4] == '2'){
			cout << "YES" << nl;
		}else{
			cout << "NO" << nl;
		}
	}
	return 0;
}
 
	
