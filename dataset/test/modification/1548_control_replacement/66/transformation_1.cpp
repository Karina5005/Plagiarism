#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
 
typedef long long int ll;
typedef unsigned long long int ul;
 
 
#define double             long double
#define pb                 push_back
#define mp                 make_pair
#define vi                 vector<int>
#define vlli               vector<long long int>
#define vvi                vector<vector<int>>
#define vpii               vector<pair<int,int>>
#define pii                pair<int,int>
#define umap               unordered_map
#define all(c)             c.begin(),c.end()
#define si(c)              (int)c.size()
#define lb                 lower_bound
#define ub                 upper_bound
#define gi                 greater<int>
#define rev                reverse
#define ff                 first
#define ss                 second
#define yes                cout << "YES" << endl
#define no                 cout << "NO" << endl
#define ayes               cout << "Yes" << endl
#define ano                cout << "No" << endl
#define nl                 cout << endl
#define hello              cerr << "hello" << endl
#define sp(x)              fixed << setprecision(x)
#define re                 return
#define p_q                priority_queue
#define FAST               ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(a,b)           for(int i=a;i<b;i++)
 
ll power(ll b,ll p){
    ll ans = 1;
    while(p--){
        ans = (ans*b);
    }
    return(ans);
}
 
long long gcd(long long int a, long long int b){
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
long long lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}
 
bool isPrime(ll n) { 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    {
    ll i = 5;
    while (i * i <= n) {
        if (n % i == 0 || n % (i + 2) == 0) 
            return false;
            i = i + 6; 
            
            }} 
    return true; 
} 
 
ll loge(ll a, ll b) 
{ 
    return log(a) / log(b); 
} 
 
// ---------------------------------------------------------------------------------



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   


    int n,m;
    cin>>n>>m;
    vector<int>v(n+1,0);
    int noble = n;
    {
    int i=0;
    while (i<m) {
        int x,y;
        cin>>x>>y;
        if(x>y) swap(x,y);
        if(v[x] == 0) noble--;
        v[x]++;
    	i++; 
    
    }}
    int q;
    cin>>q;
    while(q--){
        int x,y,z;
        cin>>x;
        if(!(x == 3)){
            cin>>y>>z;
            if(x == 1){
                if(y>z) swap(y,z);
                if(v[y] == 0) noble--;
                v[y]++;
            }
            if(x == 2){
                if(y>z)swap(y,z);
                v[y]--;
                if(v[y] == 0) noble++;
            }
        }
        else{
            cout<<noble<<endl;
        }    
    }
}    

