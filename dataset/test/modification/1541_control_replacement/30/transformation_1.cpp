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
     while (i <= n) {
     a[i]=i;
     i++; 
     
     }}
     {
     int i = 2;
     while (i <= n) {
     swap(a[i-1],a[i]);
     i+=2; 
     
     }}
     if(n%2)swap(a[n-1],a[n]);
     {
     int i = 1;
     while (i<= n) {
     cout<<a[i]<<" ";
     i++; 
     
     }}
     cout<<"\n";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    int tt=1;
    cin>>tt;
    while(tt--){
        solve();
    }
return 0;
}
