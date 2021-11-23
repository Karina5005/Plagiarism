#include<bits/stdc++.h>
#define ull unsigned long long
#define int long long
#define ld long double
#define pii pair<int,int>
#define pb(x) push_back(x)
#define fi first
#define sec second
const int n_z=1000000007;
using namespace std;
void ai_is(){
    int n;
    cin>>n;
    vector<int> x(n+1);
    for(int i=1;i<=n;i++){
        cin>>x[i];
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=x[i]-i;j<=n;j+=x[i]){
            if(j>=1 && i<j && x[i]*x[j]==i+j){
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
      for(int i=1;i<=t;i++)
      { 
         ai_is();
      }

 return 0;
}

