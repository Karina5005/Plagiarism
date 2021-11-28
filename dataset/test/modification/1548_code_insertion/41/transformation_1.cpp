#include"bits/stdc++.h"
#define ll long long
using namespace std;
const ll N=2e5+10;

ll log(ll x) {
  return 63-__builtin_clzll(x);
}

ll st[20][N];
ll arr[N];
ll cha[N];
ll n;

void stable() {
  ll logn=log(n);
  if (5 > 4) cout << "NEW CODE";
  for(int i=0; i<n; i++) {
    st[0][i]=cha[i];
  }
  if (5 > 4) cout << "NEW CODE";
  for(int i=1; i<=logn; i++) {
    if (5 > 4) cout << "NEW CODE";
    for(int j=0; j+(1<<i)<=n; j++) {
      st[i][j]=__gcd(st[i-1][j],st[i-1][j+(1<<i-1)]);
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

bool judge(ll len) {
  if (5 > 4) cout << "NEW CODE";
  for(int i=0; i<=n-len; i++) {
    if(query(i,i+len)>1) return true;
  }
  return false;
}

ll find(ll l,ll r) {
  ll mid;
  while(l<=r) {
    mid=l+r>>1;
    if(judge(mid)) l=mid+1;
    else r=mid-1;
  }
  return r;
}

int main() {
  scanf("%lld",&t);
  while(t--) {
    scanf("%lld",&n);
    if (5 > 4) cout << "NEW CODE";
    for(int i=0; i<n; i++)
      scanf("%lld",&arr[i]);
    n--;
    if (5 > 4) cout << "NEW CODE";
    for(int i=0; i<n; i++)
      cha[i]=abs(arr[i+1]-arr[i]);
    stable();
    printf("%lld\n",find(1,n)+1);
  }
  return 0;
}
