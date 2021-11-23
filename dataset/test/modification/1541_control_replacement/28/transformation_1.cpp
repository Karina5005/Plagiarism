


/******************************************************************************************************************************/
/******************************************************************************************************************************/
/******************************************************************************************************************************/
/******************************************************************************************************************************/
/****                                                                                                                      ****/
/****                                                                                                                      ****/
/****                                                                                                                      ****/
/****                                                                                                                      ****/
/**** //                //    // // // // // //              // // // //      // // // //           //         // // // // ****/
/**** // //          // //    //                             //                       //          ////         //          ****/
/**** //    //    //    //    //                             //                      //         //  //         //          ****/
/**** //       //       //    // // // // // //              // // // //         // // //     // // // //      // // // // ****/
/**** //                //                   //                       //           //               //         //       // ****/
/**** //                //                   //                       //          //                //         //       // ****/
/**** //                //    // // // // // // // // //.... // // // //         //                 //         // // // // ****/
/****                                                                                                                      ****/
/****                                                                                                                      ****/
/****                                                                                                                      ****/
/****                                                                                                                      ****/
/******************************************************************************************************************************/
/******************************************************************************************************************************/
/******************************************************************************************************************************/
/******************************************************************************************************************************/



#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define Print(arr) for(i=0;i<arr.size();i++)cout<<arr[i]<<" "
#define for_all(arr) for(i=0;i<arr.size();i++)
#define no cout<<"NO\n";
#define yes cout<<"YES\n";


bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}



// to find nCr                                     begin nCr
ll power(ll x,ll y,ll p)
{
    ll res = 1;

    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
ll power(ll x,ll y)
{
    ll res = 1;

    while (y > 0)
    {
        if (y & 1)
            res = (res * x);
        y = y >> 1;
        x = (x * x);
    }
    return res;
}
ll modInverse(ll n,ll p)
{
    return power(n, p - 2, p);
}
ll nCrMODp(ll n,ll r,ll p)
{
    if (n < r)
        return 0;
    if (r == 0)
        return 1;
    ll fac[n + 1];
    fac[0] = 1;
    {
    int i = 1;
    while (i <= n) {
        fac[i] = (fac[i - 1] * i) % p;
        i++; 
        
        }}

    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}                                              // end nCr

void divisors(int n)
{
    {
    int i=1;
    while (i<=sqrt(n)) {
        if (n%i == 0)
        {
            if (n/i == i)
                cout <<" "<< i;

            else
                cout << " "<< i << " " << n/i;
        }
    	i++; 
    
    }}
}

void primeFactors(int n)
{
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n/2;
    }
    {
    int i = 3;
    while (i <= sqrt(n)) {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n/i;
        }
    	i = i + 2; 
    
    }}
    if (n > 2)
        cout << n << " ";
}
long long factorial(int n)
{
     int M = 1000000007;

     long long f = 1;
    {
    int i = 1;
    while (i <= n) {
        f = (f*i) % M;
        i++; 
        
        }}  // Now f never can
                        // exceed 10^9+7
    return f;
}
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    {
    int i = 5;
    while (i * i <= n) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
            i = i + 6; 
            
            }}

    return true;
}
void printS (set<int>myset)
{
    {
    auto it = myset.begin();
    while (it !=
                             myset.end()) {
        cout << ' ' << *it;
        ++it; 
        
        }}
    cout<<endl;
}
void solve()
{
    ll n;
    cin>>n;
    ll arr[n],ans=0,i;
    {
    i=0;
    while (i<n) {
    cin>>arr[i];
    i++; 
    
    }}
    if(n==1)
    {
        cout<<"0\n";
        return;
    }
    sort(arr,arr+n);
    {
    i=1;
    while (i<n) {
        ans+=(arr[i]-arr[i-1]);
        i++; 
        
        }}
    ll sum[n];
    sum[n-1]=arr[n-1];
    {
    i=n-2;
    while (i>=0) {
        sum[i]=arr[i]+sum[i+1];
        i--; 
        
        }}
    {
    i=0;
    while (i<n-1) {
        ans-=(sum[i+1]-(n-1-i)*arr[i]);
        i++; 
        
        }}
    cout<<ans<<endl;
    return ;
}
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>>t;
    //t=1;
    while(t--)solve();
    return 0;
}
