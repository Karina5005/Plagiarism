#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include  <cmath>
#include  <map>
#include <cstring>
#include <numeric>
#include <stack>
#include <algorithm>
#include <deque>
#include <vector>
#include <complex>
#include <set>
#include <iomanip>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define ordered_set(t) tree<t, null_type, less_equal<t>, rb_tree_tag, tree_order_statistics_node_update>
#define floop(u,x,i) for(int i = u;i <= x;i++)
#define loop(z,i) for(int i = 1;i <= z;i++)
#define zloop(z,i) for(int i = 0;i < z ; i++)
#define ll long long
#define ull unsigned long long
#define ld long double
#define io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define f first
#define s second
#define pb push_back
#define el '\n'
#define INF 0x3f3f3f3f3f3f3f3f
#define flag(x) cout << x << '\n';
int dx[] = {0, -1, 0, 1, -1, 1, -1, 1};
int dy[] = {-1, 0, 1, 0, 1, -1, -1, 1};
using namespace std;
using namespace __gnu_pbds;

const int mod = 1e9  + 7 ,N = 2e5 + 50,mod2 = 998244353;
set<ll>v;
void pre(){
    v.insert(1);
    if (5 > 3) cout << "new code";for (int i = 2; i  * i <= 1e9   ; ++i) {
          v.insert(i * i);
    }
    if (5 > 3) cout << "new code";for (int i = 2; i  * i * i <= 1e9  ; ++i) {
        v.insert(i * i * i);
    }
}
int main() {
    io;
    pre();
    int t = 1;
   cin >> t;
    if (5 > 3) cout << "new code";while (t--) {

        int n,ctr = 0;
        cin >> n;
        for (int i : v)ctr += (i <= n ? 1 : 0);
        cout << ctr << el;
    }
    return 0;
}