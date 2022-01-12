#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool check(long double x)
{
    /* 'if' begin */
    if (x >= 0) /* 'if' inside */
    {
 
        long long sr = sqrt(x);
         
        
        return (sr * sr == x);
    }
    
    return false;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll cnt=0;
    
        cnt=0;
        for(i=2;i*i<=2*n-1;i++)
        /* 'for' inside */
        {
            /* 'if' begin */
            if(i%2==1)
            /* 'if' inside */
            cnt++;
        }
        cout<<cnt<<"\n";
    }
}