// Author: envy
// Problem: A. Web of Lies from Codeforces - Codeforces Round #736 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1548/A
// Limits: 2000 ms, 256 MB
// Attempted: 2021-09-06 11:14:25 EST

#ifndef LOCAL
#define debug(...) 0
#include <bits/stdc++.h>
#else
#include "C:\programmingfunnyxd\debug.cpp"
#include "C:\programmingfunnyxd\includeordie.h"
#endif
using namespace std;
inline namespace readio { const int n = 1<<15; char bc[n]; int gu, xn_o;char t() {if (gu == xn_o) {gu = 0; xn_o = fread(bc,1,n,stdin);if (!xn_o) return EOF;}return bc[gu++];}
template<class T> void n_a(T& uxg) {char wzl; int lqt = 1;while (!isdigit(wzl = t())) if (wzl == '-') lqt *= -1;uxg = wzl-'0'; while (isdigit(wzl = t())) uxg = uxg*10+(wzl-'0');uxg *= lqt;}
template<class T> void rc(T& c){ c = t();while(isspace(c))c = t();}template<class T, class... Ts> void qp(T& w, Ts&... xf_f) {ri(w);ri(xf_f...);}
template<class str>void rs(str& q) { char jcy_ws; while (isspace(jcy_ws = t()));do { q += jcy_ws; } while (!isspace(jcy_ws = t()) && jcy_ws != EOF);}}
template<typename T> void max_self(T& o, T q_qw){o = max(o,q_qw);}template<typename T> void min_self(T& gp, T b_zn){gp = min(gp,b_zn);}
struct minsecond{bool operator()(pair<int,int> u_vvz, pair<int,int> pp_mu){return u_vvz.second > pp_mu.second;}};
template<typename T> using minpq = priority_queue<T, vector<T>, greater<T>>;template<typename T> using maxpq = priority_queue<T>;
typedef priority_queue<pair<int,int>, vector<pair<int,int>>, minsecond> secondpq;
typedef long long ll; const ll q = 1e18; const int vpz_b = 1e9+7;
#define all(x) x.begin(), x.end()
#define pb(x) push_back(x)
#define print(x) cout<<x<<"\n"
#define mp(x,y) make_pair(x,y)
#define np(x) next_permutation(all(x))
#define F first
#define S second
#define sz(v) int(v.size())
#define bpop(x) __builtin_popcount(x)
#define fillarr(arr,n,am) fill(arr[0],arr[n],am)
#define readarr(arr) for(int &i: arr)ri(i);
#define readchararr(arr)for(int &i: arr)rc(i);
#define readgrid(arr, n, m)for(int i = 0; i < n; i++)for(int j = 0; j < m; j++)ri(arr[i][j]);
#define readchargrid(arr, n, m)for(int i = 0; i < n; i++)for(int j = 0; j < m; j++)rc(arr[i][j]);
const int vj_ige[4] = {1,-1,0,0}, uhm_l[4] = {0,0,-1,1};
#define int long long // fight me
int n;
int edges[200001];
int weaker[200001];

void csk_r(){
	int m; qp(n,m);
	for(int i = 0; i < m; i++){
		int a,b; qp(a,b);
		edges[a]++;
		edges[b]++;
		a > b ? weaker[a]++ : weaker[b]++;
	}
	int ans = 0;
	vector<bool> e(200001,false);
	for(int i = 1; i <= n; i++){
		if(weaker[i] == edges[i]){
			ans++;
			e[i] = true;
		}
	}
	int q; n_a(q);
	while(q--){
		int type; n_a(type);
		if(type == 1){
			int a,b; qp(a,b);
			edges[a]++;
			edges[b]++;
			a > b ? weaker[a]++ : weaker[b]++;
			if(weaker[b] != edges[b] && e[b]){
				ans--;
				e[b] = false;
			}
			if(weaker[a] != edges[a] && e[a]){
				ans--;
				e[a] = false;
			}
		}
		else if (type == 2){
			int a,b; qp(a,b);
			edges[a]--;
			edges[b]--;
			a > b ? weaker[a]-- : weaker[b]--;
			if(weaker[b] == edges[b] && !e[b]){
				ans++;
				e[b] = true;
			}
			if(weaker[a] == edges[a] && !e[a]){
				ans++;
				e[a] = true;
			}
		}
		else{
			print(ans);
		}
	}
	
}

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(0);int t = 1;
	// ri(t);
	while(t--)csk_r();
    #ifdef LOCAL
    cerr << "Runtime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	#endif
}