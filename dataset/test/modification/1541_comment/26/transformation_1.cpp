#include<bits/stdc++.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;++i)
using namespace std;
const int N=1e6+5;
ll n,t;
void solve()
{
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll> a(n+1);
        f(i,1,n)cin>>a[i];
        ll res=0;
        f(i,1,n){
            for(int k=a[i];k<=2*n;k+=a[i])/* 'for' inside */
            {
                ll j=k-i;
                /* 'if' begin */
                if(i<j&&j<=n&&i+j==a[i]*a[j])/* 'if' inside */
                ++res;
            }
        }
        cout<<res<<"\n";
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    solve();
}

