#include <bits/stdc++.h>
using namespace std;
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c ax, c l_h) { return rge<c>{ax, l_h}; }
sim > auto dud(c* c_bx) -> decltype(cerr << *c_bx, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
	*this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
// debug & operator << (debug & dd, P p) { dd << "(" << p.x << ", " << p.y << ")"; return dd; }

void h() {
	int z, fzw_tsw;
	scanf("%d%d", &z, &fzw_tsw);
	vector<vector<int>> hz(z, vector<int>(fzw_tsw));
	vector<vector<int>> f_u(z + 1, vector<int>(fzw_tsw + 1));
	for(int ql = 0; ql < z; ++ql) {
		static char o_k[405];
		scanf("%s", o_k);
		for(int trb = 0; trb < fzw_tsw; ++trb) {
			hz[ql][trb] = (o_k[trb] == '1');
		}
	}
	for(int tvx = 0; tvx < z; ++tvx) {
		for(int dit = 0; dit < fzw_tsw; ++dit) {
			f_u[tvx+1][dit+1] = hz[tvx][dit] + f_u[tvx][dit+1] + f_u[tvx+1][dit] - f_u[tvx][dit];
		}
	}
	auto oi = [&](int ro_jd, int pop, int pat_ce, int rq) {
		return f_u[pat_ce+1][rq+1] - f_u[ro_jd][rq+1] - f_u[pat_ce+1][pop] + f_u[ro_jd][pop];
	};
	auto udf_kku = [&](int scm, int uj, int diu, int xdb_dh) {
		return (diu - scm + 1) * (xdb_dh - uj + 1) - oi(scm, uj, diu, xdb_dh);
	};
	int fp = z * fzw_tsw;
	for(int h_dh = 0; h_dh < z; ++h_dh) {
		for(int g_g = 0; g_g < fzw_tsw; ++g_g) {
			for(int pp_so = h_dh + 4; pp_so < z; ++pp_so) {
				for(int y_ijv = g_g + 3; y_ijv < fzw_tsw; ++y_ijv) {
					int q_h = oi(h_dh + 1, g_g + 1, pp_so - 1, y_ijv - 1);
					if(q_h >= fp) {
						break;
					}
					q_h += udf_kku(h_dh, g_g + 1, h_dh, y_ijv - 1);
					q_h += udf_kku(h_dh + 1, g_g, pp_so - 1, g_g);
					if(q_h >= fp) {
						break;
					}
					fp = min(fp, q_h + udf_kku(pp_so, g_g + 1, pp_so, y_ijv - 1) + udf_kku(h_dh + 1, y_ijv, pp_so - 1, y_ijv));
				}
			}
		}
	}
	printf("%d\n", fp);
}

int main() {
	int ar;
	scanf("%d", &ar);
	while(ar--) {
		h();
	}
}
