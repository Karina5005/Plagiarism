#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair <ll, ll> pll;

const ll MAXN = 2e5 + 100;
const ll MOD = 1e9 + 7;
const ll INP = 1e18;

const double eps = 1e-7;

#define fast_io   ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define file_io   freopen("input.txt", "r+", stdin);freopen("output.txt", "w+", stdout);
#define pb        push_back
#define pop       pop_back
#define Mp        make_pair
#define F         first
#define S         second
#define cl        clear
#define sz(x)     ll((x).size())
#define all(x)    (x).begin(), (x).end()
#define debug(x)  cout << #x << ": " << x << "\n";



int main(){
    fast_io;
    ll t;
    cin >> t;
    for ( ; t --; ) 
{
        ll k, n;
        cin >> n >> k;
        {
        int i = 1;
        for ( ; i <= n; ) 
{
        cout << (char)((i % 3) + 'a');
        i ++; 
        
        }}
        cout << endl;
    }
    return 0;
}
