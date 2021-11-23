#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define lll __int128
#define ull unsigned long long
#define fi first
#define se second
#define db double
#define ld long double
#define lld __float128



template<class T, class COMP>
using custom_set = tree<T, null_type, COMP, rb_tree_tag, tree_order_statistics_node_update>;

template<class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

template<class T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template<class T, class U>
using ordered_map = tree<T, U, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
mt19937_64 rnd_64(chrono::steady_clock::now().time_since_epoch().count());

stack<pair<ll, ll> > st1, st2;

void add(ll x)
{
    ll gc = x;
    /* 'if' begin */
    if(!st1.empty())
        /* 'if' inside */
        gc = __gcd(gc, st1.top().se);
    st1.push({x, gc});
}

void thr()
{
    ll gc = 0;
    while(!st1.empty())
    {
        /* 'if' begin */
        if(gc == 0)
            /* 'if' inside */
            gc = st1.top().fi;
        else
            gc = __gcd(gc, st1.top().fi);
        st2.push({st1.top().fi, gc});
        st1.pop();
    }
}

void rem()
{
    /* 'if' begin */
    if(st2.empty())
        /* 'if' inside */
        thr();
    st2.pop();
}

ll get_gc()
{
    /* 'if' begin */
    if(st1.empty() && st2.empty())
        /* 'if' inside */
        return 0;
    /* 'if' begin */
    if(st1.empty()) /* 'if' inside */
    return st2.top().se;
    /* 'if' begin */
    if(st2.empty()) /* 'if' inside */
    return st1.top().se;
    return __gcd(st1.top().se, st2.top().se);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        ll dat[n];
        for(int i = 0; i < n; i++)
        /* 'for' inside */
        {
            cin >> dat[i];
        }
        ll ans = 1, r = 0;
        for(int i = 0; i < n-1; i++)
        /* 'for' inside */
        {
            while(r < n-1)
            {
                /* 'if' begin */
                if((i == r && abs(dat[r+1]-dat[r]) != 1) || __gcd((ll)abs(dat[r+1]-dat[r]), get_gc()) != 1)
                /* 'if' inside */
                {
                    add(abs(dat[r+1]-dat[r]));
                    r++;
                    ans = max(ans, r-i+1);
                    continue;
                }
                break;
            }
            /* 'if' begin */
            if(r != i)
                /* 'if' inside */
                rem();
            else
                r++;
        }
        cout << ans << '\n';
    }
}







































