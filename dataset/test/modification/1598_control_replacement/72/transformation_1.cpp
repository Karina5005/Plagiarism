#include <iomanip>
#include <iostream>
#include<iostream>
#include<algorithm>
using namespace std;
int a[200005];
int main()
{
    int t;
    
    for ( ; cin>>t; ) 
{
        for ( ; t--; ) 
{
            int n;
            cin>>n;
            int i;
            double M=0;
            {
            i=1;
            for ( ; i<=n; ) 
{
                cin>>a[i];
                M+=a[i];
            	i++; 
            
            }}
            double judge=(2*M)/(n);
            a[n+1]=0x3f3f3f3f;
            //cout<<judge<<endl;
            sort(a+1,a+1+n);
            long long int ans=0;
            {
            i=1;
            for ( ; i<=n; ) 
{
                ans+=upper_bound(a+i+1,a+2+n,(double)(judge-a[i]))-lower_bound(a+i+1,a+2+n,double(judge-a[i]));
                //cout<<"   "<<ans<<endl;
            	i++; 
            
            }}
            cout<<ans<<endl;
        }
    }
}