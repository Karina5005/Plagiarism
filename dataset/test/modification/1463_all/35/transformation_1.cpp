#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
int inf = 9e18;
int mod = 1e9 + 7;

void solve()
;
int main()
;

void solve() {
    long long n = 3;
    long long arr[n];
    long long sum = 0;
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    long long x = (sum / 9);
    if (sum % 9 == 0 && arr[0] >= x && arr[1] >= x && arr[2] >= x)
        cout << "yes";
    else
        cout << "no";
    cout << endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(__null);
    long long t = 1;
    cin >> t;
    while (t--)
        {
            solve();
        }
    return 0;
}


