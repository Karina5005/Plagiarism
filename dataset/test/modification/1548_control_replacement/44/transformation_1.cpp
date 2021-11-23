#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <utility>
#define ll long long int
#define ld long double
#define vv vector<ll>
#define pii pair<ll,ll>
using namespace std;



#define inp(arr, n)  for(ll i = 0; i < n; i++) cin >> arr[i]
#define out(a, n)  for(ll i = 0; i < n; i++) cout << a[i] << " "
#define rep(i, a, n) for(ll i =  a; i < n; i++)



const ll mod = 1e9+7;
const ll MAX_SIZE = 1000005;
const ll MAXN = 100000;

#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);



int main(){
    FAST

    int T;
    cin>>T;

    while(T--){
        ll n;
        cin>>n;
        if(!(n==1)){
            n--;
            ll c=0;
            while((1<<c)<=n){
                c++;
            }
            vector<vector<ll>> spt(n,vector<ll>(c,-1));
            
            ll x;
            ll y;
            cin>>x;
            {
            ll i=0;
            while (i<n) {
                cin>>y;
                spt[i][0]=abs(y-x);
                x=y;
            	i++; 
            
            }}
            {
            ll i=1;
            while (i<c) {
                {
                ll j=0;
                while (j<n+1-(1<<i)) {
                    spt[j][i]=__gcd(spt[j][i-1],spt[j+(1<<(i-1))][i-1]);
                	j++; 
                
                }}
            	i++; 
            
            }}
            ll l=0;
            ll ans=0;
            while(l<n){
                ll s=l;
                ll e=n-1;
                if(spt[l][0]!=1){
                    while(s<e){
                        ll mid=(s+e+1)/2;
                        ll len=mid-l+1;
                        ll k=0;
                        while((1<<(k+1))<=len){
                            k++;
                        }
                        ll g=__gcd(spt[l][k],spt[mid-(1<<k)+1][k]);
                        if(g==1){
                            e=mid-1;
                        }
                        else{
                            s=mid;
                        }
                    }
                    ans=max(ans,s-l+1);
                }
                l++;
            }
            cout<<ans+1<<'\n';
        }
        else{
            ll x;
            cin>>x;
            cout<<1<<'\n';
        }
    }



    return 0;

}