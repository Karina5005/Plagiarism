/*never stop learning
because life 
never stops teaching
                    ~Kirill Korshikov
*/
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define pb push_back
#define pob pop_back()
#define ms0(s) memset(s,0,sizeof s)
#define ff first
#define ss second
typedef long long int ll;
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define vvll vector<vector<ll>>
#define pll pair<ll,ll>
#define prq priority_queue<ll> 
#define psq priority_queue<ll,vector<ll>,greater<ll>>  
#define mp make_pair
#define vcc vector<char>
#define vss vector<string>
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define rep(i,n) for(ll i=0;i<n;i++)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ln cout<<endl
#define auto(i,m) for(auto i: m)
#define res(ans) cout<<ans
#define setbit(n) __builtin_popcountll(n)
const ll ty = 1e5 + 5;;

void m(){
	
	#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE

}

ll n_gtr(ll tlc_dc,ll q)
{
    if(q==0)
        return tlc_dc;
    else
        return n_gtr(tlc_dc,q%tlc_dc);
}

ll wx_xgr(ll x_bt,ll w_luy){
    return (x_bt/__gcd(x_bt,w_luy))*w_luy;
}

void mx(ll py[],ll zqz)
{
    ll vqe_m[zqz+2];
    ll djc[zqz+2];
    vqe_m[1]=py[0];
    for(ll wrs=2;wrs<=zqz;wrs++)
        vqe_m[wrs]=__gcd(vqe_m[wrs-1],py[wrs-1]);
    djc[zqz]=py[zqz-1];
    for(ll ve=zqz-1;ve>=1;ve--)
        djc[ve]=__gcd(djc[ve+1],py[ve-1]);
    ll tgv_lx=max(vqe_m[zqz-1],djc[2]);

    for(ll l_d=2;l_d<zqz;l_d++)
    {
        tgv_lx=max(tgv_lx,__gcd(vqe_m[l_d-1],djc[l_d+1]));
        //cout<<ans;
        
    }
    ll nzv_c=1,qc=0;
    for(ll see_dun=0;see_dun<zqz-1;see_dun++)
    {
        if(py[see_dun]%tgv_lx==0)
            qc+=py[see_dun]/tgv_lx;
        else
            nzv_c=0;
    }

    if(nzv_c==0)
        qc+=(py[zqz-1]/tgv_lx)+1;
    else
        qc+=1;
    cout<<qc;

}

void fj(ll og_uim,ll vhp)
{
    ll xyw_xh=1;
    ll yjz=og_uim;
    while(vhp>0)
    {
        if(vhp%2)
            xyw_xh=(xyw_xh*yjz)%mod;
        yjz=(yjz*yjz)%mod;
        vhp=vhp/2;
    }
    cout<<xyw_xh;
}
 

int main(){
	m();

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    ll fu=1;
    cin>>fu;
    while(fu--)
    {
       //ll n,k=0,mx=1,w=0,ans=1,z=0,d,e=-1,sum=0,count=0,mx3=1,mx4=1;
        ll ar,kls_uh,y,cj,i_vrc=0,r=0,rg=0,b,xo=INT_MAX,qrb_gx=0,lzd=0;
        ll k,p;
        cin>>ar;
        // ll a[n];
        // vpll v;
        vll v(ar),v1(ar);
        // ll b[n];
        map<ll,ll>ovy,xps_qu;
        // string s,s1="";
        // set<ll>s;
        // cin>>s;
        // vcc v;
        rep(i,n)
        {
            cin>>v[i]>>v1[i];
            ovy[v[i]]++,xps_qu[v1[i]]++;
        }
        lzd=(ar*(ar-1)*(ar-2))/6;
        for(ll cgp=0;cgp<ar;cgp++)
        {
            lzd-=((ovy[v[cgp]]-1)*(xps_qu[v1[cgp]]-1));
        }
        cout<<lzd;
        ln;
        
    }
    return 0;
}



