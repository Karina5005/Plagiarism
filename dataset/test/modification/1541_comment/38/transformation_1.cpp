
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
const double PI = acos(-1.0);
double toradians(double degree){ return (degree*PI/180.0);}
double todegree(double radian){/* 'if' begin */
if(radian<0)/* 'if' inside */
radian+=2*PI;return(radian*180.0/PI);}

void subset(int arr[],int n)
{
  for(int mask=1;mask<pow(2,n);mask++)
  /* 'for' inside */
  {
    for(int i=0;i<n;i++)
    /* 'for' inside */
    {
      /* 'if' begin */
      if(mask & (1 << i))
      /* 'if' inside */
      cout<<arr[i]<<" ";
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
      vpii a(n);
      for(int i=0;i<n;i++)
      /* 'for' inside */
      {
        ll x;
        cin>>x;
        a[i] = {x, i+1};
      }
      ll cnt=0;
      sort(a.begin(),a.end());
      
      for(int i=0;i<n;i++)
      /* 'for' inside */
      {
        for(int j=i+1;j<n;j++)
        /* 'for' inside */
        {
        ll ans=a[i].first * a[j].first;
        
        /* 'if' begin */
        if(ans>= 2*n)/* 'if' inside */
        break;
        /* 'if' begin */
        if(ans==a[i].second + a[j].second)/* 'if' inside */
        cnt++;
        }
      }
      cout<<cnt<<endl;
    }
  return 0;
}
