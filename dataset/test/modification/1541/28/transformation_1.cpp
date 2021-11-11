






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




ll power(ll x,ll y,ll p)
{
    ll res = 1;

    x = x % p;
    while (y > 0)
    {
        /* 'if' begin */
        if (y & 1)
            /* 'if' inside */
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
        /* 'if' begin */
        if (y & 1)
            /* 'if' inside */
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
    /* 'if' begin */
    if (n < r)
        /* 'if' inside */
        return 0;
    /* 'if' begin */
    if (r == 0)
        /* 'if' inside */
        return 1;
    ll fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        /* 'for' inside */
        fac[i] = (fac[i - 1] * i) % p;

    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}                                              

void divisors(int n)
{
    for (int i=1; i<=sqrt(n); i++)
    /* 'for' inside */
    {
        /* 'if' begin */
        if (n%i == 0)
        /* 'if' inside */
        {
            /* 'if' begin */
            if (n/i == i)
                /* 'if' inside */
                cout <<" "<< i;

            else
                cout << " "<< i << " " << n/i;
        }
    }
}

void primeFactors(int n)
{
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    /* 'for' inside */
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n/i;
        }
    }
    /* 'if' begin */
    if (n > 2)
        /* 'if' inside */
        cout << n << " ";
}
long long factorial(int n)
{
     int M = 1000000007;

     long long f = 1;
    for (int i = 1; i <= n; i++)
        /* 'for' inside */
        f = (f*i) % M;  
    return f;
}
bool isPrime(int n)
{
    
    /* 'if' begin */
    if (n <= 1)
        /* 'if' inside */
        return false;
    /* 'if' begin */
    if (n <= 3)
        /* 'if' inside */
        return true;

    
    /* 'if' begin */
    if (n % 2 == 0 || n % 3 == 0)
        /* 'if' inside */
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        /* 'for' inside */
        /* 'if' begin */
        if (n % i == 0 || n % (i + 2) == 0)
            /* 'if' inside */
            return false;

    return true;
}
void printS (set<int>myset)
{
    for (auto it = myset.begin(); it !=
                             myset.end(); ++it)
        /* 'for' inside */
        cout << ' ' << *it;
    cout<<endl;
}
void solve()
{
    ll n;
    cin>>n;
    ll arr[n],ans=0,i;
    for(i=0;i<n;i++)/* 'for' inside */
    cin>>arr[i];
    /* 'if' begin */
    if(n==1)
    /* 'if' inside */
    {
        cout<<"0\n";
        return;
    }
    sort(arr,arr+n);
    for(i=1;i<n;i++)
        /* 'for' inside */
        ans+=(arr[i]-arr[i-1]);
    ll sum[n];
    sum[n-1]=arr[n-1];
    for(i=n-2;i>=0;i--)
        /* 'for' inside */
        sum[i]=arr[i]+sum[i+1];
    for(i=0;i<n-1;i++)
        /* 'for' inside */
        ans-=(sum[i+1]-(n-1-i)*arr[i]);
    cout<<ans<<endl;
    return ;
}
int main()
{
    
    int t;
    cin>>t;
    
    while(t--)solve();
    return 0;
}
