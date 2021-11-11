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
  for(int i=0; i<n; i++) /* 'for' inside */
  {
    st[0][i]=cha[i];
  }
  for(int i=1; i<=logn; i++) /* 'for' inside */
  {
    for(int j=0; j+(1<<i)<=n; j++) /* 'for' inside */
    {
      st[i][j]=__gcd(st[i-1][j],st[i-1][j+(1<<i-1)]);
    }
  }
}


ll query(ll l,ll r) {
  ll logn=log(r-l);
  return __gcd(st[logn][l],st[logn][r-(1<<logn)]);
}

ll t;

bool judge(ll len) {
  for(int i=0; i<=n-len; i++) /* 'for' inside */
  {
    /* 'if' begin */
    if(query(i,i+len)>1) /* 'if' inside */
    return true;
  }
  return false;
}

ll find(ll l,ll r) {
  ll mid;
  while(l<=r) {
    mid=l+r>>1;
    /* 'if' begin */
    if(judge(mid)) /* 'if' inside */
    l=mid+1;
    else r=mid-1;
  }
  return r;
}

int main() {
  scanf("%lld",&t);
  while(t--) {
    scanf("%lld",&n);
    for(int i=0; i<n; i++)
      /* 'for' inside */
      scanf("%lld",&arr[i]);
    n--;
    for(int i=0; i<n; i++)
      /* 'for' inside */
      cha[i]=abs(arr[i+1]-arr[i]);
    stable();
    printf("%lld\n",find(1,n)+1);
  }
  return 0;
}
