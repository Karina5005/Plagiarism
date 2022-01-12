/* BISMILLAHIR RAHMANIR RAHIM  */
#include<bits/stdc++.h>
using namespace std;

#define READ                freopen("in.txt", "r", stdin)
#define WRITE               freopen("out.txt", "w", stdout)
#define ll                  int long long
#define ull                 unsigned long long
#define ld                  long double
#define lld                 long long double
#define pi                  acos(-1)
#define pb                  push_back
#define pff                  push_front
#define pbk                 pop_back
#define pfk                 pop_front
#define m_p                 make_pair
#define gcd(a,b)            __gcd(a,b)
#define lcm(a, b)        ((a)*((b)/gcd(a,b)))
#define INF                 1000000000
#define M                   1000000000+7
#define dist(ax,ay,bx,by)   ((ax-bx)*(ax-bx)+(ay-by)*(ay-by))
#define sf(a)            scanf("%d",&a)
#define sfl(a)           scanf("%lld",&a)
#define sff(a,b)         scanf("%d %d",&a,&b)
#define sffl(a,b)        scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)      scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define loop(i,a,b,x)    for(__typeof(b) i=a;i<=b;i+=x)
#define rloop(i,b,a,x)   for(__typeof(b) i=b;i>=a;i-=x)
#define lead_zero(x)     __builtin_clzll(x)
#define trail_zero(x)    __builtin_ctz(x)
#define total_1s(x)      __builtin_popcount(x)
#define first_1(x)       __builtin_ffs(x)
#define log2_(x)         __builtin_clz(1) - __builtin_clz(x)
#define QUERY            int test; scanf("%d", &test);for (int t = 1; t<= test; t++)
#define FAST             ios_base::sync_with_stdio(0); cin.tie(0)
#define pf               printf
#define ff first
#define ss second
#define all(v)  v.begin(),v.end()
#define PRINT_CASE       printf("Case %d: ",z)
int n,a[100];
int main()
{
    QUERY{
        sf(n);
        int mx =0, mn=1000000007;
        loop(i,1,n,1){
            sf(a[i]);
            mn=min(mn,a[i]);
            mx=max(mx,a[i]);
        }
        pf("%d\n",mx-mn);
    }
}
