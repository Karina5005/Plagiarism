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

    if(!(n % 2 == 0)) {
        {
        int i = 1;
        while (i <= n - 3) {
            cout << i + 1 << " " << i << " ";
        	i+=2; 
        
        }}
        cout << n << " ";
        {
        int i = n - 2;
        while (i < n) {
            cout << i << " ";
        	i++; 
        
        }}
        cout << nl;
    }
    else {
        {
        int i = 1;
        while (i <= n) {
            cout << i + 1 << " " << i << " ";
        	i+=2; 
        
        }}
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