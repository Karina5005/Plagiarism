    
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
const lld e_y = (int)3e5 + 5;

typedef pair<lld, lld> pii;
lld qap_qyc(lld vea, lld xh_wr)
{
    if(xh_wr==0)
    return vea;
    return qap_qyc(xh_wr,vea%xh_wr);
}
lld ae(lld jba_k, lld i) 
{ 
    lld am = 1; 
    while (i > 0) { 
       
        if (i & 1) 
            am = (am * jba_k) % MOD; 
        i = i >> 1; 
        jba_k = (jba_k * jba_k) % MOD; 
    } 
    return am; 
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lld a;
    cin>>a;
    while(a--)
    {
        lld lvv;
        cin>>lvv;
        lld agc[lvv];
        if(lvv%2==1)
        {
            agc[0]=3;
            agc[1]=1;
            agc[2]=2;
            rep(i,3,n)
            {
                agc[i]=i+2;
                agc[i+1]=i+1;
                i++;
            }
        }
        else
        {
            rep(i,0,n)
            {
                agc[i]=i+2;
                agc[i+1]=i+1;
                i++;
            }
            
        }
        rep(i,0,n)
        cout<<agc[i]<<" ";
        cout<<endl;
    }
    
    
    return 0;
}
