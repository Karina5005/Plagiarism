
#include <bits/stdc++.h>
using namespace std;
#define start ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long int
#define ld long double
#define endl "\n"
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
#define pb push_back
#define inarr(a,b,c) for(long long int i=b;i<c;i++) cin>>a[i];
#define all(x) x.begin(),x.end()
#define w(t) int t;cin>>t;while(t--)

void solve()
{
    int n,k;
    cin>>n>>k;
    int z=1;
    for(int i=1;i<=n;i++)
    /* 'for' inside */
    {
        /* 'if' begin */
        if(z==1)
        /* 'if' inside */
        {
            cout<<"a";
            z=2;
        }
        else /* 'if' begin */
        if(z==2)
        /* 'if' inside */
        {
            cout<<"b";
            z=3;
        }
        else /* 'if' begin */
        if(z==3)
        /* 'if' inside */
        {
            cout<<"c";
            z=1;
        }
    }
    cout<<endl;
}

 
int main()
{
    start;
    w(t)
    {
        solve();
    }
    return 0;
}
