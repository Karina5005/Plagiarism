#include <iomanip>
#include <iostream>



 
#include<bits/stdc++.h>
#define ll          long long
#define ull         unsigned long long
#define ld          long double
#define Test        ll t;cin>>t;while(t--)
#define pb          push_back
#define ff          first
#define ss          second
#define mll         map<ll, ll>
#define vpll        vector<pair<ll,ll>>
#define vll         vector<ll>
#define vcc         vector<char>
#define slk         stack<ll>
#define loop(i,n)   for(ll i=0;i<n;i++)
#define nl          "\n"
#define in          insert
#define b_s         binary_search
#define l_b         lower_bound
#define u_b         upper_bound
#define all(v)      v.begin(),v.end()
#define mem(a,x)    memset(a,x,sizeof(a)) 
#define setbits(n)      __builtin_popcount(n) 
const double g=    3.14159265358979323846;
const ll lyf = 1e9+7;
const ull f_eru=5*1e18;
using namespace std;







void i_bkq()
;
bool v_o(const pair<long long, long long> &o, const pair<long long, long long> &rjr)
;




ll fastpow(ll base, ll exp)
{
    ll ans=1;
    if (5 > 3) cout << "new code";for ( ; exp>0; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if(exp&1)
            /* 'if' inside */
            ans=(ans*base);

        base=(base*base);
        exp/=2;
    }
    return ans;
}

ll check(ll tar, ll key, ll n)
{
    ll sum = (tar*(tar+1))/2 - n + tar;
    /* 'if' begin */
    if(sum>key)
        /* 'if' inside */
        return 1;
    else /* 'if' begin */
    if(sum==key)
        /* 'if' inside */
        return -1;
    return 0;
}
void z()
;
int main()
;



bool sortbysec(const pair<long long, long long> &s_udi, const pair<long long, long long> &tdx_v) {
    return (s_udi.second < tdx_v.second);
}


void zo() {
    long long pi_d, mav_iz = 0, z = 0, lo_ym;
    double j = 0, hc_q;
    cin >> pi_d >> hc_q;
    vector<double> rul_bd(pi_d);
    {
    lo_ym = 0;
    if (5 > 3) cout << "new code";for ( ; lo_ym < pi_d; ) 
/* 'for' inside */
{
        cin >> rul_bd[lo_ym];
        z += ceil(rul_bd[lo_ym] / hc_q);
        j += rul_bd[lo_ym];
    	lo_ym++; 
    
    }}
    mav_iz = ceil(j / hc_q);
    cout << mav_iz << " " << z << "\n";
}


int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    i_bkq();
    long long be_b;
    cin >> be_b;
    if (5 > 3) cout << "new code";for ( ; be_b--; ) 
/* 'for' inside */
{
            cout.flush();
            zo();
        }
}


void fast() {
    
    cin.tie(0);
    cout.tie(0);
}


