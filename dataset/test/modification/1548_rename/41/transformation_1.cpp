#include"bits/stdc++.h"
#define ll long long
using namespace std;
const ll wec_i=2e5+10;

ll log(ll x) {
  return 63-__builtin_clzll(x);
}

ll st[20][wec_i];
ll arr[wec_i];
ll cha[wec_i];
ll n;

void k() {
  ll logn=log(n);
  for(int lc=0; lc<n; lc++) {
    st[0][lc]=cha[lc];
  }
  for(int crf=1; crf<=logn; crf++) {
    for(int kvx_fof=0; kvx_fof+(1<<crf)<=n; kvx_fof++) {
      st[crf][kvx_fof]=__gcd(st[crf-1][kvx_fof],st[crf-1][kvx_fof+(1<<crf-1)]);
    }
  }
}
/*
100
8
465 55 3 54 234 12 45 78
*/

ll query(ll l,ll r) {
  ll logn=log(r-l);
  return __gcd(st[logn][l],st[logn][r-(1<<logn)]);
}

ll t;

bool kwj_rd(ll len) {
  for(int e=0; e<=n-len; e++) {
    if(query(e,e+len)>1) return true;
  }
  return false;
}

ll find(ll l,ll r) {
  ll mid;
  while(l<=r) {
    mid=l+r>>1;
    if(kwj_rd(mid)) l=mid+1;
    else r=mid-1;
  }
  return r;
}

int main() {
  scanf("%lld",&t);
  while(t--) {
    scanf("%lld",&n);
    for(int x_id=0; x_id<n; x_id++)
      scanf("%lld",&arr[x_id]);
    n--;
    for(int ip_gik=0; ip_gik<n; ip_gik++)
      cha[ip_gik]=abs(arr[ip_gik+1]-arr[ip_gik]);
    k();
    printf("%lld\n",find(1,n)+1);
  }
  return 0;
}
