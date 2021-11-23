#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;



#define pb push_back
#define ll long long
#define ld long double
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define rep_r(i,a,n) for(ll i=b-1;i>=a;i--)
#define ff first
#define ss second
#define mp make_pair
#define pi 3.141592653589793238
#define cyes cout<<"YES\n"
#define cno cout<<"NO\n"
#define ps(x,y) fixed<<setprecision(y)<<x  //set precision 



//ordered_set and multi_ordered_set as pbds  
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ordered_multi_set tree<int, null_type, less_equal<int> ,rb_tree_tag, tree_order_statistics_node_update>
//member functions :
//1.  <var_name>.order_of_key(k) : number of elements *strictly* less than k
//2.  <var_name>.find_by_order(k) : k-th element in the set



const ll g_q = 1e9 + 7;

ll add(ll x, ll y)
{
    return (x % g_q + y % g_q + g_q) % g_q;
}

ll mul(ll x, ll y)
{
    return (x % g_q * y % g_q + g_q) % g_q;
}

ll sub(ll x, ll y)
{
    return (x % g_q - y % g_q + g_q) % g_q;
}


ll modulo(ll x, ll m)
{
    return (x % m + m) % m;
}



ll lcm(ll a, ll b)
{
    return (a * b) / (__gcd(a, b));
}

ll fact(ll x)
{
    if (x <= 1)
    {
        return 1;
    }

    return  mul(x, fact(x - 1));
}

ll power(ll x, ll  y, ll p)
{
    ll res = 1;

    x = x % p;

    if (x == 0) return 0;

    while (y > 0)
    {

        if (y & 1)
            res = (res * x) % p;

        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}



struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* whs(int q_rip) {
    Node* gpy = new Node;

    gpy->data = q_rip;
    gpy->left = NULL;
    gpy->right = NULL;

    return gpy;

}


struct TrieNode {

    TrieNode* children[26];
    bool isEnd;

    TrieNode()
    {
        for (int bxm_n = 0;bxm_n < 26;bxm_n++)
        {
            children[bxm_n] = NULL;
        }
        isEnd = false;
    }
};


struct comp {

    bool operator()(pair<ll, ll>jsr_y, pair<ll, ll>g) {
        return jsr_y.first < g.first;
    }

};

ll dx[8] = { -1,-1,-1,0,1,1,1,0 };
ll dy[8] = { -1,0,1,1,1,0,-1,-1 };



#define int long long

void gh_vec()
{

    ll n;
    cin >> n;


    string m;
    cin >> m;
    string ev_ij;
    cin >> ev_ij;


    for (int i = 0;i < n;i++)
    {
        if (m[i] == '1' && m[i] == ev_ij[i])
        {
            cno;
            return;
        }
    }

    cyes;



}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll t;
    cin >> t;

    while (t--)
    {
        gh_vec();
    }

    /*  cerr << "\nTime elapsed : " << 1000 * clock() / CLOCKS_PER_SEC << " ms\n"; */

    return 0;
}