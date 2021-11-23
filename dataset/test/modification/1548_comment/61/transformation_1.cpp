#include <bits/stdc++.h>
using namespace std;
#define bye ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ll long long
#define pb push_back
#define enl "\n"
#define pf push_front

#define MOD (ll)(1e9+7)
#define Mod (ll)(998244353)

ll n,m;
ll cnt[200200];
set<ll> se;

ll fastpow(ll a,ll n){
    /* 'if' begin */
    if(!n)
        /* 'if' inside */
        return 1;
    ll mul = fastpow(a,n/2);
    mul = (mul*mul)%Mod;
    /* 'if' begin */
    if(n&1)
        /* 'if' inside */
        mul = (a*mul)%Mod;
    return mul;
}

int main()
{
    bye
    int Ti=1;

    while(Ti--)
    {
        cin >> n >> m;
        while(m--){
            ll x,y;
            cin >> x >> y;
            /* 'if' begin */
            if(x>y)
                /* 'if' inside */
                swap(x,y);
            se.insert(x);
            cnt[x]++;
        }
        ll q;
        cin >> q;
        while(q--){
            ll z,x,y;
            cin >> z;
            /* 'if' begin */
            if(z==3)/* 'if' inside */
            {
                cout << n - se.size() << "\n";
            }
            /* 'if' begin */
            if(z==2)/* 'if' inside */
            {
                cin >> x >> y;
                /* 'if' begin */
                if(x>y)
                    /* 'if' inside */
                    swap(x,y);
                cnt[x]--;
                /* 'if' begin */
                if(!cnt[x])
                    /* 'if' inside */
                    se.erase(x);
            }
            /* 'if' begin */
            if(z==1)/* 'if' inside */
            {
                cin >> x >> y;
                /* 'if' begin */
                if(x>y)
                    /* 'if' inside */
                    swap(x,y);
                cnt[x]++;
                se.insert(x);
            }
        }
    }
    return 0;
}
