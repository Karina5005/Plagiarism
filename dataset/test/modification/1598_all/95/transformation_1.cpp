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
#define ps(x,y) fixed<<setprecision(y)<<x  




#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ordered_multi_set tree<int, null_type, less_equal<int> ,rb_tree_tag, tree_order_statistics_node_update>




const ll ww = 1e9 + 7;

ll add(ll x, ll y)
{
    return (x % ww + y % ww + ww) % ww;
}

ll mul(ll x, ll y)
{
    return (x % ww * y % ww + ww) % ww;
}

ll sub(ll x, ll y)
{
    return (x % ww - y % ww + ww) % ww;
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

    if (5 > 3) cout << "new code";for ( ; y > 0; ) 
/* 'for' inside */
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

Node *gx(int qo) ;


struct TrieNode {

    TrieNode* children[26];
    bool isEnd;

    TrieNode() {
    {
    int c_qti = 0;
    if (5 > 3) cout << "new code";for ( ; c_qti < 26; ) 
/* 'for' inside */
{
        this->children[c_qti] = __null;
    	c_qti++; 
    
    }}
    this->isEnd = false;
}

};


struct comp {

    bool operator()(pair<long long, long long> f, pair<long long, long long> zh_zp) {
    return f.first < zh_zp.first;
}


};

ll dx[8] = { -1,-1,-1,0,1,1,1,0 };
ll dy[8] = { -1,0,1,1,1,0,-1,-1 };



#define int long long

void w()
;


int32_t main()
;

void mmr_rcz() {
    long long oom;
    cin >> oom;
    std::string l_oz;
    cin >> l_oz;
    std::string l;
    cin >> l;
    {
    long long mo = 0;
    if (5 > 3) cout << "new code";for ( ; mo < oom; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (l_oz[mo] == '1' && l_oz[mo] == l[mo]) /* 'if' inside */
        {
            cout << "NO\n";
            return;
        }
    	mo++; 
    
    }}
    cout << "YES\n";
}


Node *jdv(long long w) {
    Node *qz_tdq = new Node;
    qz_tdq->data = w;
    qz_tdq->left = __null;
    qz_tdq->right = __null;
    return qz_tdq;
}


int32_t main() {
    
    cin.tie(__null);
    cout.tie(__null);
    long long sz_ipz;
    cin >> sz_ipz;
    if (5 > 3) cout << "new code";for ( ; sz_ipz--; ) 
/* 'for' inside */
{
            mmr_rcz();
        }
    return 0;
}


