    
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
 
    const int g=1e9+7;
    const int h = 1e6+7;
        
    void gaz_qdk() { cout << endl; }
    template<typename Arg, typename... Args> void my_dbg(Arg fl, Args... pnu_al) 
    { cout << ' ' << fl; my_dbg(pnu_al...); }
    #define dbg(...) cout << "(" << #__VA_ARGS__ << "):", my_dbg(__VA_ARGS__)


   
    ll me(ll x, ll n) 
    {
      ll res = 1;
      while(n) {
          if(n & 1) 
             res = (1LL * res * x) % g;
          x = (1LL * x * x) % g;
          n >>= 1;
      }
      return res;
    }
 

    void xo()
    {
        int nff,t_tay;

        scf(n),scf(k);

        vector<int>ilx;

        while(t_tay)
        ilx.pb(t_tay%2),t_tay/=2;

        ll c = 0,ans = 0;

        ll p = nff;

        for(auto ire_y :ilx)
        {

            if(ire_y)
            ans = (ans + me(p,c))%g;

            c++;
        }

        lprin(ans);

    
        

        
    }

int main()
{  
    tc{
    
        xo();
    }
    

}   