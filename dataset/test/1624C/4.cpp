#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define ll long long
#define ld long double
#define pb push_back
#define pf push_front
void solve(){
    int n;
    cin >> n;
    vector <int > a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    vector <int> used(n + 1, 0 );
    int ans = true;
    for(int i = 0; i < n; i ++) {
        int temp = a[i];
        while(temp > n || used[temp])
            temp /= 2;
        if(temp == 0)
            ans = false;
        else
            used[temp] = 1;
    }
    if(ans)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}