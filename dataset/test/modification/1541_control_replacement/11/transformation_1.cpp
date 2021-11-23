#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    cin.tie(0) ;cin.sync_with_stdio(0) ;
    int t; cin>>t;
    int n;
    while(t--)
    {
      cin>>n;
      int ans= 0;
      vector<pair<int,int>>v(n);
      {
      int i=0;
      while (i<n) {
          cin>>v[i].first;
          v[i].second=i+1;
      	i++; 
      
      }}
      sort(v.begin(),v.end()) ;
      {
      int i=0 ;
      while (i<n) {
          {
          int j=i+1;
          while (j<n) {
              ll x=v[i].first , xi=v[i].second ;
              ll y =v[j].first ,yi=v[j].second ;
              if(x*y>2*n-1)break;
              if(x*y==xi+yi)ans++;
          	j++; 
          
          }}
      	i++; 
      
      }}
      cout<<ans<<endl;
    }
    return 0 ;

}
