    
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds; 



#define rep(i,j,k) for(long long int i=(long long int)j;i<(long long int)k;i++)
#define MOD 1000000007
#define pb push_back
#define fi first
#define se second
typedef long long lld;
typedef long ld;
#define ordered_set tree<lld, null_type,less<lld>, rb_tree_tag,tree_order_statistics_node_update> 
#define inf LLONG_MAX
const lld MAXN = (int)3e5 + 5;

typedef pair<lld, lld> pii;
lld gcd(lld a, lld b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
lld power(lld x, lld y) 
{ 
    lld res = 1; 
    while (y > 0) { 
       
        if (y & 1) 
            res = (res * x) % MOD; 
        y = y >> 1; 
        x = (x * x) % MOD; 
    } 
    return res; 
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lld t;
    cin>>t;
    while(t--)
    {
        lld n,ans=0;
        cin>>n;
        lld x[2*n+1]={},a[n];
    
        rep(i,0,n)
        {cin>>a[i];
            x[a[i]]=i+1;
        }
         rep(i,2,2*n+1)
            {
                {
                lld j=1;
                while (j*j<i) {
                    if(i%j==0)
                    {
                       if(x[j]!=0&&x[i/j]!=0&&x[j]+x[i/j]==i)
                       {ans++;
                     //  cout<<j<<" "<<i/j<<" "<<i<<endl;
                       }
                    }
                	j++; 
                
                }}
                
            }
        cout<<ans<<endl;
            
    }
    
    
    return 0;
}
