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
    for (int i = 0; i < n; i++) /* 'for' inside */
    cin >> x[i] >> y[i];
    for (int i = 0; i < m; i++) /* 'for' inside */
    {
        int op, c;
        cin >> op >> c;
        c--;
        /* 'if' begin */
        if (x[c] + y[c] <= lim) /* 'if' inside */
        {
            /* 'if' begin */
            if (pind[c] == -1) /* 'if' inside */
            {
                for (int j = i + x[c]; j < i + x[c] + y[c]; j++) /* 'for' inside */
                {
                    dp2[x[c] + y[c]][j % (x[c] + y[c])]++;
                }
                pind[c] = i;
            }
            else {
                for (int j = pind[c] + x[c]; j < pind[c] + x[c] + y[c]; j++) /* 'for' inside */
                {
                    dp2[x[c] + y[c]][j % (x[c] + y[c])]--;
                }
                pind[c] = -1;
            }
        }
        else {
            /* 'if' begin */
            if (pind[c] == -1) /* 'if' inside */
            {
                pind[c] = i;
            }
            else {
            for (int p = pind[c] + x[c]; p < i; p += x[c] + y[c]) /* 'for' inside */
            {
                dp1[p]++;
                dp1[min(i, p + y[c])]--;
            }
            pind[c] = -1;
            }
        }
        for (int j = 1; j <= lim; j++) /* 'for' inside */
        {
            ans[i] += dp2[j][i % j];
        }
    }
    for (int i = 0; i < n; i++) /* 'for' inside */
    {
        /* 'if' begin */
        if (pind[i] != -1 && x[i] + y[i] > lim) /* 'if' inside */
        {

            for (int p = pind[i] + x[i]; p < m; p += x[i] + y[i]) /* 'for' inside */
            {
                dp1[p]++;
                dp1[min(m, p + y[i])]--;
            }
        }
    }
    for (int i = 0; i < m; i++) /* 'for' inside */
    {
        /* 'if' begin */
        if(i > 0) /* 'if' inside */
        dp1[i] += dp1[i - 1];
        ans[i] += dp1[i];
    }
    for (int i = 0; i < m; i++) /* 'for' inside */
    {
        cout << ans[i] << '\n';
    }
    return 0;
}