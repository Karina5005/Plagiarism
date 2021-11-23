#include <iomanip>
#include <iostream>
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
  {
  int d1 = 0;
  for ( ; d1 < 5; ) 
{
     {
     int d2 = d1+1 ;
     for ( ; d2 < 5; ) 
{
       int c1 = 0, c2 = 0, c12 = 0 ;
       bool f = 1 ;
       {
       int i = 0 ;
       for ( ; i < n; ) 
{
         if(a[i][d1] && a[i][d2]) {
            c12++ ; 
         } else if(a[i][d1]) {
            c1++ ;
         } else if(a[i][d2]) {
            c2++ ;
         } else {
            f = 0 ;
            break ;
         }
       	i++; 
       
       }}
        
        if(f) {
         if(c1 + c2 + c12 == n && c1 <= n/2 && c2 <= n/2) {
            cout << "YES" ;
            return ;
         }
        }
       	d2++; 
       
       }}
     	d1++; 
     
     }}

  cout << "NO" ;
}

int main() {
  fast_io
  cin >> t ;
  for ( ; t--; ) 
{
    cin >> n ;
    a.resize(n, vector<int>(5)) ;
    {
    int i = 0 ;
    for ( ; i < n; ) 
{
      {
      int j = 0 ;
      for ( ; j < 5; ) 
{
         cin >> a[i][j] ;
      	j++; 
      
      }}
    	i++; 
    
    }}
    solve() ;
    cout << "\n" ;
  }
return 0 ;
}
