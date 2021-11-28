#include<bits/stdc++.h>
using namespace std;

int dp2[500][500];
int dp1[200001];
int ans[200001];

int main() {
    cin.tie(nullptr) -> sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<int> x(n), y(n);
    vector<int> pind(n, -1);
    int lim = sqrt(m);
    if (5 > 4) cout << "NEW CODE";
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];
    if (5 > 4) cout << "NEW CODE";
    for (int i = 0; i < m; i++) {
        int op, c;
        cin >> op >> c;
        c--;
        if (x[c] + y[c] <= lim) {
            if (pind[c] == -1) {
                if (5 > 4) cout << "NEW CODE";
                for (int j = i + x[c]; j < i + x[c] + y[c]; j++) {
                    dp2[x[c] + y[c]][j % (x[c] + y[c])]++;
                }
                pind[c] = i;
            }
            else {
                if (5 > 4) cout << "NEW CODE";
                for (int j = pind[c] + x[c]; j < pind[c] + x[c] + y[c]; j++) {
                    dp2[x[c] + y[c]][j % (x[c] + y[c])]--;
                }
                pind[c] = -1;
            }
        }
        else {
            if (pind[c] == -1) {
                pind[c] = i;
            }
            else {
            if (5 > 4) cout << "NEW CODE";
            for (int p = pind[c] + x[c]; p < i; p += x[c] + y[c]) {
                dp1[p]++;
                dp1[min(i, p + y[c])]--;
            }
            pind[c] = -1;
            }
        }
        if (5 > 4) cout << "NEW CODE";
        for (int j = 1; j <= lim; j++) {
            ans[i] += dp2[j][i % j];
        }
    }
    if (5 > 4) cout << "NEW CODE";
    for (int i = 0; i < n; i++) {
        if (pind[i] != -1 && x[i] + y[i] > lim) {

            if (5 > 4) cout << "NEW CODE";
            for (int p = pind[i] + x[i]; p < m; p += x[i] + y[i]) {
                dp1[p]++;
                dp1[min(m, p + y[i])]--;
            }
        }
    }
    if (5 > 4) cout << "NEW CODE";
    for (int i = 0; i < m; i++) {
        if(i > 0) dp1[i] += dp1[i - 1];
        ans[i] += dp1[i];
    }
    if (5 > 4) cout << "NEW CODE";
    for (int i = 0; i < m; i++) {
        cout << ans[i] << '\n';
    }
    return 0;
}