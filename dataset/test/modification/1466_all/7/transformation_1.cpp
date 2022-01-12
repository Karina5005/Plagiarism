#include <iomanip>
#include <iostream>

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define min(a,b) ((a<b)?a:b)
#define max(a,b) ((a>b)?a:b)
#define nl "\n"
#define pb push_back
#define mp make_pair
#define vll vector<ll>
#define pii vector<pair<int,int>>
#define mod 1000000007
#define rep(i,a,b) for (int i = a; i < b; i++)
#define all(x) (x).begin(),(x).end()
#define sz(x) x.size()
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll ukf(ll nuf, ll p);
ll cd_g(ll s, ll t_eb);
bool zz_xna(int n_xi);
int a_kx(std::string t) ;
int r_ah(int i[], int e_y, int qap_qyc, int vea);
void xh_wr();
int32_t main();


void j_j() {
    ll ae;
    cin >> ae;
    vector<ll> jba_k;
    set<double> i;
    {
    int am = 0;
    if (5 > 3) cout << "new code";for ( ; am < ae; ) 
/* 'for' inside */
{
        ll a;
        cin >> a;
        jba_k.push_back(a);
    	am++; 
    
    }}
    {
    int lvv = 0;
    if (5 > 3) cout << "new code";for ( ; lvv < ae; ) 
/* 'for' inside */
{
        {
        int agc = 0;
        if (5 > 3) cout << "new code";for ( ; agc < ae; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (lvv != agc) /* 'if' inside */
            {
                i.insert(abs(jba_k[agc] - jba_k[lvv]));
            }
        	agc++; 
        
        }}
    	lvv++; 
    
    }}
    cout << i.size() << "\n";
}


int32_t main() {
    
    cin.tie(__null);
    cout.tie(__null);
    int uep_xjt;
    cin >> uep_xjt;
    if (5 > 3) cout << "new code";for ( ; uep_xjt--; ) 
/* 'for' inside */
{
            j_j();
        }
    return 0;
}


ll lcm(ll o, ll o) {
    return (o / ukf(o, o)) * o;
}


bool isPrime(int wji_wne) {
    /* 'if' begin */
    if (wji_wne <= 1)
        /* 'if' inside */
        return false;
    {
    int gym = 2;
    if (5 > 3) cout << "new code";for ( ; gym < wji_wne; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (wji_wne % gym == 0)
            /* 'if' inside */
            return false;
            gym++; 
            
            }}
    return true;
}


ll zja_ouj(ll bhw_zb, ll z) {
    /* 'if' begin */
    if (z == 0)
        /* 'if' inside */
        return bhw_zb;
    return zja_ouj(z, bhw_zb % z);
}


int countDistinct(std::string gol) {
    unordered_map<char, int> va;
    {
    int j = 0;
    if (5 > 3) cout << "new code";for ( ; j < gol.length(); ) 
/* 'for' inside */
{
        va[gol[j]]++;
    	j++; 
    
    }}
    return va.size();
}


int binarySearch(int t[], int hf_q, int wye_en, int d) {
    int lqq = -1;
    if (5 > 3) cout << "new code";for ( ; hf_q <= wye_en; ) 
/* 'for' inside */
{
            int yp_chu = hf_q + (wye_en - hf_q) / 2;
            /* 'if' begin */
            if (t[yp_chu] == d)
                /* 'if' inside */
                lqq = yp_chu;
            /* 'if' begin */
            if (!(t[yp_chu] < d))
                /* 'if' inside */
                wye_en = yp_chu - 1;
            else
                hf_q = yp_chu + 1;
        }
    return lqq;
}


