#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mod (ll)(1e9+7)
 
ll mult(ll a,ll b, ll p=mod){return ((a%p)*(b%p))%p;}
ll add(ll a, ll b, ll p=mod){return (a%p + b%p)%p;}
ll neg(ll a,ll p=mod){return (p-(a%p))%p;}
ll sub(ll a,ll b,ll p=mod){return add(a,neg(b));}
ll fpow(ll x, ll y)  
{  
    ll res = 1;     
    x = x % mod; 
    if (x == 0) return 0; 
    while (y > 0)  
    {  
        if (y & 1LL)  
            res = (res*x) % mod;  
        y = y>>1LL;
        x = (x*x) % mod;  
    }  
    return res;  
}  
ll inv(ll a, ll p = mod) {return fpow(a, p - 2);}
 
ll findfactors(ll n)
{
    ll c=0;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
                c++;
            else 
                c+=2;
        }
    }
    return c;
}
void solve()
{
    ll a,b,c,n;
    string s;
    cin>>a>>b>>c;
    
    if(b-a == c-b)
    {
        cout<<"yes"<<endl;
    }
    else if((c+a)%(2*b)==0)
    {
        cout<<"yes"<<endl;
    }
    else if((2*b-a)%c==0 && 2*b-a>0)
    {
        cout<<"YES"<<endl;
    }
    else if((2*b-c)%a==0 && 2*b-c>0)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
}
int main() 
{
	// your code goes here 
	fio;
	ll t;
 	cin>>t;
	for(ll tc=1;tc<=t;tc++)
	{
	    solve();
	}
}