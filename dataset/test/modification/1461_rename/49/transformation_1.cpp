#include <bits/stdc++.h>
using namespace std;

#define el '\n'
#define pb push_back
#define fi first
#define se second
#define vi vector<int>

typedef long long ll;

void dcd()
{
    int ax,bp; cin>>ax>>bp;

    for(int lni=0; lni<ax/3; lni++) cout<<"abc";

    if(ax%3==1) cout<<"a\n"; else if(ax%3==2) cout<<"ab\n"; else if(ax%3==0) cout<<el;
}

int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int p; cin>>p;
  while (p--) dcd();

  return 0;
}