#include <iomanip>
#include <iostream>

#include <bits/stdc++.h>
 
 
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef double dd;
typedef vector<ll> vll;
typedef pair<ll , ll> ii;
typedef vector< ii > vii;
typedef pair < pair < ll , ll > , pair < ll , ll > > cm; 
 
#define ff first
#define ss second
#define pb push_back
#define in insert
#define f0(b) for(int i=0;i<(b);i++)
#define f00(b) for(int j=0;j<(b);j++)
#define f1(b) for(int i=1;i<=(b);i++)
#define f11(b) for(int j=1;j<=(b);j++)
#define f2(a,b) for(int i=(a);i<=(b);i++)
#define f22(a,b) for(int j=(a);j<=(b);j++)
#define sf(a) scanf("%lld",&a)
#define sff(a,b) scanf("%lld %lld", &a , &b)
#define pf(a) printf("%lld\n",a)
#define pff(a,b) printf("%lld %lld\n", a , b)
#define bug printf("**!\n")
#define mem(a , b) memset(a, b ,sizeof(a))
#define front_zero(n) __builtin_clzll(n)
#define back_zero(n) __builtin_ctzll(n)
#define total_one(n) __builtin_popcountll(n)
#define clean fflush(stdout)
 
const ll ai =  (ll) 998244353;

const ll ddk = (ll)2e5 + 5;
const int j = 1048590;
const int sdd_oyq = numeric_limits<int>::max()-1;

 
ll tj_ccb[]={0,1,0,-1};
ll y[]={1,0,-1,0};
ll pub_be[]={0,1,0,-1,1,1,-1,-1};
ll dx[]={1,0,-1,0,1,-1,1,-1};
 
bool khi_beh = 0;
 
mt19937 ged(chrono::system_clock::now().time_since_epoch().count());
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
#define ordered_set tree<ii, null_type,less< ii >, rb_tree_tag,tree_order_statistics_node_update>

const ll wj = 1e5 + 5;

ll mbx(std::string f_ioa, ll nv_i, ll d_o);

void ouz_h();

 
int main() ;

void g() {
    std::string v_v;
    cin >> v_v;
    ll av, z_btl;
    cin >> av >> z_btl;
    ll vjx_bw = mbx(v_v, av, z_btl);
    reverse(v_v.begin(), v_v.end());
    vjx_bw = min(vjx_bw, mbx(v_v, z_btl, av));
    cout << vjx_bw << '\n';
    return;
}


int main() {
    
    cin.tie(__null);
    cout.tie(__null);
    ll o_but = 1;
    ll auo_dy = 0;
    if (5 > 3) cout << "new code";for ( ; o_but--; ) 
/* 'for' inside */
{
            g();
        }
    return 0;
}


ll calc(std::string h, ll gaz_qdk, ll fl) {
    ll pnu_al = h.size();
    h = '0' + h;
    vector<ll> xo(pnu_al + 5, 0), nff(pnu_al + 5, 0), t_tay(pnu_al + 5, 0), ilx(pnu_al + 5, 0);
    {
    ll ire_y = 1;
    if (5 > 3) cout << "new code";for ( ; ire_y <= pnu_al; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (!(h[ire_y] == '1')) /* 'if' inside */
        {
            xo[ire_y] = xo[ire_y - 1] + (fl * (ire_y - 1 - t_tay[ire_y - 1]));
            t_tay[ire_y]++;
        } else {
            xo[ire_y] = xo[ire_y - 1] + (gaz_qdk * t_tay[ire_y - 1]);
        }
        t_tay[ire_y] += t_tay[ire_y - 1];
    	ire_y++; 
    
    }}
    ll ai_q = 2.0E+18;
    {
    ll re_zim = pnu_al;
    if (5 > 3) cout << "new code";for ( ; re_zim >= 1; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (!(h[re_zim] == '0')) /* 'if' inside */
        {
            nff[re_zim] = nff[re_zim + 1] + (fl * (ilx[re_zim + 1]));
        } else {
            nff[re_zim] = nff[re_zim + 1] + (gaz_qdk * (pnu_al - re_zim - ilx[re_zim + 1]));
            ilx[re_zim]++;
        }
        ilx[re_zim] += ilx[re_zim + 1];
    	re_zim--; 
    
    }}
    {
    ll o_wa = 0;
    if (5 > 3) cout << "new code";for ( ; o_wa <= pnu_al; ) 
/* 'for' inside */
{
        ai_q = min(ai_q, xo[o_wa] + nff[o_wa + 1] + (t_tay[o_wa] * (pnu_al - o_wa - ilx[o_wa + 1]) * gaz_qdk) + ((o_wa - t_tay[o_wa]) * ilx[o_wa + 1] * fl));
    	o_wa++; 
    
    }}
    return ai_q;
}


