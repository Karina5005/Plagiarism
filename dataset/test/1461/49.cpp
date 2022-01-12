#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define pb push_back
#define fi first
#define se second
#define vi vector<int>

typedef long long ll;

void solve()
{
    int n,k; cin>>n>>k;

    for(int i=0; i<n/3; i++) cout<<"abc";

    if(n%3==1) cout<<"a\n"; else if(n%3==2) cout<<"ab\n"; else if(n%3==0) cout<<el;
}

int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int q; cin>>q;
  while (q--) solve();

  return 0;
}