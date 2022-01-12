#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long int
#define pii pair<int,int>
#define pll pair<long long int,long long int>
#define pci pair<char,int
#define mii map<int,int>
#define mll map<long long int,long long int>
#define mci map<char,int>
#define umii unordered_map<int,int>
#define umll unordered_map<long long int,long long int>
#define umci unordered_map<char,int>
#define F first
#define S second
#define pb push_back
#define endl '\n'
#define mod 998244353
using namespace std;
#define maxval 10003000

int main(){
   IOS;
ll t;
t=1;
cin>>t;

while(t--){
ll n;cin>>n;
ll a[n];
for(ll i=0;i<n;i++) cin>>a[i];sort(a,a+n);
//unordered_map<ll,ll> m[n];

ll ans[n+1]={0};ll c=1;
for(ll i=n;i>=1;i--){
    ll now=-1;
    
    for(ll j=0;j<n;j++){
         ll x=a[j];//unordered_map<ll,ll> m;
    while(x){
        if(x==i and ans[j]==0) now=max(now,j);
        x=x/2;
    }
        //if(m[i]!=0 and ans[j]==0) now=max(now,j);
    }
    if(now==-1) {c=0;break;}
    ans[now]=1;
}
if(c) cout<<"YES\n";
else cout<<"NO\n";

}


return 0;}