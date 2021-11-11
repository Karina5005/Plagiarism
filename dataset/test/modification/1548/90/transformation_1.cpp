
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



#include <algorithm>

#ifdef _MSC_VER
#include <intrin.h>
#endif

namespace atcoder {

namespace internal {


int ceil_pow2(int n) {
    int x = 0;
    while ((1U << x) < (unsigned int)(n)) x++;
    return x;
}


int bsf(unsigned int n) {
#ifdef _MSC_VER
    unsigned long index;
    _BitScanForward(&index, n);
    return index;
#else
    return __builtin_ctz(n);
#endif
}

}  

}  

#include <cassert>
#include <vector>

namespace atcoder {

template <class S, S (*op)(S, S), S (*e)()> struct segtree {
  public:
    segtree() : segtree(0) {}
    segtree(int n) : segtree(std::vector<S>(n, e())) {}
    segtree(const std::vector<S>& v) : _n(int(v.size())) {
        log = internal::ceil_pow2(_n);
        size = 1 << log;
        d = std::vector<S>(2 * size, e());
        for (int i = 0; i < _n; i++) /* 'for' inside */
        d[size + i] = v[i];
        for (int i = size - 1; i >= 1; i--) /* 'for' inside */
        {
            update(i);
        }
    }

    void set(int p, S x) {
        assert(0 <= p && p < _n);
        p += size;
        d[p] = x;
        for (int i = 1; i <= log; i++) /* 'for' inside */
        update(p >> i);
    }

    S get(int p) {
        assert(0 <= p && p < _n);
        return d[p + size];
    }

    S prod(int l, int r) {
        assert(0 <= l && l <= r && r <= _n);
        S sml = e(), smr = e();
        l += size;
        r += size;

        while (l < r) {
            /* 'if' begin */
            if (l & 1) /* 'if' inside */
            sml = op(sml, d[l++]);
            /* 'if' begin */
            if (r & 1) /* 'if' inside */
            smr = op(d[--r], smr);
            l >>= 1;
            r >>= 1;
        }
        return op(sml, smr);
    }

    S all_prod() { return d[1]; }

    template <bool (*f)(S)> int max_right(int l) {
        return max_right(l, [](S x) { return f(x); });
    }
    template <class F> int max_right(int l, F f) {
        assert(0 <= l && l <= _n);
        assert(f(e()));
        /* 'if' begin */
        if (l == _n) /* 'if' inside */
        return _n;
        l += size;
        S sm = e();
        do {
            while (l % 2 == 0) l >>= 1;
            /* 'if' begin */
            if (!f(op(sm, d[l]))) /* 'if' inside */
            {
                while (l < size) {
                    l = (2 * l);
                    /* 'if' begin */
                    if (f(op(sm, d[l]))) /* 'if' inside */
                    {
                        sm = op(sm, d[l]);
                        l++;
                    }
                }
                return l - size;
            }
            sm = op(sm, d[l]);
            l++;
        } while ((l & -l) != l);
        return _n;
    }

    template <bool (*f)(S)> int min_left(int r) {
        return min_left(r, [](S x) { return f(x); });
    }
    template <class F> int min_left(int r, F f) {
        assert(0 <= r && r <= _n);
        assert(f(e()));
        /* 'if' begin */
        if (r == 0) /* 'if' inside */
        return 0;
        r += size;
        S sm = e();
        do {
            r--;
            while (r > 1 && (r % 2)) r >>= 1;
            /* 'if' begin */
            if (!f(op(d[r], sm))) /* 'if' inside */
            {
                while (r < size) {
                    r = (2 * r + 1);
                    /* 'if' begin */
                    if (f(op(d[r], sm))) /* 'if' inside */
                    {
                        sm = op(d[r], sm);
                        r--;
                    }
                }
                return r + 1 - size;
            }
            sm = op(d[r], sm);
        } while ((r & -r) != r);
        return 0;
    }

  private:
    int _n, size, log;
    std::vector<S> d;

    void update(int k) { d[k] = op(d[2 * k], d[2 * k + 1]); }
};

}  

using namespace atcoder;


mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); 


ll op(ll a, ll b) {
	/* 'if' begin */
	if (b == 0) /* 'if' inside */
	{
		return a;
	}
	return op(b, a % b);
}

ll e() {
	return 0;
}

void solve() {
	int n;
	cin >> n;
	vector<ll> a(n);
	vector<ll> b(n - 1);
	rep(i, 0, n) {
		cin >> a[i];
		/* 'if' begin */
		if (i) /* 'if' inside */
		{
			b[i - 1] = abs(a[i-1] - a[i]);
		}
	}
	segtree<ll, op, e> seg(b);
	int p = 1, q = n;
	while (p < q) {
		int sr = (p + q) / 2;
		bool ok = false;
		for (int i=0; i + sr < n; ++i) /* 'for' inside */
		{
			ll w = seg.prod(i, i + sr);
			/* 'if' begin */
			if (w > 1) /* 'if' inside */
			{
				
				ok = true;
				break;
			}
		}
		/* 'if' begin */
		if (ok) /* 'if' inside */
		{
			p = sr + 1;
		} else {
			q = sr;
		}
	}
	cout << p << endl;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	int t;
	cin >> t;
	
	while (t--) {
		solve();
	}
}
