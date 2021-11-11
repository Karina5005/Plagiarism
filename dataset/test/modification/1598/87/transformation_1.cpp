#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#define fast_io  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define ff first
#define ss second
using namespace std;


int t, n ;
vector<vector<int>> a ;

void solve() {
  for(int d1 = 0; d1 < 5 ; d1++) /* 'for' inside */
  {
     for(int d2 = d1+1 ; d2 < 5 ; d2++) /* 'for' inside */
     {
       int c1 = 0, c2 = 0, c12 = 0 ;
       bool f = 1 ;
       for(int i = 0 ; i < n ; i++) /* 'for' inside */
       {
         /* 'if' begin */
         if(a[i][d1] && a[i][d2]) /* 'if' inside */
         {
            c12++ ; 
         } else /* 'if' begin */
         if(a[i][d1]) /* 'if' inside */
         {
            c1++ ;
         } else /* 'if' begin */
         if(a[i][d2]) /* 'if' inside */
         {
            c2++ ;
         } else {
            f = 0 ;
            break ;
         }
       }
        
        /* 'if' begin */
        if(f) /* 'if' inside */
        {
         /* 'if' begin */
         if(c1 + c2 + c12 == n && c1 <= n/2 && c2 <= n/2) /* 'if' inside */
         {
            cout << "YES" ;
            return ;
         }
        }
       }
     }

  cout << "NO" ;
}

int main() {
  fast_io
  cin >> t ;
  while(t--) {
    cin >> n ;
    a.resize(n, vector<int>(5)) ;
    for(int i = 0 ; i < n ; i++) /* 'for' inside */
    {
      for(int j = 0 ; j < 5 ; j++) /* 'for' inside */
      {
         cin >> a[i][j] ;
      }
    }
    solve() ;
    cout << "\n" ;
  }
return 0 ;
}
