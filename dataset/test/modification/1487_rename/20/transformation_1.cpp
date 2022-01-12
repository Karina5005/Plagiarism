#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool yp_chu(long double b)
{
    if (b >= 0) {
 
        long long l = sqrt(b);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (l * l == b);
    }
    // else return false if n<0
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
    /*    for(i=2;i<=n;i++)
        {
            ll val = 2*i-1;
            if(val%2==1)
            {
                if(check((long double)val))cnt++;
            }
        }*/
      //  cout<<cnt<<"\n";
        cnt=0;
        for(i=2;i*i<=2*n-1;i++)
        {
            if(i%2==1)
            cnt++;
        }
        cout<<cnt<<"\n";
    }
}