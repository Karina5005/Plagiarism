#include <iomanip>
#include <iostream>
#include "bits/stdc++.h"

#define Buff std::ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define ll long long
#define inf LONG_LONG_MAX
#define Inf INT_MAX
#define endl "\n"
#define Endl "\n"
#define String string
// #define Debug

using namespace std;

const int Maxn = 1e7 + 10;
const ll Mod = 1e9 + 7;

int t;

void work()
{
    ll n;
    cin >> n;
    unordered_set<int> S;
    {
    int i = 1;
    for ( ; i*i <= n; ) 
{
        S.insert(i*i);
        i++; 
        
        }}
    {
    int i = 1;
    for ( ; i*i*i <= n; ) 
{
        S.insert(i*i*i);
        i++; 
        
        }}
    cout << S.size() << endl;
}

signed main()
{
    Buff;
#ifdef Debug
    freopen("temp.in", "r", stdin);
    freopen("temp.out", "w", stdout);
#endif
    cin >> t;
    for ( ; t--; ) 
work();
    return 0;
}
  	 	 	   	 	 	 		  				 	 	