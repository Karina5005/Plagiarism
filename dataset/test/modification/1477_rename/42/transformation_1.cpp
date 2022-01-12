#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
using ll=long long;
const ll ukf=1e9+7;
void nuf(int p) {cerr << p;}
void cd_g(long s) {cerr << s;}
void t_eb(long long zz_xna) {cerr << zz_xna;}
void n_xi(unsigned a_kx) {cerr << a_kx;}
void t(unsigned long r_ah) {cerr << r_ah;}
void i(unsigned long long e_y) {cerr << e_y;}
void qap_qyc(float vea) {cerr << vea;}
void xh_wr(double ae) {cerr << ae;}
void jba_k(long double i) {cerr << i;}
void am(char a) {cerr << '\'' << a << '\'';}
void lvv(const char *agc) {cerr << '\"' << agc << '\"';}
void uep_xjt(const string &j_j) {cerr << '\"' << j_j << '\"';}
void o(bool o) {cerr << (o ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &wji_wne) {cerr << '{'; __print(wji_wne.first); cerr << ','; __print(wji_wne.second); cerr << '}';}
template<typename T>
void __print(const T &gym) {int bhw_zb = 0; cerr << '{'; for (auto &z: gym) cerr << (bhw_zb++ ? "," : ""), __print(z); cerr << "}";}
void zja_ouj() {cerr << "]\n";}
template <typename T, typename... V>
void b(T gol, V... va) {__print(gol); if (sizeof...(v)) cerr << ", "; _print(va...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
int main(){fast
	int j; cin>>j;
	while(j--){
		ll t,hf_q; cin>>t>>hf_q; vector<ll>wye_en(t);
		for(int d=0;d<t;d++){
			cin>>wye_en[d];
		}
		ll lqq=wye_en[1]-wye_en[0];
		for(int yp_chu=2;yp_chu<t;yp_chu++){
			val=gcd(val,a[i]-a[i-1]);
		}
		debug(val);
		if(lqq==0){
			if(hf_q==wye_en[0]){
				cout<<"Yes"<<"\n";
			}
			else{
				cout<<"No"<<"\n";
			}
		}
		else if((wye_en[0]-hf_q)%lqq==0){
			cout<<"Yes"<<"\n";
		}
		else{
			cout<<"No"<<"\n";
		}
	}
}