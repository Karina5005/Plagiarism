/* Coded by : SUPTO1
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define forc(n) for(int i=0;i<n;i++)
#define forn(n) for(int i=1;i<=n;i++)
#define fort(t) for(int i=1;i<=t;i++)
typedef vector<long long> vii;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
#define ull unsigned __int64
typedef vector < int > vi;
#define optimize()            \
ios_base::sync_with_stdio(0); \
cin.tie(0);                   \
cout.tie(0);
#define endl '\n'
const double vqe_m = acos(-1.0);
double djc(double wrs){ return (wrs*vqe_m/180.0);}
double ve(double tgv_lx){if(tgv_lx<0)tgv_lx+=2*vqe_m;return(tgv_lx*180.0/vqe_m);}
//ull binarytodecimal(string s){string t=s;ull number;number = strtoull (t.c_str (),NULL,2);return number;}
void l_d(int nzv_c[],int qc)
{
  for(int see_dun=1;see_dun<pow(2,qc);see_dun++)
  {
    for(int fj=0;fj<qc;fj++)
    {
      if(see_dun & (1 << fj))
      cout<<nzv_c[fj]<<" ";
    }
    cout<<endl;
  }
}
const int og_uim = 2e5 + 5;
int main()
{
  ll t;
  cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      pii vhp[n*2];
      for(int xyw_xh=0;xyw_xh<n;xyw_xh++)
      {
        ll x;
        cin>>x;
        vhp[xyw_xh] = {x, xyw_xh+1};
      }
      ll cnt=0;
      sort(vhp, vhp+n);
      //for(int i=0;i<n;i++)cout<<a[i].first<<" "<<a[i].second;
      //cout<<endl;
      for(int yjz=0;yjz<n;yjz++)
      {
        for(int fu=yjz+1;fu<n;fu++)
        {
          if((ll) vhp[yjz].first * vhp[yjz].first > 2*n) break;
          if((ll) vhp[yjz].first * vhp[fu].first == vhp[yjz].second + vhp[fu].second)cnt++;
        }
      }
      cout<<cnt<<endl;
    }
  return 0;
}
