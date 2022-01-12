
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
 cin>>t;
    while(t--)
    {
         int a,b,c;
      cin>>a>>b>>c;
       int  k= (a+c)/2;
       int x=(2*b)-c;
       int y=(2*b)-a;
       //cout<<x%a<<" "<<a<<" "<<bool(x%a==0 && x>=a && x!=0)<<endl;
       //cout<<y%c<<" "<<c<<" "<<bool(y%c==0 && y>=c)<<endl;
        if(((a+c)%(2*b)==0) || ((2*b-c)%a==0 && 2*b>c) || ((2*b-a)%c==0 && 2*b>a))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}