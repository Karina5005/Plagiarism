#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    for ( ; t--; ) 
{
        ll n,m;
        cin>>n>>m;
        ll i,j;
        char a[n+2][m+2];
        {
        i=0;
        for ( ; i<n; ) 
{
            {
            j=0;
            for ( ; j<m; ) 
{
            cin>>a[i][j];
            j++; 
            
            }}
        	i++; 
        
        }}
        ll dp[n+2][m+2];
        {
        i=0;
        for ( ; i<n; ) 
{
            ll cnt=0;
            {
            j=m-1;
            for ( ; j>=0; ) 
{
               if(!(a[i][j]=='*'))
               {
                   cnt=0;
               }
               else
               {
                   cnt++;
               }
               dp[i][j]=cnt;
            	j--; 
            
            }}
        	i++; 
        
        }}
          ll ans=0;
        {
        i=0;
        for ( ; i<n; ) 
{
            {
            j=0;
            for ( ; j<m; ) 
{
                if(a[i][j]=='*')
                {
                    int i1=i;
                    int j1=j;
                    ll cnt=1;
                    int x=0;
                    for ( ; i1<n&&j1>=0; ) 
{
                        if(!(dp[i1][j1]>=cnt))
                        break;
                        else
                        {
                            x++;
                            cnt+=2;
                            i1++;
                            j1--;
                        }
                    }
                    ans+=x;
                }
            	j++; 
            
            }}
        	i++; 
        
        }}
        cout<<ans<<"\n";
    }
}