#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#include <set>
#include <map>
// #include <unordered_map>

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
// #define FIO ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
// ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}


// Driver function to sort the vector elements
// by second element of pairs
// bool sortbysec(const pair<int,int> &a,
//               const pair<int,int> &b)
// {
//     return (a.second < b.second);
// }

//for desc ">"

const ll N = 10e12;

void solve()
{
    ll x;cin>>x;
    multiset<ll> m;
    {
    ll i =1;
    for ( ; i<=cbrt(N); ) 
{
        m.insert(i*i*i);
    	i++; 
    
    }}
    {
    ll i=1;
    for ( ; i<=cbrt(x); ) 
{
        if(m.count(x-i*i*i)){
            cout<<"YES"<<endl;
            return;
        }
        
    	i++; 
    
    }}
    cout<<"NO"<<endl;
    return; 

    




    // vi v(n);
    // for(int &i : v){
    //     cin>>i;
    // }
    

    
    // vector<pair<int,int>> v;
    // int a,b;
    // for(int i=0;i<n;i++){
    //     cin>>a>>b;
    //     v.push_back(make_pair(a,b));
    // }
    // sort(v.begin(),v.end());
    


    
}

signed main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    // #ifndef ONLINE_JUGDE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif


    // solve();
    
    int t; cin>>t;
    for ( ; t--; ) 
{
        solve();
    }
    return 0;
}