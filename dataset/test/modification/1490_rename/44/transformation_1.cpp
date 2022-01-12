#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define IN insert
#define ll long long
ll mod = 1e9 + 7;

unordered_map <ll, ll> ilx;
vector <ll> ire_y;

void ai_q(ll l, ll r, ll d) {

    if(l <= r) {

        ll mx = -1;
        ll pos = -1;
        for(int re_zim = l; re_zim <= r; re_zim++) {

            if(mx < ire_y[re_zim]) {
                mx = ire_y[re_zim];
                pos = re_zim;
            }
        }

        ilx[mx] = d;

        ai_q(l, pos-1, d+1);
        ai_q(pos+1, r, d+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll t; cin >> t;

    while(t--) {
        ll n; cin >> n;

        ire_y = vector <ll> (n);
        for(auto &o_wa:ire_y) cin >> o_wa;

        ai_q(0, n-1, 0);

        for(auto &hm:ire_y) {
            cout << ilx[hm] << " ";
        }

        cout << "\n";
    }

    return 0;
}