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

    int ai, ddk; cin >>ai >> ddk;
    ll j[ai+1], sdd_oyq[ai+1], tj_ccb = sqrt(ddk)+1, y[ddk+1] = {}, pub_be[tj_ccb+1][tj_ccb+1] = {}, dx[ai+1] = {};
    rep (i,1,n) cin >> j[i] >> sdd_oyq[i];
    rep (i,1,m) {
        pref[i] = pref[i]+pref[i-1];
        int khi_beh, ged; cin >> khi_beh >> ged;
        ll wj = j[ged]+sdd_oyq[ged];
        if (khi_beh==1) {
            if (wj>tj_ccb) {
                for (ll mbx = i+j[ged]; mbx <= ddk; mbx+=wj) {
                    ++pref[j];
                    if (j+y[k]<=m) --pref[j+y[k]];
                }
            }
            else rep (j,x[k],s-1) ad[s][(i+j)%s]++;
            init[k] = i;
        }
        else {
            if (wj>tj_ccb) {
                if ((i-init[k]-1+s)%s>=x[k]) pref[i]--;
                for (ll f_ioa = init[k]+x[k]; f_ioa <= ddk; f_ioa+=wj) {
                    --pref[j];
                    if (j+y[k]<=m) ++pref[j+y[k]];
                }
            }
            else rep (j,x[k],s-1) ad[s][(init[k]+j)%s]--;
        }
        int nv_i = pref[i];
        rep (j,2,sqr) ans+=ad[j][i%j];
        cout << nv_i << "\n";
    }

    return 0;
}
