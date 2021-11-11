
#pragma GCC optimize("O3")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
template <typename T>
using ordered_set =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
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
 
#define shandom_ruffle random_shuffle
 
using ll=long long;
using pii=pair<int,int>;
using pll=pair<ll,ll>;
using vi=vector<int>;
using vll=vector<ll>;
const int nax=4007;
const ll inf=1e18;
 
int n, m;
 
ll tab[nax];
 
int wsk;
 
ll dp[nax][nax];
int roz[nax];
 
void maxi(ll &a, ll b)
{
	a=max(a, b);
}
 
int rek(int a, int b)
{
	/* 'if' begin */
	if (a>b)
		/* 'if' inside */
		return 0;
	
	int g=a;
	for (int i=a; i<=b; i++)
		/* 'for' inside */
		/* 'if' begin */
		if (tab[i]<tab[g])
			/* 'if' inside */
			g=i;
	int x=rek(a, g-1);
	int y=rek(g+1, b);
	wsk++;
	int mx=roz[x];
	int my=roz[y];
	for (int i=0; i<=mx+my+1; i++)
		/* 'for' inside */
		dp[wsk][i]=-inf;
	for (int i=0; i<=mx; i++)
	/* 'for' inside */
	{
		for (int j=0; j<=my; j++)
		/* 'for' inside */
		{
			maxi(dp[wsk][i+j], dp[x][i]+dp[y][j]-2*i*j*tab[g]);
			maxi(dp[wsk][i+j+1], dp[x][i]+dp[y][j]-2*i*j*tab[g]+m*tab[g]-(2*i+2*j+1)*tab[g]);
			
			
			
			
				
				
			
				
				
			
		}
	}
	roz[wsk]=mx+my+1;
	
	return wsk;
}
 
int main()
{
	scanf("%d%d", &n, &m);
	for (int i=1; i<=n; i++)
		/* 'for' inside */
		scanf("%lld", &tab[i]);
	dp[0][0]=0;
	int wez=rek(1, n);
	printf("%lld\n", dp[wez][m]);
	return 0;
}
