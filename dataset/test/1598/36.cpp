#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][5];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<5;j++)
            {
                cin>>a[i][j];
            }
        }
        bool flag=false;
        for(int i=0;i<4;i++)
        {
            for(int j=i+1;j<5;j++)
            {
                int first=0,second=0,common=0;
                 for(int k=0;k<n;k++)
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
                 }
                 first+=common;
                 second+=common;
                 int x=first+second-common;
                 if(first>=n/2 && second>=n/2 && x==n)
                 {
                     flag=true;
                     break;
                 }
            }
            if(flag==true)
            {
                break;
            }
        }
        if(flag==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}