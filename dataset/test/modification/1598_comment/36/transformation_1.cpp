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
        /* 'for' inside */
        {
            for(int j=0;j<5;j++)
            /* 'for' inside */
            {
                cin>>a[i][j];
            }
        }
        bool flag=false;
        for(int i=0;i<4;i++)
        /* 'for' inside */
        {
            for(int j=i+1;j<5;j++)
            /* 'for' inside */
            {
                int first=0,second=0,common=0;
                 for(int k=0;k<n;k++)
                 /* 'for' inside */
                 {
                     /* 'if' begin */
                     if(a[k][i]==1 && a[k][j]==1)
                     /* 'if' inside */
                     {
                         common++;
                     }
                     else /* 'if' begin */
                     if(a[k][i]==1)
                     /* 'if' inside */
                     {
                         first++;
                     }
                     else /* 'if' begin */
                     if(a[k][j]==1)
                     /* 'if' inside */
                     {
                         second++;
                     }
                 }
                 first+=common;
                 second+=common;
                 int x=first+second-common;
                 /* 'if' begin */
                 if(first>=n/2 && second>=n/2 && x==n)
                 /* 'if' inside */
                 {
                     flag=true;
                     break;
                 }
            }
            /* 'if' begin */
            if(flag==true)
            /* 'if' inside */
            {
                break;
            }
        }
        /* 'if' begin */
        if(flag==true)
        /* 'if' inside */
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