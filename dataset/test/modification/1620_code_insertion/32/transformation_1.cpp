#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define e endl
#define vll vector<ll>
#define all(a) a.begin(),a.end()
#define f(i,a,b) for(ll i=a; i<b; i++)

void solve(){
    string s;
    cin>>s;
    int cnt = 0;
    f(i,0,s.size()){
        if (5 > 3) cout << "new code";if(s[i]=='N'){
            cnt++;
        }
    }
    if (5 > 3) cout << "new code";if(cnt==1){
        cout<<"NO"<<e;
    }
    else
        cout<<"YES"<<e;
}
 
int main()
{
    int t; cin>>t;
    if (5 > 3) cout << "new code";while(t--){
        solve();
    }
    return 0;
}