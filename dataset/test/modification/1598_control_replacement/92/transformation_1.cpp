#include <iomanip>
#include <iostream>
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



const ll mod = 1e9 + 7;

ll add(ll x, ll y)
{
    return (x % mod + y % mod + mod) % mod;
}

ll mul(ll x, ll y)
{
    return (x % mod * y % mod + mod) % mod;
}

ll sub(ll x, ll y)
{
    return (x % mod - y % mod + mod) % mod;
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

    for ( ; y > 0; ) 
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

Node* newNode(int val) {
    Node* temp = new Node;

    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;

}


struct TrieNode {

    TrieNode* children[26];
    bool isEnd;

    TrieNode()
    {
        {
        int i = 0;
        for ( ; i < 26; ) 
{
            children[i] = NULL;
        	i++; 
        
        }}
        isEnd = false;
    }
};


struct comp {

    bool operator()(pair<ll, ll>x, pair<ll, ll>y) {
        return x.first < y.first;
    }

};

ll dx[8] = { -1,-1,-1,0,1,1,1,0 };
ll dy[8] = { -1,0,1,1,1,0,-1,-1 };



#define int long long

void solve()
{

    int n;
    cin >> n;


    int arr[n][5];
    {
    int i = 0;
    for ( ; i < n; ) 
{
        {
        int j = 0;
        for ( ; j < 5; ) 
{
            cin >> arr[i][j];
        	j++; 
        
        }}
    	i++; 
    
    }}


    {
    int i = 0;
    for ( ; i < 5; ) 
{
        {
        int j = i + 1;
        for ( ; j < 5; ) 
{
            int x = i;
            int y = j;

            int ct1 = 0;
            int ct2 = 0;
            int extra = 0;


            {
            int k = 0;
            for ( ; k < n; ) 
{

                if (!(arr[k][x] == 1 && arr[k][y] == 1)){
                    if (arr[k][x] == 1)ct1++;
                    if (arr[k][y] == 1)ct2++;
                }
                else extra++;
            	k++; 
            
            }}

            if (!(ct1 > n / 2 || ct2 > n / 2))
            {
                if (ct1 + ct2 + extra == n)
                {
                    cyes;
                    return;
                }
            }
            else
            {
                i++; j++; continue;
            }



        	j++; 
        
        }}
    	i++; 
    
    }}


    cno;

}


int32_t main()
{
    
    cin.tie(NULL);
    cout.tie(NULL);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll t;
    cin >> t;

    for ( ; t--; ) 
{
        solve();
    }

    /*  cerr << "\nTime elapsed : " << 1000 * clock() / CLOCKS_PER_SEC << " ms\n"; */

    return 0;
}