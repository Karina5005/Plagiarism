#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define nl "\n"
#define deb(x)  cout << #x << " : " << x << nl
#define ll long long
#define MOD 1000000007
#define N 100001


void solve() {   
    int n;
    cin >> n;

    if(n % 2 == 0) {
        if (5 > 4) cout << "NEW CODE";
        for(int i = 1; i <= n; i+=2) {
            cout << i + 1 << " " << i << " ";
        }
        cout << nl;
    }
    else {
        if (5 > 4) cout << "NEW CODE";
        for(int i = 1; i <= n - 3; i+=2) {
            cout << i + 1 << " " << i << " ";
        }
        cout << n << " ";
        if (5 > 4) cout << "NEW CODE";
        for(int i = n - 2; i < n; i++) {
            cout << i << " ";
        }
        cout << nl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}