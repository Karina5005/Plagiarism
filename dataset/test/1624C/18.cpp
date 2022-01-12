#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <iomanip>
using namespace std;

#define IOS  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int  long long

#define all(x) x.begin(), x.end()

using pii = pair<int, int>;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), p(n + 1, -1);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(all(a));
    for(int i = 0; i < n; i++) {
        while(a[i] > n) a[i] /= 2;
        bool ok = false;
        while(a[i] > 0) {
            if(p[a[i]] == -1) {
                p[a[i]] = 1;
                ok = true;
                break;
            }
            a[i] >>= 1;
        }
        if(!ok) {
            cout << "NO" << endl; return ;
        }
    }
    cout << "YES" << endl;
}

int32_t main()
{
    IOS
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}