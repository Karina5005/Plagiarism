
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
bool sorta(const pair<ll,ll> &a, const pair<ll, ll> &b) 
{ 
    /* 'if' begin */
    if(a.second<b.second)
    /* 'if' inside */
    return true;
    return false;
}

const double PI = acos(-1);

void solve()
{
    ll n,sum=0,ans=0;
    cin>>n;
    vector<ll> a(n);
    map<ll,ll>mp;
    f(0,n,i)
    {
        cin>>a[i];
        mp[a[i]]++;
        sum+=a[i];
    }
    ll k=sum/n;
    /* 'if' begin */
    if(sum%n==0)
    /* 'if' inside */
    {
        f(0,n,i)
        {
            ll temp=2*k-a[i];
            ans+=mp[temp];
            /* 'if' begin */
            if(temp==a[i])
            /* 'if' inside */
            ans--;
        }
    }
    else /* 'if' begin */
    if(sum%n==(n/2) && n%2==0)
    /* 'if' inside */
    {
        f(0,n,i)
        {
            ll temp=2*k-a[i]+1;
            ans+=mp[temp];
            /* 'if' begin */
            if(temp==a[i])
            /* 'if' inside */
            ans--;
        }
 
    }
    cout<<ans/2<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr); 

    
    
    tc()
    solve();
    return 0;    
}
