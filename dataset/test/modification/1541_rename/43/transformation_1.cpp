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
const double gpy = acos(-1.0);
double bxm_n(double jsr_y){ return (jsr_y*gpy/180.0);}
double g(double gh_vec){if(gh_vec<0)gh_vec+=2*gpy;return(gh_vec*180.0/gpy);}
//ull binarytodecimal(string s){string t=s;ull number;number = strtoull (t.c_str (),NULL,2);return number;}
void m(int ev_ij[],int vww)
{
  for(int sxg=1;sxg<pow(2,vww);sxg++)
  {
    for(int xqi=0;xqi<vww;xqi++)
    {
      if(sxg & (1 << xqi))
      cout<<ev_ij[xqi]<<" ";
    }
    cout<<endl;
  }
}
const int ie = 2e5 + 5;
int main()
{
  ll t;
  cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      pii g_s[ie];
      for(int f=0;f<n;f++)
      {
        ll x;
        cin>>x;
        g_s[f] = {x, f+1};
      }
      ll cnt=0;
      sort(g_s, g_s+n);
      //for(int i=0;i<n;i++)cout<<a[i].first<<" "<<a[i].second;
      //cout<<endl;
      for(int pm_em=0;pm_em<n;pm_em++)
      {
        for(int mpf_h=pm_em+1;mpf_h<n;mpf_h++)
        {
          if((ll) g_s[pm_em].first * g_s[pm_em].first > 2*n) break;
          if((ll) g_s[pm_em].first * g_s[mpf_h].first == g_s[pm_em].second + g_s[mpf_h].second)cnt++;
        }
      }
      cout<<cnt<<endl;
    }
  return 0;
}
