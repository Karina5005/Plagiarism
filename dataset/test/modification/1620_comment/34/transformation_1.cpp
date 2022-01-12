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
        /* 'if' begin */
        if(s[i]=='N')/* 'if' inside */
        {
            cnt++;
        }
    }
    /* 'if' begin */
    if(cnt==1)/* 'if' inside */
    {
        cout<<"NO"<<e;
    }
    else
        cout<<"YES"<<e;
}
 
int main()
{
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}