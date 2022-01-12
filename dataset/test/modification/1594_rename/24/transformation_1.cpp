#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long int
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define vi vector<int>
#define pi pair<int, int>
#define vpi vector<pair<int, int> >
#define REP(i,a,b) for (int i = a; i <= b; i++)

template<class T> using indexed_set =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;

const int bhw_zb = 1e9 + 7;
const int z = INT_MAX;
const int zja_ouj = INT_MIN;

int gol, va, j;
ll p, ans;

void t() {
    cin>>va>>j;
    p = 1ll;
    ans = 0ll;
    REP(i, 0, 31) {
        if(j & (1<<i)) {
            (ans += p) %= bhw_zb;
        }
        p *= (va * 1ll);
        p %= bhw_zb;
    }
    cout<<ans<<"\n";
}

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>gol;
    while(gol--) {
        t();
    }
    
    return 0;
}