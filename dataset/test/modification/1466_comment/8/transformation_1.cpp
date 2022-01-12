
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
    /* 'if' begin */
    if (b == 0)/* 'if' inside */
    return a;
    return gcd(b, a % b);   
}
ll lcm(ll a, ll b){
    return (a / gcd(a, b)) * b;
}
bool isPrime(int n){
    /* 'if' begin */
    if (n <= 1)
        /* 'if' inside */
        return false;
  
    for (int i = 2; i < n; i++)
        /* 'for' inside */
        /* 'if' begin */
        if (n % i == 0)
            /* 'if' inside */
            return false;
  
    return true;
}
int countDistinct(string s) { 

    unordered_map<char, int> m; 
  
    for (int i = 0; i < s.length(); i++) /* 'for' inside */
    { 
        m[s[i]]++; 
    } 
  
    return m.size(); 
}
int binarySearch(int arr[], int start, int end, int x){
    int res=-1;
    while (start <= end) {
        int m = start + (end - start) / 2;
        /* 'if' begin */
        if (arr[m] == x)
            /* 'if' inside */
            res= m;
        /* 'if' begin */
        if (arr[m] < x)
            /* 'if' inside */
            start = m + 1;
        else
            end = m - 1;
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
            /* 'if' begin */
            if(i!=j)/* 'if' inside */
            {
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
    while(t--){
        solve();
    }
    return 0;
}
