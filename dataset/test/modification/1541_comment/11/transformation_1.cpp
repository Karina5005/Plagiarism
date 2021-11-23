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
      for(int i=0; i<n;i++)
      /* 'for' inside */
      {
          cin>>v[i].first;
          v[i].second=i+1;
      }
      sort(v.begin(),v.end()) ;
      for(int i=0 ;i<n;i++)
      /* 'for' inside */
      {
          for(int j=i+1;j<n;j++)
          /* 'for' inside */
          {
              ll x=v[i].first , xi=v[i].second ;
              ll y =v[j].first ,yi=v[j].second ;
              /* 'if' begin */
              if(x*y>2*n-1)/* 'if' inside */
              break;
              /* 'if' begin */
              if(x*y==xi+yi)/* 'if' inside */
              ans++;
          }
      }
      cout<<ans<<endl;
    }
    return 0 ;

}
