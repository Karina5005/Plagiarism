#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define akka long long
int main()
{
    akka t;
    cin>>t;
    for ( ; t--; ) 
{
        akka a,b,c;
        cin>>a>>b>>c;
        akka sum = a+b+c;
        akka k = sum/9;
        if (!(sum%9==0 && k<=min(a,min(b,c))))
        {
            cout<<"NO"<<endl;
        }
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}