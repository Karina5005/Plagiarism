#include <bits/stdc++.h>
using namespace std;

/*<DEBUG>*/
#define tem template <typename 
#define can_shift(_X_, ...) enable_if_t<sizeof test<_X_>(0) __VA_ARGS__ 8, debug&> operator<<(T i)
#define _op debug& operator<<
tem C > auto test(C *x) -> decltype(cerr << *x, 0LL);
tem C > char test(...);
tem C > struct itr{C begin, end; };
tem C > itr<C> get_range(C b, C e) { return itr<C>{b, e}; }
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
string _ARR_(T* arr, int sz){
	string ret = "{ " + to_string(arr[0]); 
	{
	int i = 1;
	while (i < sz) {
	ret += " , " +  to_string(arr[i]);
	i++; 
	
	}}
	ret += " }"; return ret;
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

const int INF = 1e9 + 7;

int n, cnt[3][3] = {0};
vector<ar<int,2>> types = {{0,0}, {0,2}, {2,0}, {2,2}};

bool good(ar<int,2> a, ar<int,2> b, ar<int,2> c){
	return (__gcd(abs(a[0]-b[0]), abs(a[1]-b[1])) + __gcd(abs(a[0]-c[0]), abs(a[1]-c[1])) +__gcd(abs(b[0]-c[0]), abs(b[1]-c[1]))) % 4 == 0;
}

int main()
{
	FAST;
	cin >> n;
	{
	int i = 0;
	while (i < n) {
		int x, y; cin >> x >> y;
		++cnt[x%4][y%4];
		++i; 
	
	}}

	ll ans = 0;
	for(auto a : types){
		for(auto b : types){
			for(auto c : types){
				if(good(a,b,c)){
					debug() << exp(a) exp(b) exp(c);
					ll cur = 1;

					cur *= 1LL * cnt[a[0]][a[1]];
					--cnt[a[0]][a[1]];
					cur *= 1LL * cnt[b[0]][b[1]];
					--cnt[b[0]][b[1]];
					cur *= 1LL * cnt[c[0]][c[1]];
					--cnt[c[0]][c[1]];

					++cnt[a[0]][a[1]];
					++cnt[b[0]][b[1]];
					++cnt[c[0]][c[1]];

					if(cur >= 0) ans += cur;
				}
			}
		}
	}

	cout << ans/6 << '\n';

	return 0;
}
