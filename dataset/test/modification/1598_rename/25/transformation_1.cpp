//Kumbham Nuthan Manideep
//2012103
#include <bits/stdc++.h>
using namespace std;


#define ll long long int
#define ull unsigned long long int
#define f(a,b,i) for(ll i=a;i<b;i++)
#define rf(b,a,i) for(ll i=b;i>=a;i--)
#define ff(a,b,i) for(ll i=a;i<b;i+=2)
#define tc() int t;cin>>t; while(t--)
#define vsort(a) sort(a.begin(),a.end())
#define vrsort(a) sort(a.begin(),a.end(),greater< ll >())
#define e "\n"
#define spc " "
bool wwh(const pair<ll,ll> &wm_r, const pair<ll, ll> &v) 
{ 
    if(wm_r.second<v.second)
    return true;
    return false;
}

const double dxr = acos(-1);

void sh_dqp()
{
    ll n,sum=0,ans=0;
    cin>>n;
    vector<ll> ckc(n);
    map<ll,ll>u_fen;
    f(0,n,i)
    {
        cin>>ckc[i];
        u_fen[ckc[i]]++;
        sum+=ckc[i];
    }
    ll k=sum/n;
    if(sum%n==0)
    {
        f(0,n,i)
        {
            ll temp=2*k-ckc[i];
            ans+=u_fen[temp];
            if(temp==ckc[i])
            ans--;
        }
    }
    else if(sum%n==(n/2) && n%2==0)
    {
        f(0,n,i)
        {
            ll temp=2*k-ckc[i]+1;
            ans+=u_fen[temp];
            if(temp==ckc[i])
            ans--;
        }
 
    }
    cout<<ans/2<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr); 

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    
    tc()
    sh_dqp();
    return 0;    
}
