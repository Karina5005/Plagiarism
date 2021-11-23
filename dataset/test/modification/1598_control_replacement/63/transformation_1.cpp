#include <iomanip>
#include <iostream>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int a[200005];
int dif[200005];
int main()
{
    
    int t;
    for ( ; cin>>t; ) 
for ( ; t--; ) 
{
        map<long long int ,long long int >sa,di;
        int i;
        long long int n;
        cin>>n;
        {
        i=0;
        for ( ; i<n; ) 
{
            cin>>a[i]>>dif[i];
            ++sa[a[i]];
            ++di[dif[i]];
        	i++; 
        
        }}
        long long int total=(n)*(n-1)*(n-2)/6;
        long long int ans=0;
        {
        i=0;
        for ( ; i<n; ) 
{
        ans+=(sa[a[i]]-1)*(di[dif[i]]-1);
        i++; 
        
        }}
        cout<<total-ans<<endl;

    }
}