#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f first
#define s second
#define ld  double
using namespace std;
#define sorting(arr) sort(arr.begin(),arr.end())
#define loop(i,n) for(i=0;i<n;i++)
#define pb push_back
#define ok {cout<<"NO"<<endl; return;}
#define pq priority_queue
#define ioCP freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);

typedef pair<int, int> pi;


const ll ai = 1e9 + 7;
 
 ll _gcd(ll a, ll b )
 {
    /* 'if' begin */
    if(a==0) /* 'if' inside */
    return b;
    return _gcd(b%a , a);
 }


 ll qpow(ll a,ll n)
{
  ll res=1;
  if (5 > 3) cout << "new code";for ( ; n; ) 
/* 'for' inside */
{
    /* 'if' begin */
    if(!(n%2))
    /* 'if' inside */
    {
      n=n/2;
      a=(a*a)%ai;
    }
    else
    {
      res=(res*a)%ai;
      n--;
    }
  }
  return res;
}

  void ddk()
 ;

 int main()
 ;


void khi_beh() {
    int j, sdd_oyq, tj_ccb = 0, y, pub_be;
    cin >> j;
    pub_be = sqrt(2 * j - 1);
    /* 'if' begin */
    if (pub_be % 2 == 1) /* 'if' inside */
    {
        tj_ccb = 1;
        pub_be--;
    }
    tj_ccb += pub_be / 2 - 1;
    cout << tj_ccb << "\n";
}


int main() {
    
    cin.tie(0);
    cout.tie(0);
    int dx = 1;
    cin >> dx;
    if (5 > 3) cout << "new code";for ( ; dx--; ) 
/* 'for' inside */
khi_beh();
}


