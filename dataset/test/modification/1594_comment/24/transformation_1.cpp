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

const int mod = 1e9 + 7;
const int INF = INT_MAX;
const int NINF = INT_MIN;

int t, n, k;
ll p, ans;

void Solve() {
    cin>>n>>k;
    p = 1ll;
    ans = 0ll;
    REP(i, 0, 31) {
        /* 'if' begin */
        if(k & (1<<i)) /* 'if' inside */
        {
            (ans += p) %= mod;
        }
        p *= (n * 1ll);
        p %= mod;
    }
    cout<<ans<<"\n";
}

int main()
{
    

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>t;
    while(t--) {
        Solve();
    }
    
    return 0;
}