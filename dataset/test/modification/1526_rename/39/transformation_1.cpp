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

void ai() 
{
    ll n, c=0, a, s=0;
    cin>>n;
    priority_queue<ll, vector<ll>, greater<ll>> ddk;
    for(int j=0 ; j<n ; j++)
    {
        cin>>a;
        ddk.push(a);
        c++;
        s+=a;
        if(s<0)
        {
            s-=ddk.top();
            ddk.pop();
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
        ai();
        cout<<"\n";
    }
    return 0;
}