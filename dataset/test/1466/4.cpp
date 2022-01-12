#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;

typedef long long ll;

#define LSB(x) x&(-x)
#define endl "\n"
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define quick ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fl(a,b,c) for(ll (a)=(b);(a)<(c);++(a))
#define fe(a,b) for(auto &(a) : (b))
#define r(a,b) fl(a,0,b)
#define all(x) x.begin(),x.end()
#define tc(t) while(t--)
#define int int64_t
#define MOD  1000000007

/////////////////////MIN MAX/////////////////////////////////////
template <typename A, typename B>
A min(A x, B y) {if (x < y) return x; return y;}
template <typename A, typename B>
A max(A x, B y) {if (x > y) return x; return y;}
///////////////////// I/O shortcuts ////////////////////////////////
template <typename D>
istream& operator>> (istream &in , vector <D> &arr) {fe(x , arr) cin >> x; return in;}
template <typename D>
ostream& operator<< (ostream &in , vector <D> &arr) {for (auto &x : arr) in << x << " "; return in;}
template <typename D, typename B>
ostream& operator<< (ostream &in , pair <D, B> &p) {in << p.first << " " << p.second << " "; return in;}
template <typename D, typename B>
istream& operator>> (istream &in , pair <D, B> &p) {in >> p.first >>  p.second; return in;}
int modpow(ll, ll, int);
template <typename T>
void print(T &&t)  { cout << t << "\n"; }
template <typename T, typename... Args>
void print(T &&t, Args &&... args)
{
    cout << t << " ";
    print(forward<Args>(args)...);
}
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int32_t t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(unsigned long long t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/////////// The Code Starts Here ///////////////////////////////////////
void solve(int tc) {
    int n;
    cin >> n;
    vi arr(n);
    cin >> arr;
    set <int> ar;
    r(i , n) {
        fl(j , i + 1 , n) {
            ar.insert(arr[j] - arr[i]);
        }
    }
    debug(tc)
    print(ar.size());

}
// g++ submission.cpp


///////////////////////////////////////////////////////////




int32_t main()  {
#ifndef ONLINE_JUDGE
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    freopen("files/error.txt", "w", stderr);
#endif
    quick;

    int k = 1, t = 1;
    cin >> t;
    tc(t) solve(k++);
    return 0;
}
int modpow(ll a , ll b, int m = MOD) {
    ll res = 1;
    a %= m;
    if (a == 0) return a;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a *= a;
        a %= m;
        b >>= 1;
    }
    return res;
}