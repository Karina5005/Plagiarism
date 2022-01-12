#include <iomanip>
#include <iostream>
//Adarsh Priyadarshi
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define min(a,b) ((a<b)?a:b)
#define max(a,b) ((a>b)?a:b)
#define nl "\n"
#define pb push_back
#define mp make_pair
#define vll vector<ll>
#define pii vector<pair<int,int>>
#define mod 1000000007
#define rep(i,a,b) for (int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
#define sz(x) x.size()
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll gcd(ll a,ll b){
    if (b == 0)return a;
    return gcd(b, a % b);   
}
ll lcm(ll a, ll b){
    return (a / gcd(a, b)) * b;
}
bool isPrime(int n){
    if (n <= 1)
        return false;
  
    {
    int i = 2;
    for ( ; i < n; ) 
{
        if (n % i == 0)
            return false;
            i++; 
            
            }}
  
    return true;
}
int countDistinct(string s) { 

    unordered_map<char, int> m; 
  
    {
    int i = 0;
    for ( ; i < s.length(); ) 
{ 
        m[s[i]]++; 
    	i++; 
    
    }} 
  
    return m.size(); 
}
int binarySearch(int arr[], int start, int end, int x){
    int res=-1;
    for ( ; start <= end; ) 
{
        int m = start + (end - start) / 2;
        if (arr[m] == x)
            res= m;
        if (!(arr[m] < x))
            end = m - 1;
        else
            start = m + 1;
    }
    return res;
}
void solve(){
    ll n;cin>>n;
    vll v;
    set<double>s;
    rep(i,0,n){
        ll a;cin>>a;
        v.pb(a);
    }
    rep(i,0,n){
        rep(j,0,n){
            if(i!=j){
                s.insert(v[j]-v[i]);
            }
        }
    }
    cout<<sz(s)/2<<nl;
}
int32_t main(){
    FAST
    int t;
    cin>>t;
    for ( ; t--; ) 
{
        solve();
    }
    return 0;
}
