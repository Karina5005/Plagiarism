    
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
 
    const int mod=1e9+7;
    const int N = 1e6+7;
        
    void my_dbg() { cout << endl; }
    template<typename Arg, typename... Args> void my_dbg(Arg A, Args... B) 
    { cout << ' ' << A; my_dbg(B...); }
    #define dbg(...) cout << "(" << #__VA_ARGS__ << "):", my_dbg(__VA_ARGS__)


   
    ll me(ll x, ll n) 
    {
      ll res = 1;
      while(n) {
          /* 'if' begin */
          if(n & 1) 
             /* 'if' inside */
             res = (1LL * res * x) % mod;
          x = (1LL * x * x) % mod;
          n >>= 1;
      }
      return res;
    }
 

    void solve()
    {   
        int k ;
        scf(k);

        /* 'if' begin */
        if(k==1)
        /* 'if' inside */
        {
            prin(6);

            return;
        }

        ll ans = 6;

        k--;

        ll val = 16;

        rep(i,0,k)
        {
            ans = (ans*val)%mod;

            val = (val*val)%mod;
        }

        lprin(ans%mod);
       
    }

int main()
{  
    
        solve();
    
    

}   