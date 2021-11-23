#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {


cin.tie(nullptr); cout.tie(nullptr);

int t;cin>>t;
for ( ; t--; ) 
{
    int n,i,j,k,c=0,d=0,e=0,h=0;cin>>n;
    int a[n][5];
    {
    i=0;
    for ( ; i<n; ) 
{
        {
        j=0;
        for ( ; j<5; ) 
{
        cin>>a[i][j];
        j++; 
        
        }}
    	i++; 
    
    }}
    {
    i=0;
    for ( ; i<4; ) 
{
        {
        j=i+1;
        for ( ; j<5; ) 
{
            c=0;d=0;e=0;
            {
            k=0;
            for ( ; k<n; ) 
{
                if(a[k][i]==1 || a[k][j]==1)c++;
                if(a[k][i]==1)d++;
                if(a[k][j]==1)e++;
            	k++; 
            
            }}
            if(c==n && d>=n/2 && e>=n/2){h=1;break;}
        	j++; 
        
        }}if(h==1)break;
    	i++; 
    
    }}
    if(!(h==1))cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
    return 0;
}