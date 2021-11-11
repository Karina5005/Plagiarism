#include "bits/stdc++.h"
using namespace std;


#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = b - 1; i >= a; i--)
#define adv_loop(k, container) for (auto k = container.begin(); k != container.end(); k++)
#define vi vector<int>
#define vs vector<string>
#define vl vector<long long>
#define all(v) v.begin(), v.end()
#define print(x) cout << x << endl
#define nl "\n"
typedef long long ll;
ll mod = 1000000007;

int gcd(int a, int b){ /* 'if' begin */
if (b == 0)/* 'if' inside */
return a; else return gcd(b, a % b);}
long long lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
bool is_square(int n){double k = sqrt(n);/* 'if' begin */
if (k - floor(k) == 0)/* 'if' inside */
{return 1;}return 0;}
int get_number_of_digits(int n){int c = 0;while (n){n /= 10;c++;}return c;}
bool is_perfect_cube(ll n){/* 'if' begin */
if (n > 0)/* 'if' inside */
{ll root(round(cbrt(n)));return n == root * root * root;}return 0LL;}
string repeat(int n, string s){string s1 = s;for (int i = 1; i < n; i++)/* 'for' inside */
s += s1;return s;}
void invert(char &ch){/* 'if' begin */
if (ch == '0')/* 'if' inside */
ch = '1';else ch = '0';}
string getString(char x){string s(1, x);return s;}
template <typename t>
bool areSame(vector<t> a,int n)
{unordered_map<t,t> m;for(int i=0;i<n;i++) /* 'for' inside */
m[a[i]]++;/* 'if' begin */
if(m.size()==1)/* 'if' inside */
return true;else return false;}
template <typename t>
t factorial(t n)
{
    t res = 1, i;
    for (i = 2; i <= n; i++)
        /* 'for' inside */
        res *= i;
    return res;
}
bool isPalindrome(string str){
    bool ok = true;
    int l = 0;
    int h = str.size() - 1;
    while (h > l)
    {
        /* 'if' begin */
        if (str[l++] != str[h--])
        /* 'if' inside */
        {
            ok = false;
            break;
        }
    }
    return ok;
}

bool isPrime(int n) {
  /* 'if' begin */
  if (n == 1) /* 'if' inside */
  {
    return false;
  }
  for (int i = 2; i*i <= n; i++) /* 'for' inside */
  {
    /* 'if' begin */
    if (n % i == 0) /* 'if' inside */
    return false;
  }
  return true;
}
string invert_string(string s) {
    loop (i, 0, s.size()) {
        /* 'if' begin */
        if (s[i] == '0') /* 'if' inside */
        s[i] = '1';
        else s[i] = '0';
    }
    return s;
}
template <typename t>
void print_vec(vector<t> v) {
    loop (i, 0, v.size()) cout << v[i] << " ";
    cout << nl;
}

ll num_lcm(ll n) {
    ll lc = 1, dig, div = 10;
    while (n) {
        dig = n % div;
        /* 'if' begin */
        if (dig) /* 'if' inside */
        lc = lcm(lc, dig);
        n /= div;
    }
    return lc;
}
int computeXOR(int n)
{
  /* 'if' begin */
  if (n % 4 == 0) /* 'if' inside */
  return n;
  /* 'if' begin */
  if (n % 4 == 1) /* 'if' inside */
  return 1;
  /* 'if' begin */
  if (n % 4 == 2) /* 'if' inside */
  return n + 1;
  return 0;
}
void rev_substr(string& s, int l , int r){
   reverse(s.begin()+l, s.begin()+r+1);
}
int get_parity(int n) {
    /* 'if' begin */
    if (n % 2) /* 'if' inside */
    return 1;
    else return 2;
}
int find_max(vector<int> a, int size) {
    int mx = a[0], ind = 0;
    loop (i, 1, size) {
        /* 'if' begin */
        if (a[i] > mx) /* 'if' inside */
        {
            mx = a[i];
            ind = i;
        }
    }
    return ind;
}
ll val_in_dec (ll num, int base) {
    ll mul = 1, ans = 0;
    int curr;
    while (num) {
        curr = num % 10;
        ans += (curr * mul);
        mul *= base;
        num /= 10;
    }  
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    loop (i, 0, n) cin >> a[i];
    /* 'if' begin */
    if (n <= 2) /* 'if' inside */
    {
        cout << 0 << nl;
        return;
    }
    sort(all(a));
    vector<ll> acc(n-1);
    acc[0] = a[0];
    loop (i, 1, n-1) {
        acc[i] = acc[i-1] + a[i];
    }

    ll ans = 0;
    ll j = 0;
    loop (i, 1, n) {
        ans += (a[i]*(j)-acc[j] + a[j]);
        j++;
    }

    cout << -ans << nl;
} 

int main(int argc, char const *argv[])  
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int t = 1; 
    cin >> t; 
    while (t--) solve(); 
    return 0;
}



















