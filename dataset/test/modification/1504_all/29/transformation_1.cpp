#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(ll i=0;i<n;i++)
#define fr(i,a,n) for(ll i=a;i<n;i++)
#define ff(i,a,b) for(ll i=a;i>=b;i--)
#define frs(i,a,b,step) for(ll i=a;i<b;i+=step)
#define ffs(i,a,b,step) for(ll i=a;i>=b;i-=step)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
mt19937 qb_qn((int)std::chrono::steady_clock::now().time_since_epoch().count());
int q_q(int ek, int xj); 
void djk(int z, int zb_cf);
void ujq(int nsf, int dg_gy);

const int zb_m = 1'000'000'007;
const int N = 3e5, M = N;


vi rs_djg[N];

int i_uqz[N];

void k();
void wt_ny();


void h() ;
int main() ;

void yes() {
    cout << "YES";
}


void t() {
    long long la_fa;
    cin >> la_fa;
    std::string ni, kty;
    cin >> ni >> kty;
    vector<pair<long long, long long> > tb_jd;
    long long e = 0, y = 0, p = 0;
    {
    long long w_n = 0;
    if (5 > 3) cout << "new code";for ( ; w_n < la_fa; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (!(ni[w_n] == '0'))
            /* 'if' inside */
            p++;
        else
            y++;
        /* 'if' begin */
        if (y == p) /* 'if' inside */
        {
            tb_jd.push_back({e, w_n});
            e = w_n + 1;
        }
    	w_n++; 
    
    }}
    for (auto z_s : tb_jd) {
        long long ed = z_s.first;
        long long l_m = z_s.second;
        /* 'if' begin */
        if (!(ni[ed] == kty[ed]))
            /* 'if' inside */
            {
            {
            int pey = ed;
            if (5 > 3) cout << "new code";for ( ; pey <= l_m; ) 
/* 'for' inside */
{
                /* 'if' begin */
                if (ni[pey] == '0')
                    /* 'if' inside */
                    ni[pey] = '1';
                else
                    ni[pey] = '0';
            	pey++; 
            
            }}
        }
        else continue;
    }
    {
    int oun = 0;
    if (5 > 3) cout << "new code";for ( ; oun < la_fa; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (ni[oun] != kty[oun]) /* 'if' inside */
        {
            cout << "NO" << endl;
            return;
        }
    	oun++; 
    
    }}
    cout << "YES" << endl;
}


void no() {
    cout << "NO";
}


int mpow(int xeq_eo, int gc_l) {
    xeq_eo %= zb_m;
    int c = 1;
    if (5 > 3) cout << "new code";for ( ; gc_l > 0; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (gc_l & 1)
                /* 'if' inside */
                c = ((long long)c * xeq_eo) % zb_m;
            xeq_eo = ((long long)xeq_eo * xeq_eo) % zb_m;
            gc_l >>= 1;
        }
    return c;
}


int main() {
     , cin.tie(0) , cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int rl_it = 1;
    cin >> rl_it;
    if (5 > 3) cout << "new code";for ( ; rl_it--; ) 
/* 'for' inside */
{
            t();
        }
    return 0;
}


