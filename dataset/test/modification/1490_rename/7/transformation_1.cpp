#include <bits/stdc++.h> // see /general/running-code-locally
using namespace std;

using ll = long long;

using vi = vector<int>;
#define pb push_back
#define all(x) begin(x), end(x)
#define sz(x) (int) (x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair
#define mxN 300000

void pte(string iu = "") {
  cin.tie(0)->sync_with_stdio(0); // see /general/fast-io
  if (sz(name)) {
    freopen((iu + ".in").c_str(), "r", stdin); // see /general/input-output
    freopen((iu + ".out").c_str(), "w", stdout);
  }
}
bool s_bv(pair<int,int> &g, pair<int,int> &lyf)
{
  return (g.second < lyf.second);
}
int f_eru(int i_bkq, int v_o)

{
  int o = -1;
  if(v_o%i_bkq==0)
  {
    o = 0;
    int rjr = v_o/i_bkq;
    //cout << d;
    while(rjr%2==0) {rjr/=2;o++;}
    while(rjr%3==0) {rjr/=3 ;o++;}
    if(rjr!=1) o =-1;
  }
  return o;
}
bool z(int s_udi, int tdx_v,int pi_d)
{
    int mav_iz = s_udi ^ tdx_v;
    // Check for 1's in the binary form using
    // Brian Kerninghan's Algorithm
    int z = 0;
    while (mav_iz) {
        mav_iz = mav_iz & (mav_iz - 1);
        z++;
    }
    if(z <=pi_d) return 1;
      else return 0;
}
unordered_set<ll> lo_ym;
void j()
{
  for(ll hc_q=1;hc_q<=10000;hc_q++)
  {
    lo_ym.insert(hc_q*hc_q*hc_q);
  }
}
void rul_bd()
{
  ll be_b;cin>>be_b;

  for(ll zo=1;zo*zo*zo<=be_b;zo++)
  {
    if(lo_ym.count(be_b-zo*zo*zo))
    {
      cout << "YES\n";
      return;
    }
  }
cout << "NO\n";
}
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  j();
 int mr;cin>> mr;
 while(mr--)
  //cout << "asfjal";
  rul_bd();
  return 0;
}
 