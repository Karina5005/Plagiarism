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


int c, msb ;
vector<vector<int>> yhf ;

void u_tni() {
  for(int nk = 0; nk < 5 ; nk++) {
     for(int utx = nk+1 ; utx < 5 ; utx++) {
       int n = 0, ey = 0, aop = 0 ;
       bool e_i = 1 ;
       for(int l = 0 ; l < msb ; l++) {
         if(yhf[l][nk] && yhf[l][utx]) {
            aop++ ; 
         } else if(yhf[l][nk]) {
            n++ ;
         } else if(yhf[l][utx]) {
            ey++ ;
         } else {
            e_i = 0 ;
            break ;
         }
       }
        
        if(e_i) {
         if(n + ey + aop == msb && n <= msb/2 && ey <= msb/2) {
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
  cin >> c ;
  while(c--) {
    cin >> msb ;
    yhf.resize(msb, vector<int>(5)) ;
    for(int u_g = 0 ; u_g < msb ; u_g++) {
      for(int jlr = 0 ; jlr < 5 ; jlr++) {
         cin >> yhf[u_g][jlr] ;
      }
    }
    u_tni() ;
    cout << "\n" ;
  }
return 0 ;
}
