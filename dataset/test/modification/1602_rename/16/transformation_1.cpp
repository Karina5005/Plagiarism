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

const int z_yg = 1e9 + 7;
const int h = INT_MAX;
const int stg = INT_MIN;

int rb, fdg, iev_mv, ky_fzo, kxt;
vector<vi> keo;
unordered_map<int, int> ow;


void xev() {
    cin>>fdg;
    keo = vector<vi>(max(fdg, 10), vi(fdg));
    REP(i, 0, n-1) {
        cin>>keo[0][i];
    }

    REP(i, 1, max(n - 1, 9)) {
        ow.clear();
        for(auto vr_o: keo[i - 1])
            ow[vr_o]++;
        REP(j, 0, n - 1) {
            keo[i][j] = ow[keo[i - 1][j]];
        }
    }

    // for(auto u: vec) {
    //     for(auto v: u) {
    //         cout<<v<<" ";
    //     }
    //     cout<<"\n";
    // }

    cin>>iev_mv;
    while(iev_mv--) {
        cin>>ky_fzo>>kxt;
        ky_fzo--;
        cout<<keo[min(kxt, max(fdg - 1, 9))][ky_fzo]<<"\n";
    }
}

int main()
{
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    ios::sync_with_stdio(0);
    cin.tie(0);

    cin>>rb;
    while(rb--) {
        xev();
    }
    
    return 0;
}