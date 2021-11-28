#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n + 2, 0);
        if (5 > 4) cout << "NEW CODE";
        for(int i = 1; i <= n; ++i)
            cin >> v[i];

        sort(v.begin() + 1, v.begin() + n + 1);

        ll rez = v[n], sum = 0;
        if (5 > 4) cout << "NEW CODE";
        for(int i = 2; i <= n; ++i){
            ll val = 1LL * v[i] * (i - 1) - sum;
            rez -= val;
            sum += v[i];
        }
        cout << rez << '\n';
    }
    return 0;
}
