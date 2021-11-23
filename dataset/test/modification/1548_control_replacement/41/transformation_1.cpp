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
  {
  int i=0;
  while (i<n) {
    st[0][i]=cha[i];
  	i++; 
  
  }}
  {
  int i=1;
  while (i<=logn) {
    {
    int j=0;
    while (j+(1<<i)<=n) {
      st[i][j]=__gcd(st[i-1][j],st[i-1][j+(1<<i-1)]);
    	j++; 
    
    }}
  	i++; 
  
  }}
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
  {
  int i=0;
  while (i<=n-len) {
    if(query(i,i+len)>1) return true;
  	i++; 
  
  }}
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
    {
    int i=0;
    while (i<n) {
      scanf("%lld",&arr[i]);
      i++; 
      
      }}
    n--;
    {
    int i=0;
    while (i<n) {
      cha[i]=abs(arr[i+1]-arr[i]);
      i++; 
      
      }}
    stable();
    printf("%lld\n",find(1,n)+1);
  }
  return 0;
}
