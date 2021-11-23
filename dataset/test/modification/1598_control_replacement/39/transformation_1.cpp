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
        char arr[2][n];
        {
        int i=0;
        for ( ; i<2; ) 
{
            {
            int j=0;
            for ( ; j<n; ) 
{
                cin>>arr[i][j];
            	j++; 
            
            }}
        	i++; 
        
        }}
        int x=0,y=0,f=0;
        for ( ; x!=1 || y!=n-1; ) 
{
            if(x==0 && y<n-1)
            {
                if(arr[x][y+1]=='1' && arr[x+1][y+1]=='1' && arr[x+1][y]=='1')
                {
                    cout<<"NO\n";
                    f=1;
                    break;
                }
                else
                {
                    if(arr[x+1][y]=='0')
                    {
                        x++;
                    }
                    else if(arr[x+1][y+1]=='0')
                    {
                        x++;
                        y++;
                    }
                    else
                    {
                        y++;
                    }
                }
            }
            else if(x==1 && y<n-1)
            {
                if(arr[x][y+1]=='1' && arr[x-1][y+1]=='1' /*&& arr[x-1][y]=='1'*/)
                {
                    cout<<"NO\n";
                    f=1;
                    break;
                }
                else
                {
                    // if(arr[x-1][y]=='0')
                    // {
                    //     x--;
                    // }
                    if(arr[x-1][y+1]=='0')
                    {
                        x--;
                        y++;
                    }
                    else if(arr[x][y+1]=='0')
                    {
                        y++;
                    }
                }
            }
            else
            {
                x++;
            }
        }
        if(f==0)
        {
            cout<<"YES\n";
        }
    }
    return 0;
}