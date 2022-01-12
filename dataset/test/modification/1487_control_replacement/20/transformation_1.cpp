#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool check(long double x)
{
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
int main()
{
    ll t;
    cin>>t;
    for ( ; t--; ) 
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
        {
        i=2;
        for ( ; i*i<=2*n-1; ) 
{
            if(i%2==1)
            cnt++;
        	i++; 
        
        }}
        cout<<cnt<<"\n";
    }
}