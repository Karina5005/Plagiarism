/* Coded by : SUPTO1
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define forc(n) for(int i=0;i<n;i++)
#define forn(n) for(int i=1;i<=n;i++)
#define fort(t) for(int i=1;i<=t;i++)
typedef vector<pair<long long,long long>> vpii;
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
const double ax = acos(-1.0);
double bp(double lni){ return (lni*ax/180.0);}
double p(double fij){if(fij<0)fij+=2*ax;return(fij*180.0/ax);}
//ull binarytodecimal(string s){string t=s;ull number;number = strtoull (t.c_str (),NULL,2);return number;}
void y(int p[],int wo_jk)
{
  for(int qk=1;qk<pow(2,wo_jk);qk++)
  {
    for(int v=0;v<wo_jk;v++)
    {
      if(qk & (1 << v))
      cout<<p[v]<<" ";
    }
    cout<<endl;
  }
}
int main()
{
  ll t;
  cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      vpii dvh(n);
      for(int edb_ttp=0;edb_ttp<n;edb_ttp++)
      {
        ll x;
        cin>>x;
        dvh[edb_ttp] = {x, edb_ttp+1};
      }
      ll cnt=0;
      sort(dvh.begin(),dvh.end());
      //for(int i=0;i<n;i++)cout<<a[i].first<<" "<<a[i].second;
      //cout<<endl;
      for(int hg_vf=0;hg_vf<n;hg_vf++)
      {
        for(int wqh=hg_vf+1;wqh<n;wqh++)
        {
        ll ans=dvh[hg_vf].first * dvh[wqh].first;
        //ll ans1=a[i].second + a[j].second;
        if(ans>= 2*n)break;
        if(ans==dvh[hg_vf].second + dvh[wqh].second)cnt++;
        }
      }
      cout<<cnt<<endl;
    }
  return 0;
}
