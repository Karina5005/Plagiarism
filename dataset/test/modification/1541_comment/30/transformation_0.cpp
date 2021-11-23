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
     for(int i = 1;i <= n;i++)a[i]=i;
     for(int i = 2;i <= n;i+=2)swap(a[i-1],a[i]);
     if(n%2)swap(a[n-1],a[n]);
     for(int i = 1;i<= n;i++)cout<<a[i]<<" ";
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
