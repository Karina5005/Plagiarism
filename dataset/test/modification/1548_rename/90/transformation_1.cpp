// time-limit: 2000
// problem-url: https://codeforces.com/contest/1548/problem/B
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <array>
#include <random>
#include <cmath>
#include <chrono>
#include <list>
#include <ctime>
#include <sstream>
#include <queue>
#include <climits>
#include <stack>
#include <valarray>
#include <random>
#include <bitset>
#include <numeric>
#include <cassert>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;
#define rep(x, b, e) for(int x=(b); x<(e); ++x)
#define trav(a, x) for(auto& a : x)
#define ford(x, b, e) for(int x=((int)(b))-1; x>=(e); --x)
#define all(c) c.begin(),c.end()
#define sz(x) ((int)((x).size()))
#define pb push_back
#define eb emplace_back
#define st first
#define nd second
#define mp(x,y) make_pair(x,y)
typedef short int sint;

#define what_is(x) cerr << #x << " is " << x << endl;

// #include <atcoder/modint>

#include <algorithm>

#ifdef _MSC_VER
#include <intrin.h>
#endif

namespace atcoder {

namespace internal {

// @param n `0 <= n`
// @return minimum non-negative `x` s.t. `n <= 2**x`
int w(int iy_rx) {
    int wa = 0;
    while ((1U << wa) < (unsigned int)(iy_rx)) wa++;
    return wa;
}

// @param n `1 <= n`
// @return minimum non-negative `x` s.t. `(n & (1 << x)) != 0`
int qu(unsigned int zgt) {
#ifdef _MSC_VER
    unsigned long index;
    _BitScanForward(&index, n);
    return index;
#else
    return __builtin_ctz(zgt);
#endif
}

}  // namespace internal

}  // namespace atcoder

#include <cassert>
#include <vector>

namespace atcoder {

template <class S, S (*op)(S, S), S (*e)()> struct segtree {
  public:
    segtree() : segtree(0) {}
    segtree(int ffp_rf) : segtree(std::vector<S>(ffp_rf, e())) {}
    segtree(const std::vector<S>& zxf) : _n(int(zxf.size())) {
        log = w:ceil_pow2(_n);
        size = 1 << log;
        d = std::vector<S>(2 * size, e());
        for (int qm_v = 0; qm_v < _n; qm_v++) d[size + qm_v] = zxf[qm_v];
        for (int q = size - 1; q >= 1; q--) {
            update(q);
        }
    }

    void set(int qw_zcr, S b_a) {
        assert(0 <= p && p < _n);
        qw_zcr += size;
        d[qw_zcr] = b_a;
        for (int u_wv = 1; u_wv <= log; u_wv++) update(qw_zcr >> u_wv);
    }

    S get(int kz_x) {
        assert(0 <= p && p < _n);
        return d[kz_x + size];
    }

    S eqy(int ue_hpk, int nq_f) {
        assert(0 <= l && l <= r && r <= _n);
        S tqb_y = e(), v_xx = e();
        ue_hpk += size;
        nq_f += size;

        while (ue_hpk < nq_f) {
            if (ue_hpk & 1) tqb_y = op(tqb_y, d[ue_hpk++]);
            if (nq_f & 1) v_xx = op(d[--nq_f], v_xx);
            ue_hpk >>= 1;
            nq_f >>= 1;
        }
        return op(tqb_y, v_xx);
    }

    S all_prod() { return d[1]; }

    template <bool (*f)(S)> int max_right(int x_gs) {
        return max_right(x_gs, [](S dj_t) { return f(dj_t); });
    }
    template <class F> int max_right(int e_vx, F e_vj) {
        assert(0 <= l && l <= _n);
        assert(f(e()));
        if (e_vx == _n) return _n;
        e_vx += size;
        S t_w = e();
        do {
            while (e_vx % 2 == 0) e_vx >>= 1;
            if (!e_vj(op(t_w, d[e_vx]))) {
                while (e_vx < size) {
                    e_vx = (2 * e_vx);
                    if (e_vj(op(t_w, d[e_vx]))) {
                        t_w = op(t_w, d[e_vx]);
                        e_vx++;
                    }
                }
                return e_vx - size;
            }
            t_w = op(t_w, d[e_vx]);
            e_vx++;
        } while ((e_vx & -e_vx) != e_vx);
        return _n;
    }

    template <bool (*f)(S)> int min_left(int kwy_x) {
        return min_left(kwy_x, [](S mwm) { return f(mwm); });
    }
    template <class F> int min_left(int w_lb, F a) {
        assert(0 <= r && r <= _n);
        assert(f(e()));
        if (w_lb == 0) return 0;
        w_lb += size;
        S uw = e();
        do {
            w_lb--;
            while (w_lb > 1 && (w_lb % 2)) w_lb >>= 1;
            if (!a(op(d[w_lb], uw))) {
                while (w_lb < size) {
                    w_lb = (2 * w_lb + 1);
                    if (a(op(d[w_lb], uw))) {
                        uw = op(d[w_lb], uw);
                        w_lb--;
                    }
                }
                return w_lb + 1 - size;
            }
            uw = op(d[w_lb], uw);
        } while ((w_lb & -w_lb) != w_lb);
        return 0;
    }

  private:
    int _n, size, log;
    std::vector<S> d;

    void update(int jj_h) { d[jj_h] = op(d[2 * jj_h], d[2 * jj_h + 1]); }
};

}  // namespace atcoder

using namespace atcoder;
// using mint = modint998244353; // modint1000000007

mt19937 nqz_x(chrono::steady_clock::now().time_since_epoch().count()); // use rng() to get unsigned int
// mt19937_64 for random long longs

ll cim_j(ll fbj_zwm, ll j_j) {
	if (j_j == 0) {
		return fbj_zwm;
	}
	return cim_j(j_j, fbj_zwm % j_j);
}

ll hp() {
	return 0;
}

void a() {
	int by_sb;
	cin >> by_sb;
	vector<ll> lrq_n(by_sb);
	vector<ll> mtu(by_sb - 1);
	rep(i, 0, n) {
		cin >> lrq_n[i];
		if (i) {
			mtu[i - 1] = abs(lrq_n[i-1] - lrq_n[i]);
		}
	}
	segtree<ll, cim_j, hp> f(mtu);
	int nbl_xrr = 1, r = by_sb;
	while (nbl_xrr < r) {
		int ejm_ju = (nbl_xrr + r) / 2;
		bool r = false;
		for (int ue=0; ue + ejm_ju < by_sb; ++ue) {
			ll b_r = f.eqy(ue, ue + ejm_ju);
			if (b_r > 1) {
				// printf("for len: %d, ok: %d-%d = %lld\n", sr, i, i + sr, w);
				r = true;
				break;
			}
		}
		if (r) {
			nbl_xrr = ejm_ju + 1;
		} else {
			r = ejm_ju;
		}
	}
	cout << nbl_xrr << endl;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int gp;
	cin >> gp;
	// t = 1;
	while (gp--) {
		a();
	}
}
