#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for ( ; t--; ) 
{
        int n;
        cin>>n;
        int a[n][5];
        {
        int i=0;
        for ( ; i<n; ) 
{
            {
            int j=0;
            for ( ; j<5; ) 
{
                cin>>a[i][j];
            	j++; 
            
            }}
        	i++; 
        
        }}
        bool flag=false;
        {
        int i=0;
        for ( ; i<4; ) 
{
            {
            int j=i+1;
            for ( ; j<5; ) 
{
                int first=0,second=0,common=0;
                 {
                 int k=0;
                 for ( ; k<n; ) 
{
                     if(a[k][i]==1 && a[k][j]==1)
                     {
                         common++;
                     }
                     else if(a[k][i]==1)
                     {
                         first++;
                     }
                     else if(a[k][j]==1)
                     {
                         second++;
                     }
                 	k++; 
                 
                 }}
                 first+=common;
                 second+=common;
                 int x=first+second-common;
                 if(first>=n/2 && second>=n/2 && x==n)
                 {
                     flag=true;
                     break;
                 }
            	j++; 
            
            }}
            if(flag==true)
            {
                break;
            }
        	i++; 
        
        }}
        if(!(flag==true))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}