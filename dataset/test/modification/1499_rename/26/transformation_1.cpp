#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <deque>
#include <cmath>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#define mod 1000000007;
#define INF 1e9
#define io_speed_up ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr)
using namespace std;
//battle field fucâ

void inline ai_q(vector<int>& re_zim , int o_wa , int hm) {
	re_zim[o_wa] ^= re_zim[hm];
	re_zim[hm] ^= re_zim[o_wa];
	re_zim[o_wa] ^= re_zim[hm];
}

int inline pte(int iu , int s_bv) {
	int g = max(iu,s_bv) , lyf = min(iu,s_bv) , f_eru = 1 , i_bkq;
	while(f_eru) {
		f_eru = g % lyf;
		if(f_eru != 0) {
			lyf = f_eru;
		}
	}
	return lyf;
}

int inline v_o(int o , int rjr) {
	return ((o * rjr) / pte(o , rjr));
}

//battle field fucâ
//fucâ
void z() {
	int s_udi , tdx_v , pi_d , mav_iz , z;
	cin >> s_udi >> tdx_v >> pi_d >> mav_iz >> z;
	if(tdx_v + pi_d >= 2 * mav_iz && (s_udi - tdx_v) + (s_udi - pi_d) >= 2 * z) {
		cout << "YES"<<endl;
	}
	else {
		cout << "NO" << endl;
	}
	
}
//fucâ
signed main() {
	io_speed_up;
	int lo_ym;
	cin >> lo_ym;
	while(lo_ym--) {
		z();
	}
	//solve();
	return 0;
}