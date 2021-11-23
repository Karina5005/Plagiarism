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
const ll u = 1e5 + 5;;

void r(){
	
	#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE

}

ll rq_q(ll uip_hz,ll euj_zfr)
{
    if(euj_zfr==0)
        return uip_hz;
    else
        return rq_q(uip_hz,euj_zfr%uip_hz);
}

ll rlz(ll kg_r,ll r){
    return (kg_r/__gcd(kg_r,r))*r;
}

void b_e(ll i[],ll gqa_ik)
{
    ll e[gqa_ik+2];
    ll opt_uo[gqa_ik+2];
    e[1]=i[0];
    for(ll z_yiv=2;z_yiv<=gqa_ik;z_yiv++)
        e[z_yiv]=__gcd(e[z_yiv-1],i[z_yiv-1]);
    opt_uo[gqa_ik]=i[gqa_ik-1];
    for(ll dh_xqm=gqa_ik-1;dh_xqm>=1;dh_xqm--)
        opt_uo[dh_xqm]=__gcd(opt_uo[dh_xqm+1],i[dh_xqm-1]);
    ll si_yg=max(e[gqa_ik-1],opt_uo[2]);

    for(ll tr_e=2;tr_e<gqa_ik;tr_e++)
    {
        si_yg=max(si_yg,__gcd(e[tr_e-1],opt_uo[tr_e+1]));
        //cout<<ans;
        
    }
    ll m_b=1,mb_jr=0;
    for(ll dtv=0;dtv<gqa_ik-1;dtv++)
    {
        if(i[dtv]%si_yg==0)
            mb_jr+=i[dtv]/si_yg;
        else
            m_b=0;
    }

    if(m_b==0)
        mb_jr+=(i[gqa_ik-1]/si_yg)+1;
    else
        mb_jr+=1;
    cout<<mb_jr;

}

void c(ll d,ll q)
{
    ll b_pj=1;
    ll i=d;
    while(q>0)
    {
        if(q%2)
            b_pj=(b_pj*i)%mod;
        i=(i*i)%mod;
        q=q/2;
    }
    cout<<b_pj;
}
 

int main(){
	r();

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    ll tn=1;
    cin>>tn;
    while(tn--)
    {
       //ll n,k=0,mx=1,w=0,ans=1,z=0,d,e=-1,sum=0,count=0,mx3=1,mx4=1;
        ll r,fx,nqy,n,mzp=0,yl_ql=0,pad_chw=0,rx_s,m=INT_MAX,lml=0,dnb_uri=0;
        ll j_py,ppc_jx;
        cin>>r;
        // ll a[n];
        // vpll v;
        vll v(r);
        // ll b[n];
        map<ll,ll>nq;
        // string s,s1="";
        // set<ll>s;
        // cin>>s;
        // vcc v;
        rep(i,n)
        {
            cin>>v[i];
            lml+=v[i];
            nq[v[i]]++;
        }
        sort(all(v));
        if(lml%r==0)
        {
            j_py=lml/r;//4
            ll bot=0;
            ll mcg_cqk=-1;
            // for(ll i=0;i<x;i++)
            while(v[bot]<j_py)
            {
                if(mcg_cqk!=v[bot])
                {
                    dnb_uri+=nq[v[bot]]*nq[2*j_py-v[bot]];
                    mcg_cqk=v[bot];
                }
                bot++;
            }
            dnb_uri+=(nq[j_py]*(nq[j_py]-1))/2;
        }
        else if((lml*2)%r==0)
        {
            j_py=lml/r;
            ll n=0;
            ll tgw_xb=-1;
            // for(ll i=0;i<=x;i++)
            while(v[n]<=j_py)
            {
                if(tgw_xb!=v[n])
                {
                    dnb_uri+=nq[v[n]]*nq[2*j_py+1-v[n]];
                    tgw_xb=v[n];
                }
                
                n++;
            }

        }
        cout<<dnb_uri;
        ln;
        
    }
    return 0;
}



