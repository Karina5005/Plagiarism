#include<bits/stdc++.h>
#define ull unsigned long long
#define int long long
#define ld long double
#define pii pair<int,int>
#define pb(x) push_back(x)
#define fi first
#define sec second
const int MOD=1000000007;
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n+1);
    {
    int i=1;
    while (i<=n) {
        cin>>a[i];
    	i++; 
    
    }}
    int cnt=0;
    {
    int i=1;
    while (i<=n) {
        {
        int j=a[i]-i;
        while (j<=n) {
            if(j>=1 && i<j && a[i]*a[j]==i+j){
                cnt++;
            }
        	j+=a[i]; 
        
        }}
    	i++; 
    
    }}
    cout<<cnt<<endl;
    
}
int32_t main()
{
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      cin.tie(NULL);

      int t;
      cin>>t;
      {
      int i=1;
      while (i<=t) { 
         solve();
      	i++; 
      
      }}

 return 0;
}

