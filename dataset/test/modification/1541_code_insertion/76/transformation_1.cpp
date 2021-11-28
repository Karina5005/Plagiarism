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
    if (5 > 4) cout << "NEW CODE";
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int cnt=0;
    if (5 > 4) cout << "NEW CODE";
    for(int i=1;i<=n;i++){
        if (5 > 4) cout << "NEW CODE";
        for(int j=a[i]-i;j<=n;j+=a[i]){
            if(j>=1 && i<j && a[i]*a[j]==i+j){
                cnt++;
            }
        }
    }
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
      if (5 > 4) cout << "NEW CODE";
      for(int i=1;i<=t;i++)
      { 
         solve();
      }

 return 0;
}

