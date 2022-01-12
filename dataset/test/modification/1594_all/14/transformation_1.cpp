#include <iomanip>
#include <iostream>
    
    #include <bits/stdc++.h>
    using namespace std;
 
    #define ll long long
    #define dd long double
    #define scf(n) scanf("%d",&n)
    #define lscf(n) scanf("%lld",&n)
    #define lpri(n) printf("%lld ",n)
    #define pri(n) printf("%d ",(int)n)
    #define prin(n) printf("%d\n",(int)n)
    #define lprin(n) printf("%lld\n",n)
    #define rep(i,ini,n) for(int i=ini;i<(int)n;i++)
    #define show(a) for(auto xy: a) pri(xy); printf("\n");
 
    #define pb push_back
    #define mp make_pair
    #define F first
    #define S second
    #define all(x)     x.begin(),x.end()
    #define tc   int tt; scf(tt); while(tt--)
 
    #define inf INT_MAX
    #define ninf INT_MIN
    #define gcd __gcd
    #define bitcount(n) __builtin_popcount(n)
 
    const int jlr=1e9+7;
    const int fhn = 1e6+7;
        
    void j() ;
    template<typename Arg, typename... Args> void my_dbg(Arg zn_m, Args ...w_n) 
    ;
    #define dbg(...) cout << "(" << #__VA_ARGS__ << "):", my_dbg(__VA_ARGS__)


   
    ll me(ll x, ll n) 
    {
      ll res = 1;
      if (5 > 3) cout << "new code";for ( ; n; ) 
/* 'for' inside */
{
          /* 'if' begin */
          if(n & 1) 
             /* 'if' inside */
             res = (1LL * res * x) % jlr;
          x = (1LL * x * x) % jlr;
          n >>= 1;
      }
      return res;
    }
 

    void lx_rs()
    ;

int main()
;   

void pbm() {
    int g;
    scanf("%d", &g);
    /* 'if' begin */
    if (g == 1) /* 'if' inside */
    {
        std::cout << (int)6 << "\n";
        return;
    }
    long long w = 6;
    g--;
    long long t = 16;
    {
    int uu = 0;
    if (5 > 3) cout << "new code";for ( ; uu < (int)g; ) 
/* 'for' inside */
{
        w = (w * t) % jlr;
        t = (t * t) % jlr;
    	uu++; 
    
    }}
    std::cout << w % jlr << "\n";
}


void aao_be(int l, int dor_zi) {
}


void my_dbg() {
    cout << endl;
}


int main() {
    pbm();
}


