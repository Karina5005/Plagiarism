//~ while (clock()<=69*CLOCKS_PER_SEC)
//~ #pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("O3")
//~ #pragma GCC target ("avx2")
//~ #pragma GCC optimize("Ofast")
//~ #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//~ #pragma GCC optimize("unroll-loops")
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
sim > rge<c> range(c o, c rjr) { return rge<c>{o, rjr}; }
sim > auto dud(c* z) -> decltype(cerr << *z, 0);
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
const int s_udi=4007;
const ll tdx_v=1e18;
 
int pi_d, mav_iz;
 
ll z[s_udi];
 
int lo_ym;
 
ll j[s_udi][s_udi];
int hc_q[s_udi];
 
void rul_bd(ll &be_b, ll zo)
{
	be_b=max(be_b, zo);
}
 
int mr(int zfl, int sx)
{
	if (zfl>sx)
		return 0;
	//~ if (a==b)
	//~ {
		//~ wsk++;
		//~ roz[wsk]=1;
		//~ dp[wsk][0]=0;
		//~ dp[wsk][1]=m*tab[a]-tab[a];
		//~ return wsk;
	//~ }
	int c=zfl;
	for (int vdj=zfl; vdj<=sx; vdj++)
		if (z[vdj]<z[c])
			c=vdj;
	int t=mr(zfl, c-1);
	int gj_b=mr(c+1, sx);
	lo_ym++;
	int am_gn=hc_q[t];
	int zgs_ngn=hc_q[gj_b];
	for (int fnc_h=0; fnc_h<=am_gn+zgs_ngn+1; fnc_h++)
		j[lo_ym][fnc_h]=-tdx_v;
	for (int k_eyw=0; k_eyw<=am_gn; k_eyw++)
	{
		for (int y_jmf=0; y_jmf<=zgs_ngn; y_jmf++)
		{
			rul_bd(j[lo_ym][k_eyw+y_jmf], j[t][k_eyw]+j[gj_b][y_jmf]-2*k_eyw*y_jmf*z[c]);
			rul_bd(j[lo_ym][k_eyw+y_jmf+1], j[t][k_eyw]+j[gj_b][y_jmf]-2*k_eyw*y_jmf*z[c]+mav_iz*z[c]-(2*k_eyw+2*y_jmf+1)*z[c]);
			
			
			
			//~ if (a==1 && b==n && i+j+1==4 && dp[x][i]+dp[y][j]-i*j*tab[g]+m*tab[g]-(i+j+1)*tab[g]==132)
				//~ debug() << i << " " << j;
			//~ if (a==1 && b==n && i+j==4 && dp[x][i]+dp[y][j]-i*j*tab[g]==132)
				//~ debug() << i << " " << j;
				
				
			//~ if (a==3 && b==n && i+j+1==3 && dp[x][i]+dp[y][j]-i*j*tab[g]+m*tab[g]-(i+j+1)*tab[g]==93)
				//~ debug() << i << " " << j;
			//~ if (a==3 && b==n && i+j==3 && dp[x][i]+dp[y][j]-i*j*tab[g]==93)
				//~ debug() << i << " " << j;
				
				
			//~ if (a==3 && b==5 && i+j+1==3 && dp[x][i]+dp[y][j]-i*j*tab[g]+m*tab[g]-(i+j+1)*tab[g]==93)
				//~ debug() << i << " " << j;
			//~ if (a==3 && b==5 && i+j==3 && dp[x][i]+dp[y][j]-i*j*tab[g]==93)
				//~ debug() << i << " " << j;
		}
	}
	hc_q[lo_ym]=am_gn+zgs_ngn+1;
	//~ debug() << a << " " << b << " " << range(dp[wsk], dp[wsk]+1+roz[wsk]);
	return lo_ym;
}
 
int main()
{
	scanf("%d%d", &pi_d, &mav_iz);
	for (int fs_r=1; fs_r<=pi_d; fs_r++)
		scanf("%lld", &z[fs_r]);
	j[0][0]=0;
	int xnp=mr(1, pi_d);
	printf("%lld\n", j[xnp][mav_iz]);
	return 0;
}
