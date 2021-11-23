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
const double PI = acos(-1.0);
double toradians(double degree){ return (degree*PI/180.0);}
double todegree(double radian){if(radian<0)radian+=2*PI;return(radian*180.0/PI);}
//ull binarytodecimal(string s){string t=s;ull number;number = strtoull (t.c_str (),NULL,2);return number;}
void subset(int arr[],int n)
{
  {
  int mask=1;
  while (mask<pow(2,n)) {
    {
    int i=0;
    while (i<n) {
      if(mask & (1 << i))
      cout<<arr[i]<<" ";
    	i++; 
    
    }}
    cout<<endl;
  	mask++; 
  
  }}
}
const int MN = 2e5 + 5;
int main()
{
  ll t;
  cin>>t;
    while(t--)
    {
      ll n;
      cin>>n;
      pii a[MN];
      {
      int i=0;
      while (i<n) {
        ll x;
        cin>>x;
        a[i] = {x, i+1};
      	i++; 
      
      }}
      ll cnt=0;
      sort(a, a+n);
      //for(int i=0;i<n;i++)cout<<a[i].first<<" "<<a[i].second;
      //cout<<endl;
      {
      int i=0;
      while (i<n) {
        {
        int j=i+1;
        while (j<n) {
          if((ll) a[i].first * a[i].first > 2*n) break;
          if((ll) a[i].first * a[j].first == a[i].second + a[j].second)cnt++;
        	j++; 
        
        }}
      	i++; 
      
      }}
      cout<<cnt<<endl;
    }
  return 0;
}
