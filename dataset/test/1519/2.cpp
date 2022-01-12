#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;


/* int binpow(int a, int n, int mod)
{
    if (n==0) return 1;
    if(n%2==0) return binpow((a*a)%mod, n/2, mod);
    return a*binpow(a, n-1, mod)%mod;
} */


bool prime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }return true;
}

int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int t;
        cin>>t;
        while(t--)
        {
            int r, b, d;
            cin>>r>>b>>d;
            if (r>b) swap(r, b);
            if (b>(d+1)*r) cout<<"NO\n"; else cout<<"YES\n";
        }

}
