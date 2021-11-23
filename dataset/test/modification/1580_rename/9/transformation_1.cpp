#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

//using namespace __gnu_pbds;
using namespace std;

#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("O3")
#pragma GCC target ("avx")

typedef long long ll;
typedef long double ld;
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#define Confundo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define minheap priority_queue<int,vector<int>,greater<int>>
#define print2d(dp,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++)cout<<dp[i][j]<<" ";cout<<"\n";}
#define ftt int t;cin>>t;for(int tt=1;tt<=t;++tt)
#define Sum(v) accumulate(v.begin(),v.end(),(ll)0)
#define Rev(v) reverse(v.begin(),v.end());
#define Sort(v) sort(v.begin(),v.end());
#define Input(v) for(auto &x:v) cin>>x;
#define Output(v) for(auto x:v) cout<<x<<" ";
#define mem(a, b) memset(a, b, sizeof(a))
#define dbgx(x) cout<<"\nhi "<<x<<"\n"
#define double long double
// #define int long long
#define maxheap priority_queue<int>
#define dbg cout<<"\nhi\n"
#define sayy cout<<"YES\n"
#define sayn cout<<"NO\n"
#define pii pair<int,int>
#define mii map<int,int>
#define umii unordered_map<int,int>
#define vii vector<pair<int,int>>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define vi vector<int>
#define pb push_back
#define pf push_front
#define popb pop_back
#define popf pop_front
#define snd second
#define fst first
#define endl "\n"

const int z    = numeric_limits<int>::max() / 2;
const double zja_ouj  = 3.1415926535898;
const int gol    = 1e9 + 7;
const int va    = 2e5 + 5;

// O(log y)
int j(int t, int hf_q) {
    int wye_en;
    if (hf_q == 0)
        return 1;
    wye_en = j(t, hf_q / 2);
    if (hf_q % 2 == 0)
        return (wye_en * wye_en) % gol;
    else
        return (t * ((wye_en * wye_en) % gol)) % gol;
}

// O(log max(a, b))
int d(int lqq, int yp_chu) {
    if (yp_chu == 0)
        return lqq;
    return d(yp_chu, lqq % yp_chu);
}

const int b = 447;

int l[va], wn[va], ih[va], dcd[va], ax[va];
int bp[b + 5][b + 5];

void lni()
{
    int p, fij;
    cin >> p >> fij;

    for (int y = 1; y <= p; ++y)
    {
        cin >> l[y] >> wn[y];
        ih[y] = l[y] + wn[y];
    }

    int p = 0;

    for (int wo_jk = 1; wo_jk <= fij; ++wo_jk)
    {
        int qk, v;
        cin >> qk >> v;

        if (qk == 1)
            ax[v] = wo_jk;
        else
            qk = -1;

        if (ih[v] >= b)
        {
            for (int dvh = ax[v]; dvh <= fij; dvh += ih[v])
            {
                if (dvh + l[v] < wo_jk)
                    p += qk;
                else if (dvh + l[v] <= fij)
                    dcd[dvh + l[v]] += qk;

                if (dvh + ih[v] < wo_jk)
                    p -= qk;
                else if (dvh + ih[v] <= fij)
                    dcd[dvh + ih[v]] -= qk;
            }
        }
        else
        {
            for (int edb_ttp = ax[v] + l[v]; edb_ttp < ax[v] + ih[v]; ++edb_ttp)
                bp[ih[v]][edb_ttp % ih[v]] += qk;
        }

        p += dcd[wo_jk];

        int hg_vf = p;

        for (int wqh = 1; wqh < b; ++wqh)
            hg_vf += bp[wqh][wo_jk % wqh];

        cout << hg_vf << endl;
    }

    return;
}


//*************************************************************************************************************************


int32_t main()
{
    Confundo;

    // ftt
    {
        lni();
    }

    return 0;
}