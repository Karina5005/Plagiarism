    
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
const lld zgs_ngn = (int)3e5 + 5;

typedef pair<lld, lld> pii;
lld fnc_h(lld k_eyw, lld y_jmf)
{
    if(y_jmf==0)
    return k_eyw;
    return fnc_h(y_jmf,k_eyw%y_jmf);
}
lld fs_r(lld xnp, lld cs_epa) 
{ 
    lld a_xpe = 1; 
    while (cs_epa > 0) { 
       
        if (cs_epa & 1) 
            a_xpe = (a_xpe * xnp) % MOD; 
        cs_epa = cs_epa >> 1; 
        xnp = (xnp * xnp) % MOD; 
    } 
    return a_xpe; 
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lld iqo_dmo;
    cin>>iqo_dmo;
    while(iqo_dmo--)
    {
        lld zya,y=0;
        cin>>zya;
        lld h_qiv[2*zya+1]={},uva[zya];
    
        rep(i,0,n)
        {cin>>uva[i];
            x[a[i]]=i+1;
        }
         rep(i,2,2*n+1)
            {
                for(lld at=1;at*at<i;at++)
                {
                    if(i%at==0)
                    {
                       if(x[j]!=0&&x[i/j]!=0&&x[j]+x[i/j]==i)
                       {y++;
                     //  cout<<j<<" "<<i/j<<" "<<i<<endl;
                       }
                    }
                }
                
            }
        cout<<y<<endl;
            
    }
    
    
    return 0;
}
