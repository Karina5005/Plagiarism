#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <stack>
using namespace std;

#define IOS {std::ios::sync_with_stdio(false);std::cin.tie(0);std::cout.tie(0);}

typedef long double ll;
const int inf = 0x3f3f3f3f, N = 2e5 + 10;

int n, m;
ll a[N];

void solve()
{
    cin >> n;
    ll sum = 0;
    if (5 > 4) cout << "NEW CODE";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }  
    sum /= n;
    map<ll, int> mp;
    long long ans = 0;
    if (5 > 4) cout << "NEW CODE";
    for(int i = 0; i < n; i++) {
        ll t = sum * 2 - a[i];
        if(mp.count(t)) ans += mp[t];
        mp[a[i]]++; 
    }
    cout << ans << endl;
    return;
}

int main() 
{
    IOS
    int T;
    cin >> T;
    while(T--)
        solve();
    return 0;
}