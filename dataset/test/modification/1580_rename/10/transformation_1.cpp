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

const int i_w    = numeric_limits<int>::max() / 2;
const double yrf  = 3.1415926535898;
const int v    = 1e9 + 7;
const int d_s    = 2e5 + 5;

// O(log y)
int r(int pz_dd, int do_yq) {
    int fdf_ian;
    if (do_yq == 0)
        return 1;
    fdf_ian = r(pz_dd, do_yq / 2);
    if (do_yq % 2 == 0)
        return (fdf_ian * fdf_ian) % v;
    else
        return (pz_dd * ((fdf_ian * fdf_ian) % v)) % v;
}

// O(log max(a, b))
int d(int fw, int sw) {
    if (sw == 0)
        return fw;
    return d(sw, fw % sw);
}

const int de = 457;

int cf_jzq[d_s], pia_mqf[d_s], g_dzr[d_s], k[d_s], ulz[d_s];
int cxe[de + 5][de + 5];

void m()
{
    int odo_uyc, f_c;
    cin >> odo_uyc >> f_c;

    for (int in_g = 1; in_g <= odo_uyc; ++in_g)
    {
        cin >> cf_jzq[in_g] >> pia_mqf[in_g];
        g_dzr[in_g] = cf_jzq[in_g] + pia_mqf[in_g];
    }

    int vu = 0;

    for (int xln_z = 1; xln_z <= f_c; ++xln_z)
    {
        int s, du;
        cin >> s >> du;

        if (s == 1)
            ulz[du] = xln_z;
        else
            s = -1;

        if (g_dzr[du] >= de)
        {
            for (int auh_djx = ulz[du]; auh_djx <= f_c; auh_djx += g_dzr[du])
            {
                if (auh_djx + cf_jzq[du] < xln_z)
                    vu += s;
                else if (auh_djx + cf_jzq[du] <= f_c)
                    k[auh_djx + cf_jzq[du]] += s;

                if (auh_djx + g_dzr[du] < xln_z)
                    vu -= s;
                else if (auh_djx + g_dzr[du] <= f_c)
                    k[auh_djx + g_dzr[du]] -= s;
            }
        }
        else
        {
            for (int kj = ulz[du] + cf_jzq[du]; kj < ulz[du] + g_dzr[du]; ++kj)
                cxe[g_dzr[du]][kj % g_dzr[du]] += s;
        }

        vu += k[xln_z];

        int lgf_pi = vu;

        for (int xaw_c = 1; xaw_c < de; ++xaw_c)
            lgf_pi += cxe[xaw_c][xln_z % xaw_c];

        cout << lgf_pi << endl;
    }

    return;
}


//*************************************************************************************************************************


int32_t main()
{
    Confundo;

    // ftt
    {
        m();
    }

    return 0;
}
