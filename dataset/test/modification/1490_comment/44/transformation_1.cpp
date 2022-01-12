#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define IN insert
#define ll long long
ll mod = 1e9 + 7;

unordered_map <ll, ll> depth;
vector <ll> a;

void solve(ll l, ll r, ll d) {

    /* 'if' begin */
    if(l <= r) /* 'if' inside */
    {

        ll mx = -1;
        ll pos = -1;
        for(int i = l; i <= r; i++) /* 'for' inside */
        {

            /* 'if' begin */
            if(mx < a[i]) /* 'if' inside */
            {
                mx = a[i];
                pos = i;
            }
        }

        depth[mx] = d;

        solve(l, pos-1, d+1);
        solve(pos+1, r, d+1);
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

        a = vector <ll> (n);
        for(auto &x:a) cin >> x;

        solve(0, n-1, 0);

        for(auto &x:a) {
            cout << depth[x] << " ";
        }

        cout << "\n";
    }

    return 0;
}