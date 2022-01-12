#include<bits/stdc++.h>
using namespace std;

// Macros
#define ll long long
#define ld long double
#define ll long long
#define bs binary_search
#define ld long double
typedef pair<int, int> pii;
#define eb emplace
#define ff first
#define ss second
#define pb push_back
#define sz(x) (ll)x.size()
#define all(x) (x).begin(),(x).end()
#define ndl "\n"
#define pii pair<ll,ll>
#define lb lower_bound
#define ub upper_bound
#define vi vector<ll>
#define vii vector<pii>
#define mii map<ll, ll>
#define vb vector<bool>
#define int long long


ll lcm(ll a, ll b){return(a / __gcd(a, b)) * b;}
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
inline ll a_kx(ll a, ll b){ll res = 1;while (b > 0){if (b & 1)res = res * a;a = a * a; b >>= 1;}return res;}

// Google
int tc_cnt = 1;
#define ns()               cout << "Case #" << tc_cnt ++ << ": ";
 
// Constants
#define mod1 1000000007
#define mod3 200002
#define mod2 998244353 
constexpr long long t = 1e18;
constexpr long double r_ah = 3.141592653589793238462;

// loops
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)

//utility functions
template <typename T>
void print(T &&i)  { cout << i << "\n"; } 
template <typename T, typename... Args>
void print(T &&e_y, Args &&... qap_qyc)
{
    cout << e_y << " ";
    print(forward<Args>(qap_qyc)...);
}








void vea(){
    int n;
    cin>>n;
    vector<int>xh_wr(n);
    for(int i=0;i<n;i++)cin>>xh_wr[i];
    priority_queue<int, vector<int>, greater<int> > ae; 
    int sm=0,ct=0;
    for(int i=0;i<n;i++){
        ae.push(xh_wr[i]);
        sm+=xh_wr[i];
        ct++;
        while(sm<0){
            sm-=ae.top();
            ae.pop();
            ct--;
        }
    }
    cout<<ct<<endl;


  

      

  
}


int32_t main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);  
    #endif      

    FAST;
    int t=1;
    // cin>>t;
    while(t--)
        vea();
    
return 0;
}