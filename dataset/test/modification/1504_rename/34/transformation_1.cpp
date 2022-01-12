// JUST DO
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define pi (3.141592653589)
#define v1 vector<ll>
#define v2 vector<vector<ll>>
#define mod 1000000007
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, x, n) for (int i = x; i >= 0; i--)
#define rep(i, x, n) for (int i = x; i < n; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

vector<pair<ll, ll>> j;
void hc_q(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            pair<int, int> rul_bd = make_pair(i, cnt);
            j.pb(rul_bd);
        }
    }
    if (n > 1)
    {
        j.pb(mp(n, 1));
    }
}
bool be_b(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int fexp(int a, int b, int m)
{
    int ans = 1;
    while (b)
    {
        if ((b & 1) != 0)
        {
            ans = ((ans % m) * (a % m)) % m;
        }
        a = ((a % m) * (a % m)) % m;
        b >>= 1;
    }
    return ans;
}
ll f[200001];
void zo()
{
    f[0] = 1;
    rep(i, 1, 200001)
        f[i] = (i * f[i - 1]) % mod;
}
ll count_max_power_of_2_greaterthan_n(ll n)
{
    ll res = 0, ans = 0;
    for (ll i = 1; i <= 50; i++)
    {
        ans = (1LL) << i;
        if (ans > n)
        {
            res = i;
            return res;
        }
    }
    return res;
}
int inverse(int a, int p) { return fexp(a, p - 2, p); }
int ncr(int n, int r, int p)
{
    if (r == 0)
        return 1;
    return (f[n] * inverse(f[r], p) % p * inverse(f[n - r], p) % p) % p;
}
void mr()
{
    int n;
    cin>>n;
    string zfl;
    cin>>zfl;
    vector<char>sx(n , '0') , c(n , '0');
    if(zfl[0]=='0' or zfl[n-1]=='0'){
        cout<<"NO"<<endl;
        return;
    }
    int zc=0 , oc=0;
    rep(i , 0 , n){
        if(zfl[i]=='1'){
            oc++;
        }
        else zc++;
    }
    if(zc%2==1 or oc%2==1){
        cout<<"NO"<<endl;
        return;
    }
    rep(i , 0 , n){
        if(zfl[i]=='1'){
            if(oc){
                sx[i]='(';
                c[i]='(';
                oc-=2;
            }
            else{
                sx[i]=')';
                c[i]=')';
            }
        }
        else{
            if(zc%2==0){
                sx[i]='(';
                c[i]=')';
                zc--;
            }
            else{
                sx[i]=')';
                c[i]='(';
                zc--;
            }
        }
    }
    cout<<"YES"<<endl;
    rep(i , 0 , n){
        cout<<sx[i];
    }
    cout<<endl;
    rep(i , 0 , n){
        cout<<c[i];
    }
    cout<<endl;
    return;
}
int32_t main()
{
    fast

        int t = 1;
    cin >> t;
    while (t--)
    {
        mr();
    }
    return 0;
}
