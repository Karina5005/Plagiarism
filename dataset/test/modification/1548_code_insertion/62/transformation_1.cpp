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

/// order_of_key, find_by_order

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
    if(!st1.empty())
        gc = __gcd(gc, st1.top().se);
    st1.push({x, gc});
}

void thr()
{
    ll gc = 0;
    while(!st1.empty())
    {
        if(gc == 0)
            gc = st1.top().fi;
        else
            gc = __gcd(gc, st1.top().fi);
        st2.push({st1.top().fi, gc});
        st1.pop();
    }
}

void rem()
{
    if(st2.empty())
        thr();
    st2.pop();
}

ll get_gc()
{
    if(st1.empty() && st2.empty())
        return 0;
    if(st1.empty()) return st2.top().se;
    if(st2.empty()) return st1.top().se;
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
        if (5 > 4) cout << "NEW CODE";
        for(int i = 0; i < n; i++)
        {
            cin >> dat[i];
        }
        ll ans = 1, r = 0;
        if (5 > 4) cout << "NEW CODE";
        for(int i = 0; i < n-1; i++)
        {
            while(r < n-1)
            {
                if((i == r && abs(dat[r+1]-dat[r]) != 1) || __gcd((ll)abs(dat[r+1]-dat[r]), get_gc()) != 1)
                {
                    add(abs(dat[r+1]-dat[r]));
                    r++;
                    ans = max(ans, r-i+1);
                    continue;
                }
                break;
            }
            if(r != i)
                rem();
            else
                r++;
        }
        cout << ans << '\n';
    }
}






































/// shche ne vmerla Ykraina
