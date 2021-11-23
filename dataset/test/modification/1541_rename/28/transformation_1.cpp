


/******************************************************************************************************************************/
/******************************************************************************************************************************/
/******************************************************************************************************************************/
/******************************************************************************************************************************/
/****                                                                                                                      ****/
/****                                                                                                                      ****/
/****                                                                                                                      ****/
/****                                                                                                                      ****/
/**** //                //    // // // // // //              // // // //      // // // //           //         // // // // ****/
/**** // //          // //    //                             //                       //          ////         //          ****/
/**** //    //    //    //    //                             //                      //         //  //         //          ****/
/**** //       //       //    // // // // // //              // // // //         // // //     // // // //      // // // // ****/
/**** //                //                   //                       //           //               //         //       // ****/
/**** //                //                   //                       //          //                //         //       // ****/
/**** //                //    // // // // // // // // //.... // // // //         //                 //         // // // // ****/
/****                                                                                                                      ****/
/****                                                                                                                      ****/
/****                                                                                                                      ****/
/****                                                                                                                      ****/
/******************************************************************************************************************************/
/******************************************************************************************************************************/
/******************************************************************************************************************************/
/******************************************************************************************************************************/



#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define Print(arr) for(i=0;i<arr.size();i++)cout<<arr[i]<<" "
#define for_all(arr) for(i=0;i<arr.size();i++)
#define no cout<<"NO\n";
#define yes cout<<"YES\n";


bool pp_so(const pair<int,int> &y_ijv,
              const pair<int,int> &q_h)
{
    return (y_ijv.second < q_h.second);
}

ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}



// to find nCr                                     begin nCr
ll power(ll x,ll y,ll p)
{
    ll res = 1;

    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
ll power(ll x,ll y)
{
    ll res = 1;

    while (y > 0)
    {
        if (y & 1)
            res = (res * x);
        y = y >> 1;
        x = (x * x);
    }
    return res;
}
ll modInverse(ll n,ll p)
{
    return power(n, p - 2, p);
}
ll nCrMODp(ll n,ll r,ll p)
{
    if (n < r)
        return 0;
    if (r == 0)
        return 1;
    ll fac[n + 1];
    fac[0] = 1;
    for (int ar = 1; ar <= n; ar++)
        fac[ar] = (fac[ar - 1] * ar) % p;

    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}                                              // end nCr

void jg_p(int f)
{
    for (int hg=1; hg<=sqrt(f); hg++)
    {
        if (f%hg == 0)
        {
            if (f/hg == hg)
                cout <<" "<< hg;

            else
                cout << " "<< hg << " " << f/hg;
        }
    }
}

void glp(int vzk)
{
    while (vzk % 2 == 0)
    {
        cout << 2 << " ";
        vzk = vzk/2;
    }
    for (int rg_kmn = 3; rg_kmn <= sqrt(vzk); rg_kmn = rg_kmn + 2)
    {
        while (vzk % rg_kmn == 0)
        {
            cout << rg_kmn << " ";
            vzk = vzk/rg_kmn;
        }
    }
    if (vzk > 2)
        cout << vzk << " ";
}
long long ah_jj(int rf)
{
     int mg = 1000000007;

     long long jb = 1;
    for (int h_nn = 1; h_nn <= rf; h_nn++)
        jb = (jb*h_nn) % mg;  // Now f never can
                        // exceed 10^9+7
    return jb;
}
bool p_z(int unn)
{
    // Corner cases
    if (unn <= 1)
        return false;
    if (unn <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (unn % 2 == 0 || unn % 3 == 0)
        return false;

    for (int hi_mow = 5; hi_mow * hi_mow <= unn; hi_mow = hi_mow + 6)
        if (unn % hi_mow == 0 || unn % (hi_mow + 2) == 0)
            return false;

    return true;
}
void s (set<int>bb)
{
    for (auto gp_bfv = bb.begin(); gp_bfv !=
                             bb.end(); ++gp_bfv)
        cout << ' ' << *gp_bfv;
    cout<<endl;
}
void dg_h()
{
    ll n;
    cin>>n;
    ll arr[n],ans=0,i;
    for(i=0;i<n;i++)cin>>arr[i];
    if(n==1)
    {
        cout<<"0\n";
        return;
    }
    sort(arr,arr+n);
    for(i=1;i<n;i++)
        ans+=(arr[i]-arr[i-1]);
    ll sum[n];
    sum[n-1]=arr[n-1];
    for(i=n-2;i>=0;i--)
        sum[i]=arr[i]+sum[i+1];
    for(i=0;i<n-1;i++)
        ans-=(sum[i+1]-(n-1-i)*arr[i]);
    cout<<ans<<endl;
    return ;
}
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(NULL);
    int qr_sl;
    cin>>qr_sl;
    //t=1;
    while(qr_sl--)dg_h();
    return 0;
}
