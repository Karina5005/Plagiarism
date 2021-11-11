#include <bits/stdc++.h>
using namespace std;
#define bye ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ll long long
#define pb push_back
#define enl "\n"
#define pf push_front
//#define mp make_pair
#define MOD (ll)(1e9+7)
#define Mod (ll)(998244353)

ll n,m;
ll cnt[200200];
set<ll> se;

ll fastpow(ll a,ll n){
    if(!n)
        return 1;
    ll mul = fastpow(a,n/2);
    mul = (mul*mul)%Mod;
    if(n&1)
        mul = (a*mul)%Mod;
    return mul;
}

int main()
{
    bye
    int Ti=1;
//    cin >> Ti;
    while(Ti--)
    {
        cin >> n >> m;
        while(m--){
            ll x,y;
            cin >> x >> y;
            if(x>y)
                swap(x,y);
            se.insert(x);
            cnt[x]++;
        }
        ll q;
        cin >> q;
        while(q--){
            ll z,x,y;
            cin >> z;
            if(z==3){
                cout << n - se.size() << "\n";
            }
            if(z==2){
                cin >> x >> y;
                if(x>y)
                    swap(x,y);
                cnt[x]--;
                if(!cnt[x])
                    se.erase(x);
            }
            if(z==1){
                cin >> x >> y;
                if(x>y)
                    swap(x,y);
                cnt[x]++;
                se.insert(x);
            }
        }
    }
    return 0;
}
