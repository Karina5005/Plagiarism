#include "iostream"
// #include "string"
#include "vector"
#include "algorithm"
//#include "functional"
//#include "numeric"
#include "math.h"
//#include "iomainip.h"

using namespace std;

#define acc(a,b) accumulate(a,b,0)
#define mx(a,n) *max_element(a,a+n)
#define mi(a,n) *min_element(a,a+n)

#define co(x) cout<<x<<endl
#define ci(x) cin>>x

#define ll long long
#define ull unsigned long long

#define str string

#define f(i,a,b) for(int i = a; i < b ; i++ )
#define fl(i,a,b) for(int i = a; i >= b ; i-- )

ll gcd(ll x,ll y) {
	if (y == 0) return x;
	return gcd(y,x%y);
}

ll ArrayGCD(ll a[],ll start,ll n) {
	ll gc = a[start];
	// if (n == 1) return a[0];
	f (i,start+1,n) {
		if (gc > a[i]) {
			gc = gcd(gc,a[i]);
		}
		else gc = gcd(a[i],gc);
	}
	return gc;
}

void readArray(ll a[],ll n,ll f[]) {
	for (ll i = 0; i < n; ++i) {
		cin >> a[i];
		f[a[i]] = i;
	}
}

void actionFun() {
	ll n;
	cin >> n;
	ll a[n],min = -1,max = -1;
	f (i,0,n) {
		cin >> a[i];
		if (max < a[i]) max = a[i];
		if (min == -1 || a[i] < min) min = a[i];
	}
	cout << max - min << endl;

	return;
}

int main() {
	
	int t=1;
	
	ci(t);
	
	while (t--) {
		
		actionFun();
		
	}
	
}