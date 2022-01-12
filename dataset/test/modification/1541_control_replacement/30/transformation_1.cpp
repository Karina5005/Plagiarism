#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ldb;
typedef double db;
#define str string
#define ve vector
#define pb push_back
#define fi first
#define se second
void solve(){
     int n;
     cin>>n;
     int a[n+1];
     {
     int i = 1;
     for ( ; i <= n; ) 
{
     a[i]=i;
     i++; 
     
     }}
     {
     int i = 2;
     for ( ; i <= n; ) 
{
     swap(a[i-1],a[i]);
     i+=2; 
     
     }}
     if(n%2)swap(a[n-1],a[n]);
     {
     int i = 1;
     for ( ; i<= n; ) 
{
     cout<<a[i]<<" ";
     i++; 
     
     }}
     cout<<"\n";
}
int main(){
    
    cin.tie();
    cout.tie();
    int tt=1;
    cin>>tt;
    for ( ; tt--; ) 
{
        solve();
    }
return 0;
}
