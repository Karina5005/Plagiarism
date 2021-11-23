    
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
const lld tlx_qav = (int)3e5 + 5;

typedef pair<lld, lld> pii;
lld l(lld dwq_u, lld fi)
{
    if(fi==0)
    return dwq_u;
    return l(fi,dwq_u%fi);
}
lld jii_f(lld ows_bks, lld x) 
{ 
    lld bgm_v = 1; 
    while (x > 0) { 
       
        if (x & 1) 
            bgm_v = (bgm_v * ows_bks) % MOD; 
        x = x >> 1; 
        ows_bks = (ows_bks * ows_bks) % MOD; 
    } 
    return bgm_v; 
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lld sn;
    cin>>sn;
    while(sn--)
    {
        lld d_mpo;
        cin>>d_mpo;
        lld n[d_mpo],z_z[d_mpo+1],wz=0;
        rep(i,0,n)
        {cin>>n[i];
        
            
        }
      //  cout<<ans<<endl;
        sort(n,n+d_mpo);
        wz=n[d_mpo-1];
        z_z[0]=0;
        rep(i,0,n)
        z_z[i+1]=z_z[i]+n[i];
        rep(i,1,n)
        {
            lld gx_as=lower_bound(n,n+d_mpo,n[i])-n-1;
            wz+=z_z[gx_as+1]-(gx_as+1)*n[i];
           // cout<<presum[ind+1]-(ind+1)*d[i]<<endl;
        }
        std::cout << wz << std::endl;
       
       
    }
    
    
    return 0;
}
