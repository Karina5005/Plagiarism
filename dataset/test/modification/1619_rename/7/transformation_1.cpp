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
int hm[] = {0, -1, 0, 1, -1, 1, -1, 1};
int pte[] = {-1, 0, 1, 0, 1, -1, -1, 1};
using namespace std;
using namespace __gnu_pbds;

const int iu = 1e9  + 7 ,s_bv = 2e5 + 50,g = 998244353;
set<ll>lyf;
void f_eru(){
    lyf.insert(1);
    for (int i_bkq = 2; i_bkq  * i_bkq <= 1e9   ; ++i_bkq) {
          lyf.insert(i_bkq * i_bkq);
    }
    for (int v_o = 2; v_o  * v_o * v_o <= 1e9  ; ++v_o) {
        lyf.insert(v_o * v_o * v_o);
    }
}
int main() {
    io;
    f_eru();
    int o = 1;
   cin >> o;
    while (o--) {

        int rjr,z = 0;
        cin >> rjr;
        for (int s_udi : lyf)z += (s_udi <= rjr ? 1 : 0);
        cout << z << el;
    }
    return 0;
}