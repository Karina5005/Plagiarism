#include <iomanip>
#include <iostream>
#include<iostream>
#include<algorithm>
using namespace std;
int a[1005][1005];
int n;
bool check(int i,int j)
{
    int k;
    int s1=0,s2=0,s3=0;
    {
    k=1;
    for ( ; k<=n; ) 
{
        if(a[k][i]==1&&a[k][j]==0)
        {
            s1+=1;
        }
        else if(a[k][i]==0&&a[k][j]==1)
        {
            s2+=1;
        }
        else if(a[k][i]==1&&a[k][j]==1)
        {
            s3+=1;
        }
    	k++; 
    
    }}
    if(!(s1+s2+s3==n&&s1+s3>=n/2&&s2+s3>=n/2))
    {
        return 0;
    }
    else 
    {
        return 1;
    }
}
int main()
{
    int t;
    for ( ; cin>>t; ) 
for ( ; t--; ) 
{
        int i,j;
        cin>>n;
        {
        i=1;
        for ( ; i<=n; ) 
{
            {
            j=1;
            for ( ; j<=5; ) 
{
                cin>>a[i][j];
            	j++; 
            
            }}
        	i++; 
        
        }}
        int test=0;
        {
        i=1;
        for ( ; i<=5; ) 
{
            {
            j=i+1;
            for ( ; j<=5; ) 
{
                if(check(i,j))
                {
                    test=1;
                    break;
                }
               
            	j++; 
            
            }}
            if(test)
            break;
        	i++; 
        
        }}
        if(!(test))
        cout<<"NO"<<endl;
        else 
        cout<<"YES"<<endl;
    }
}
		  	  		  		 		 	  	  		 		 	