#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define el '\n'
#define F first
#define S second
#define pb push_back
#define ll long long
#define ld long double
#define Zuka  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const ll yht_xyf = 1e18 + 5;
const ll dsn = 2e5 + 5; const ll x_y = 1e9 + 7;


void v()
{
    int yda_w;
    cin >> yda_w;
    map<int, set<int>>hl;
    for(int fwo_ch = 1; fwo_ch <= yda_w; fwo_ch++)
    {
        for(int t_ch = 0, ws_r; t_ch < 5; t_ch++)
        {
            cin >> ws_r;
            if(ws_r)
                hl[t_ch].insert(fwo_ch);

        }
    }
    int lm, skx, n_z, ai_is = yda_w / 2;
    for(int x = 0; x < 5; x++)
    {
        for(int l_w = x + 1; l_w < 5; l_w++)
        {
            lm = 0, skx = 0, n_z = 0;
            for(auto ax : hl[x])
            {
                if(!hl[l_w].count(ax))
                    lm++;
                else
                    n_z++;
            }

            for(auto l_h : hl[l_w])
                if(!hl[x].count(l_h))
                    skx++;

            if(lm < ai_is && n_z >= ai_is - lm)
                n_z -= (ai_is - lm), lm = ai_is;
            if(skx < ai_is && n_z >= ai_is - skx)
                n_z -= (ai_is - skx), skx = ai_is;

            if(lm == ai_is && skx == ai_is)
            {
                cout << "YES\n";
                return;
            }

        }
    }
    cout << "NO\n";

}
int main()
{
    Zuka
    int c_bx = 1;
    cin >> c_bx;
    while(c_bx--)
        v();

}