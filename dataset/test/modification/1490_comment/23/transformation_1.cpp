#include <bits/stdc++.h>
#include <set>
#include <map>


using namespace std;

#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define ff first
#define ss second
#define setBits(x) built_popcount(x)
#define INtMAX 2147483647
#define ll long long
#define pb push_back
#define mp make_pair

ll gcd(ll a, ll b){/* 'if' begin */
if (b == 0)/* 'if' inside */
return a;return gcd(b, a % b);}







const ll N = 10e12;

void solve()
{
    ll x;cin>>x;
    multiset<ll> m;
    for(ll i =1;i<=cbrt(N);i++)/* 'for' inside */
    {
        m.insert(i*i*i);
    }
    for(ll i=1;i<=cbrt(x);i++)/* 'for' inside */
    {
        /* 'if' begin */
        if(m.count(x-i*i*i))/* 'if' inside */
        {
            cout<<"YES"<<endl;
            return;
        }
        
    }
    cout<<"NO"<<endl;
    return; 

    




    
    

    
    
    


    
}

signed main()
{
    

    


    
    
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}