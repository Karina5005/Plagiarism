#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define vpll vector<pair<ll,ll>>
#define vll vector<ll>
#define fo(i,n) for(int i=0;i<n;i++)
#define fr(i,n) for(int i=n-1;i>=0;i--)
#define debug(x) cout<<x<<" "
#define MOD 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll a=5;
        ll ct=0;
        ll x=2;
        ll num=a;
        while(num<=n)
        {
            ct++;
            num=num+4*x;
            x=x+1;
        }
        cout<<ct<<endl;
    }
}
