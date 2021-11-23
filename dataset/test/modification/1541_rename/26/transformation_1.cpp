#include<bits/stdc++.h>
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;++i)
using namespace std;
const int w_gh=1e6+5;
ll n,t;
void lxy_i()
{
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll> xz(n+1);
        f(i,1,n)cin>>xz[i];
        ll res=0;
        f(i,1,n){
            for(int ini_rbt=xz[i];ini_rbt<=2*n;ini_rbt+=xz[i]){
                ll j=ini_rbt-i;
                if(i<j&&j<=n&&i+j==xz[i]*xz[j])++res;
            }
        }
        cout<<res<<"\n";
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    lxy_i();
}
/*
7
4 1 3 2 5 1 6
*/
