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
#define ps(x,y) fixed<<setprecision(y)<<x  




#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ordered_multi_set tree<int, null_type, less_equal<int> ,rb_tree_tag, tree_order_statistics_node_update>




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
    /* 'if' begin */
    if (x <= 1)
    /* 'if' inside */
    {
        return 1;
    }

    return  mul(x, fact(x - 1));
}

ll power(ll x, ll  y, ll p)
{
    ll res = 1;

    x = x % p;

    /* 'if' begin */
    if (x == 0) /* 'if' inside */
    return 0;

    while (y > 0)
    {

        /* 'if' begin */
        if (y & 1)
            /* 'if' inside */
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
        for (int i = 0;i < 26;i++)
        /* 'for' inside */
        {
            children[i] = NULL;
        }
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
    for (int i = 0;i < n;i++) /* 'for' inside */
    {
        for (int j = 0;j < 5;j++)
        /* 'for' inside */
        {
            cin >> arr[i][j];
        }
    }


    for (int i = 0;i < 5;i++)
    /* 'for' inside */
    {
        for (int j = i + 1;j < 5;j++)
        /* 'for' inside */
        {
            int x = i;
            int y = j;

            int ct1 = 0;
            int ct2 = 0;
            int extra = 0;


            for (int k = 0;k < n;k++)
            /* 'for' inside */
            {

                /* 'if' begin */
                if (arr[k][x] == 1 && arr[k][y] == 1)/* 'if' inside */
                extra++;
                else {
                    /* 'if' begin */
                    if (arr[k][x] == 1)/* 'if' inside */
                    ct1++;
                    /* 'if' begin */
                    if (arr[k][y] == 1)/* 'if' inside */
                    ct2++;
                }
            }

            /* 'if' begin */
            if (ct1 > n / 2 || ct2 > n / 2)
            /* 'if' inside */
            {
                continue;
            }
            else
            {
                /* 'if' begin */
                if (ct1 + ct2 + extra == n)
                /* 'if' inside */
                {
                    cyes;
                    return;
                }
            }



        }
    }


    cno;

}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    

    ll t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    

    return 0;
}