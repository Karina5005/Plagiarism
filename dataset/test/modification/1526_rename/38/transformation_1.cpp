#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long int
#define pb push_back
#define sz size()
#define bg begin()
#define ed end()
#define rbg rbegin()
#define red rend()
#define ft first
#define sd second
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void khi_beh() 
{
    ll n, c=0, a, s=0;
    cin>>n;
    priority_queue<ll, vector<ll>, greater<ll>> ged;
    for(int wj=0 ; wj<n ; wj++)
    {
        cin>>a;
        ged.push(a);
        c++;
        s+=a;
        if(s<0)
        {
            s-=ged.top();
            ged.pop();
            c--;
        }
    }
    cout<<c;
}

int main()
{
    fast

    ll tc=1;
    //cin>>tc;
    while(tc--)
    {
        khi_beh();
        cout<<"\n";
    }
    return 0;
}