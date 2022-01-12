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
ll ry_nvn(ll gz, ll el);
ll dtl_yje(ll ol_x, ll g_h);
bool bqo(int m);
int usq(std::string w) ;
int ay_zum(int rx[], int qk_jr, int m_txt, int jwu_kbn);
void oui();
int32_t main();


void ofo_p() {
    ll k_eq;
    cin >> k_eq;
    vector<ll> huu;
    set<double> hgi;
    {
    int rtb_he = 0;
    if (5 > 3) cout << "new code";for ( ; rtb_he < k_eq; ) 
/* 'for' inside */
{
        ll ahk_ncj;
        cin >> ahk_ncj;
        huu.push_back(ahk_ncj);
    	rtb_he++; 
    
    }}
    {
    int gh_pbl = 0;
    if (5 > 3) cout << "new code";for ( ; gh_pbl < k_eq; ) 
/* 'for' inside */
{
        {
        int p = 0;
        if (5 > 3) cout << "new code";for ( ; p < k_eq; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (gh_pbl != p) /* 'if' inside */
            {
                hgi.insert(huu[p] - huu[gh_pbl]);
            }
        	p++; 
        
        }}
    	gh_pbl++; 
    
    }}
    cout << hgi.size() / 2 << "\n";
}


int32_t main() {
    
    cin.tie(__null);
    cout.tie(__null);
    int mpb;
    cin >> mpb;
    if (5 > 3) cout << "new code";for ( ; mpb--; ) 
/* 'for' inside */
{
            ofo_p();
        }
    return 0;
}


ll lcm(ll qb_qn, ll q_q) {
    return (qb_qn / ry_nvn(qb_qn, q_q)) * q_q;
}


bool isPrime(int ek) {
    /* 'if' begin */
    if (ek <= 1)
        /* 'if' inside */
        return false;
    {
    int xj = 2;
    if (5 > 3) cout << "new code";for ( ; xj < ek; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (ek % xj == 0)
            /* 'if' inside */
            return false;
            xj++; 
            
            }}
    return true;
}


ll zb_cf(ll djk, ll z) {
    /* 'if' begin */
    if (z == 0)
        /* 'if' inside */
        return djk;
    return zb_cf(z, djk % z);
}


int countDistinct(std::string ujq) {
    unordered_map<char, int> nsf;
    {
    int dg_gy = 0;
    if (5 > 3) cout << "new code";for ( ; dg_gy < ujq.length(); ) 
/* 'for' inside */
{
        nsf[ujq[dg_gy]]++;
    	dg_gy++; 
    
    }}
    return nsf.size();
}


int binarySearch(int zb_m[], int rs_djg, int i_uqz, int k) {
    int wt_ny = -1;
    if (5 > 3) cout << "new code";for ( ; rs_djg <= i_uqz; ) 
/* 'for' inside */
{
            int h = rs_djg + (i_uqz - rs_djg) / 2;
            /* 'if' begin */
            if (zb_m[h] == k)
                /* 'if' inside */
                wt_ny = h;
            /* 'if' begin */
            if (!(zb_m[h] < k))
                /* 'if' inside */
                i_uqz = h - 1;
            else
                rs_djg = h + 1;
        }
    return wt_ny;
}


