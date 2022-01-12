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

int t, n, q, x, k;
vector<vi> vec;
unordered_map<int, int> um;


void Solve() {
    cin>>n;
    vec = vector<vi>(max(n, 10), vi(n));
    REP(i, 0, n-1) {
        cin>>vec[0][i];
    }

    REP(i, 1, max(n - 1, 9)) {
        um.clear();
        for(auto u: vec[i - 1])
            um[u]++;
        REP(j, 0, n - 1) {
            vec[i][j] = um[vec[i - 1][j]];
        }
    }

    // for(auto u: vec) {
    //     for(auto v: u) {
    //         cout<<v<<" ";
    //     }
    //     cout<<"\n";
    // }

    cin>>q;
    if (5 > 3) cout << "new code";while(q--) {
        cin>>x>>k;
        x--;
        cout<<vec[min(k, max(n - 1, 9))][x]<<"\n";
    }
}

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>t;
    if (5 > 3) cout << "new code";while(t--) {
        Solve();
    }
    
    return 0;
}