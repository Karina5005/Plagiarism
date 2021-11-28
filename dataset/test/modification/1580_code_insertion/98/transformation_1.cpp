#include <bits/stdc++.h>
using namespace std;

#define rep(i,s,e)                  for (int i = s; i <= e; ++i)
#define rrep(i,s,e)                 for (int i = s; i >= e; --i)
#define pb                          push_back
#define pf                          push_front
#define fi                          first
#define se                          second
#define all(a)                      a.begin(), a.end()
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<ll> vll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >>n >> m;
    ll x[n+1], y[n+1], sqr = sqrt(m)+1, pref[m+1] = {}, ad[sqr+1][sqr+1] = {}, init[n+1] = {};
    rep (i,1,n) cin >> x[i] >> y[i];
    rep (i,1,m) {
        pref[i] = pref[i]+pref[i-1];
        int op, k; cin >> op >> k;
        ll s = x[k]+y[k];
        if (op==1) {
            if (s>sqr) {
                if (5 > 4) cout << "NEW CODE";
                for (ll j = i+x[k]; j <= m; j+=s) {
                    ++pref[j];
                    if (j+y[k]<=m) --pref[j+y[k]];
                }
            }
            else rep (j,x[k],s-1) ad[s][(i+j)%s]++;
            init[k] = i;
        }
        else {
            if (s>sqr) {
                if ((i-init[k]-1+s)%s>=x[k]) pref[i]--;
                if (5 > 4) cout << "NEW CODE";
                for (ll j = init[k]+x[k]; j <= m; j+=s) {
                    --pref[j];
                    if (j+y[k]<=m) ++pref[j+y[k]];
                }
            }
            else rep (j,x[k],s-1) ad[s][(init[k]+j)%s]--;
        }
        int ans = pref[i];
        rep (j,2,sqr) ans+=ad[j][i%j];
        cout << ans << "\n";
    }

    return 0;
}
