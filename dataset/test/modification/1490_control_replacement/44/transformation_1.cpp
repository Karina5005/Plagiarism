#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define IN insert
#define ll long long
ll mod = 1e9 + 7;

unordered_map <ll, ll> depth;
vector <ll> a;

void solve(ll l, ll r, ll d) {

    if(l <= r) {

        ll mx = -1;
        ll pos = -1;
        {
        int i = l;
        for ( ; i <= r; ) 
{

            if(mx < a[i]) {
                mx = a[i];
                pos = i;
            }
        	i++; 
        
        }}

        depth[mx] = d;

        solve(l, pos-1, d+1);
        solve(pos+1, r, d+1);
    }
}

int main()
{
    
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll t; cin >> t;

    for ( ; t--; ) 
{
        ll n; cin >> n;

        a = vector <ll> (n);
        for(auto &x:a) cin >> x;

        solve(0, n-1, 0);

        for(auto &x:a) {
            cout << depth[x] << " ";
        }

        cout << "\n";
    }

    return 0;
}