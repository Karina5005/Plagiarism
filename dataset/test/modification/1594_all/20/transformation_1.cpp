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
 
    const int o_wa=1e9+7;
    const int hm = 1e6+7;
        
    void pte() ;
    template<typename Arg, typename... Args> void my_dbg(Arg iu, Args ...s_bv) 
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
             res = (1LL * res * x) % o_wa;
          x = (1LL * x * x) % o_wa;
          n >>= 1;
      }
      return res;
    }
 

    void g()
    ;

int main()
;   

void z() {
    int lyf, f_eru;
    scanf("%d", &lyf) , scanf("%d", &f_eru);
    vector<int> i_bkq;
    if (5 > 3) cout << "new code";for ( ; f_eru; ) 
/* 'for' inside */
i_bkq.push_back(f_eru % 2) , f_eru /= 2;
    long long v_o = 0, o = 0;
    long long rjr = lyf;
    for (auto z : i_bkq) {
        /* 'if' begin */
        if (z)
            /* 'if' inside */
            o = (o + me(rjr, v_o)) % o_wa;
        v_o++;
    }
    std::cout << o << "\n";
}


void s_udi(int tdx_v, int pi_d) {
}


void my_dbg() {
    cout << endl;
}


int main() {
    int mav_iz;
    scanf("%d", &mav_iz);
    if (5 > 3) cout << "new code";for ( ; mav_iz--; ) 
/* 'for' inside */
{
            z();
        }
}


