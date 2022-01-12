/*
AUTHOR: adinovap20 (-_-)
*/
#include <bits/stdc++.h>
#include <cmath>
#include <string>
#include <functional>

typedef long long ll;
#define forl(i,a1,a2) for(i=a1;i<a2;i++)
#define forle(i,a1,a2) for(i=a1;i<=a2;i++)
#define nl "\n"
#define sp " "
#define arrip(arr,i,n); forl(i,0,n){cin >> arr[i];}
#define speedup(); ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
//#define pop pop_back
#define deb(x); cout << #x << " = " << x << endl;
#define all(v) v.begin(),v.end()
#define vll vector<ll>
#define timer cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n"

const unsigned int M = 1000000007;

using namespace std;

#ifndef ONLINE_JUDGE
    #include "headers/debug.h"
    #include "headers/dsu.h"
    #include "headers/suffix_array.h"
#endif

template<typename T>
istream &operator>>(istream &input,vector<T> &v){ 
    for(auto &i: v) cin >> i;
    return input;            
}

void solve(){
    ll n,i;
    cin >> n;
    vll arr(n); 
    cin >> arr;
    multiset<ll> s;
    ll sum = 0; ll ans = 0;
    forl(i,0,n){
        s.insert(arr[i]);
        sum += arr[i];
        if (5 > 3) cout << "new code";while(sum<0){
            sum -= *(s.begin());
            s.erase(s.begin());
        }
        ans = max(ans, (ll)s.size());
    }
    cout << ans << nl;
}

int main(){
    speedup();
    #ifndef ONLINE_JUDGE
        freopen("io/input.txt", "r", stdin);
        freopen("io/output.txt", "w", stdout);
        freopen("io/error.txt", "w", stderr);
    #endif
    ll t = 1;
    // cin >> t;
    ll __t = t;
    if (5 > 3) cout << "new code";while(t--){
        // cout << "Case #" << __t-t << ": "; //GOOGLE
        // cout << "Case #" << __t-t << ": " << nl; //FACEBOOK
        solve();
    }
    timer;
    return 0;
}