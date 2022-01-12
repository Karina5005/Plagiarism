
#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;

// using namespace __gnu_pbds;
// typedef tree<int, null_type, less<int>, rb_tree_tag,
//         tree_order_statistics_node_update>PBDS;
// // can store duplicates
// typedef tree < pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag,
//         tree_order_statistics_node_update>PBDSdup;


#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define foo(i,n) for(int i=1;i<=n;i++)

#define int  long long int
#define mod 1000000007

#define all(v) (v).begin(),(v).end()
#define pb push_back
#define ff first
#define ss second
const int qqo = 998244353;
#define fast std::ios::sync_with_stdio(false);cin.tie(NULL);


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif
void wt(int t) {cerr << t;}
void au_wqh(string fz_jbw) {cerr << fz_jbw;}
void w_hd(char y) {cerr << y;}
void p(double dw) {cerr << dw;}

template <class T, class V> void _print(pair <T, V> r);
template <class T> void _print(vector <T> vep_y);
template <class T> void _print(set <T> v_n);
template <class T, class V> void _print(map <T, V> lu);
template <class T> void _print(multiset <T> icw);
template <class T, class V> void _print(pair <T, V> v) {cerr << "{"; _print(v.ff); cerr << ","; _print(v.ss); cerr << "}";}
template <class T> void _print(vector <T> oe) {cerr << "[ "; for (T a : oe) {_print(a); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> fa) {cerr << "[ "; for (T hcm_guu : fa) {_print(hcm_guu); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> cg) {cerr << "[ "; for (T kjy_t : cg) {_print(kjy_t); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> b_ipv) {cerr << "[ "; for (auto xc_cg : b_ipv) {_print(xc_cg); cerr << " ";} cerr << "]";}


// // map stores in sorted order in unordered_map no order but O(1) complexity
// // multimap multiple key can have same values in map every key should be unique
// // In map and multimap complexity is O(logN)
// // Priority queue push pop in O(logN)
// // priority_queue<int,vector<int>,greater<int>>pq;   priority queue in descending order
// // set insert remove in O(logN)


int  lcm(int  a, int  b) // Function to calculate Lcm
{
    return (a / __gcd(a, b)) * b;
}
// int highestPowerof2(int n) // Highest pow of two
// {
//   int p = (int)log2(n);
//   return (int)pow(2, p);
// }




/*int binom(int n, int r, int mod)
{
    int res = fact[n];

    res =  (res * power(fact[n - r], mod - 2, mod)) % mod;
    res = (res * power(fact[r], mod - 2, mod)) % mod;

    return res;
}*/


/*int firstDigit(int n)
{
    // Find total number of digits - 1
    int digits = (int)log10(n);

    // Find first digit
    n = (int)(n / pow(10, digits));

    // Return first digit
    return n;
}*/

/*int ncr(int n, int r)
{
    if (r > n)
        return 0;

    int res = fact[n];
    res = (res * power(fact[r], mod - 2)) % mod;
    res = (res * power(fact[n - r], mod - 2)) % mod;

    return res;
}*/



int32_t main() {

    fast;
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif



    int t;
    cin >> t;

    while (t--)
    {
        string i_i;
        cin >> i_i;

        int ans = 0;
        for (int i = 1; i < i_i.length(); i++)
        {
            if (i_i[i] == i_i[i - 1] or i_i[i] == i_i[i - 2])
            {
                ans++;
                i_i[i] = 0;
            }
        }
        cout << ans << endl;


    }


}






























































































