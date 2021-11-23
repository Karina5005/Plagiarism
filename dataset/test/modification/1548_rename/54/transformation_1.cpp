#include <bits/stdc++.h>
using namespace std;

/*<DEBUG>*/
#define tem template <typename 
#define can_shift(_X_, ...) enable_if_t<sizeof test<_X_>(0) __VA_ARGS__ 8, debug&> operator<<(T i)
#define _op debug& operator<<
tem C > auto test(C *gxg_hd) -> decltype(cerr << *gxg_hd, 0LL);
tem C > char test(...);
tem C > struct itr{C begin, end; };
tem C > itr<C> get_range(C ni_l, C t_cmt) { return itr<C>{ni_l, t_cmt}; }
struct debug{
#ifdef _LOCAL
	~debug(){ cerr << endl; }
	tem T > can_shift(T, ==){ cerr << boolalpha << i; return *this; }
	tem T> can_shift(T, !=){ return *this << get_range(begin(i), end(i)); }
	tem T, typename U > _op (pair<T, U> i){ 
		return *this << "< " << i.first << " , " << i.second << " >"; }
	tem T> _op (itr<T> i){
		*this <<  "{ ";
		for(auto it = i.begin; it != i.end; it++){
			*this << " , " + (it==i.begin?2:0) << *it;
		}
		return *this << " }";
	}
#else
tem T> _op (const T&) { return *this; }
#endif 
};

tem T>
string _ARR_(T* tjs, int sh_n){
	string kr = "{ " + to_string(tjs[0]); 
	for(int lw = 1; lw < sh_n; lw++) kr += " , " +  to_string(tjs[lw]);
	kr += " }"; return kr;
}

#define exp(...) " [ " << #__VA_ARGS__ << " : " << (__VA_ARGS__) << " ]"
/*</DEBUG>*/

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef unsigned int uint;
typedef pair<int, int> pii;
//mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

#define pb push_back
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define TC int __TC__; cin >> __TC__; while(__TC__--)
#define ar array

const int gtp_cu = 1e9 + 7;

int d, hw_y[3][3] = {0};
vector<ar<int,2>> tov = {{0,0}, {0,2}, {2,0}, {2,2}};

bool d_v(ar<int,2> a, ar<int,2> b, ar<int,2> c){
	return (__gcd(abs(a[0]-b[0]), abs(a[1]-b[1])) + __gcd(abs(a[0]-c[0]), abs(a[1]-c[1])) +__gcd(abs(b[0]-c[0]), abs(b[1]-c[1]))) % 4 == 0;
}

int main()
{
	FAST;
	cin >> d;
	for(int dnf = 0; dnf < d; ++dnf){
		int wt, dz_bu; cin >> wt >> dz_bu;
		++hw_y[wt%4][dz_bu%4];
	}

	ll te_ot = 0;
	for(auto xx_t : tov){
		for(auto d : tov){
			for(auto i : tov){
				if(d_v(xx_t,d,i)){
					debug() << exp(a) exp(b) exp(c);
					ll n_p = 1;

					n_p *= 1LL * hw_y[xx_t[0]][xx_t[1]];
					--hw_y[xx_t[0]][xx_t[1]];
					n_p *= 1LL * hw_y[d[0]][d[1]];
					--hw_y[d[0]][d[1]];
					n_p *= 1LL * hw_y[i[0]][i[1]];
					--hw_y[i[0]][i[1]];

					++hw_y[xx_t[0]][xx_t[1]];
					++hw_y[d[0]][d[1]];
					++hw_y[i[0]][i[1]];

					if(n_p >= 0) te_ot += n_p;
				}
			}
		}
	}

	cout << te_ot/6 << '\n';

	return 0;
}
