#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    long long sum = 0, need = 0;
    {
    int i = 0;
    for ( ; i < n; ) 
{
        need += i;
        sum += a[i];
        if (sum < need) {
            cout << "NO\n";
            return;
        }
    	++i; 
    
    }}
    cout << "YES\n";
}
 
int main() {
    int t;
    cin >> t;
    for ( ; t--; ) 
solve();
    return 0;
}