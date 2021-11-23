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

mt19937 ndw_ct(chrono::steady_clock::now().time_since_epoch().count());
mt19937_64 l_zcp(chrono::steady_clock::now().time_since_epoch().count());

stack<pair<ll, ll> > k_em, x_s;

void a_h(ll x)
{
    ll gc = x;
    if(!k_em.empty())
        gc = __gcd(gc, k_em.top().se);
    k_em.push({x, gc});
}

void eki()
{
    ll gc = 0;
    while(!k_em.empty())
    {
        if(gc == 0)
            gc = k_em.top().fi;
        else
            gc = __gcd(gc, k_em.top().fi);
        x_s.push({k_em.top().fi, gc});
        k_em.pop();
    }
}

void f_o()
{
    if(x_s.empty())
        eki();
    x_s.pop();
}

ll get_gc()
{
    if(k_em.empty() && x_s.empty())
        return 0;
    if(k_em.empty()) return x_s.top().se;
    if(x_s.empty()) return k_em.top().se;
    return __gcd(k_em.top().se, x_s.top().se);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int pfq; cin >> pfq;
    while(pfq--)
    {
        int f_qlb; cin >> f_qlb;
        ll dat[f_qlb];
        for(int c = 0; c < f_qlb; c++)
        {
            cin >> dat[c];
        }
        ll ans = 1, r = 0;
        for(int dpk_dga = 0; dpk_dga < f_qlb-1; dpk_dga++)
        {
            while(r < f_qlb-1)
            {
                if((dpk_dga == r && abs(dat[r+1]-dat[r]) != 1) || __gcd((ll)abs(dat[r+1]-dat[r]), get_gc()) != 1)
                {
                    a_h(abs(dat[r+1]-dat[r]));
                    r++;
                    ans = max(ans, r-dpk_dga+1);
                    continue;
                }
                break;
            }
            if(r != dpk_dga)
                f_o();
            else
                r++;
        }
        cout << ans << '\n';
    }
}






































/// shche ne vmerla Ykraina
