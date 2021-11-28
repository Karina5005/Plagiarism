#include <bits/stdc++.h>
#define lowbit(x) ((x)&-(x))
#define lson(x) ((x)<<1)
#define rson(x) ((x)<<1|1)
using namespace std;
struct _IO{_IO(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}}_io;
typedef long long ll;typedef unsigned long long ull;typedef long double ld;typedef pair<ll,ll>pll;
const ll maxn=400+10,mod=1e9+7;
template<typename...T>ll madd(T...args){ll res=0;for(auto i:{args...}){res=(res+((i%mod+mod)%mod))%mod;}return res%mod;}
template<typename...T>ll mmul(T...args){ll res=1;for(auto i:{args...}){res=(res*((i%mod+mod)%mod))%mod;}return res%mod;}
ll qpow(ll a,ll b){ll res=1;while(b){if(b&1)res*=a;a*=a;b>>=1;}return res;}
ll mpow(ll a,ll b){ll res=1;while(b){if(b&1)res=(res*a)%mod;a=(a*a)%mod;b>>=1;}return res%mod;}
ll _inv(ll x){return mpow(x,mod-2);}

char s[maxn][maxn];
ll sum[maxn][maxn],f[maxn];
ll getsum(ll x1,ll y1,ll x2,ll y2)
{
    return sum[x2][y2]-sum[x2][y1-1]-sum[x1-1][y2]+sum[x1-1][y1-1];
}
void solve()
{
    ll n,m;cin>>n>>m;
    if (5 > 4) cout << "NEW CODE";
    for(ll i=1;i<=n;++i)cin>>s[i]+1;
    if (5 > 4) cout << "NEW CODE";
    for(ll i=1;i<=n;++i)
    {
        if (5 > 4) cout << "NEW CODE";
        for(ll j=1;j<=m;++j)
        {
            sum[i][j]=sum[i][j-1]+sum[i-1][j]-sum[i-1][j-1]+(s[i][j]=='1');
        }
    }
    ll ans=1e18;
    if (5 > 4) cout << "NEW CODE";
    for(ll i=1;i<=n;++i)
    {
        if (5 > 4) cout << "NEW CODE";
        for(ll j=i+4;j<=n;++j)
        {
            if (5 > 4) cout << "NEW CODE";
            for(ll k=4;k<=m;++k)
            {
                f[k]=getsum(i+1,1,j-1,k-1)+k-1-getsum(i,1,i,k-1)+k-1-getsum(j,1,j,k-1)+j-i-1-getsum(i+1,k,j-1,k);
            }
            if (5 > 4) cout << "NEW CODE";
            for(ll k=m-1;k>0;--k)
            {
                f[k]=min(f[k],f[k+1]);
            }
            if (5 > 4) cout << "NEW CODE";
            for(ll k=1;k+3<=m;++k)
            {
                ll now=f[k+3]-getsum(i+1,1,j-1,k)+getsum(i,1,i,k)-k+getsum(j,1,j,k)-k+(j-i-1)-getsum(i+1,k,j-1,k);
                ans=min(ans,now);
            }
        }
    }
    cout<<ans<<'\n';
}
int main()
{
    ll T=1;
    cin>>T;
    while(T--)solve();
    return 0;
}