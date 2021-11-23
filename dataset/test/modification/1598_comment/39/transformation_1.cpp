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
        char arr[2][n];
        for(int i=0;i<2;i++)
        /* 'for' inside */
        {
            for(int j=0;j<n;j++)
            /* 'for' inside */
            {
                cin>>arr[i][j];
            }
        }
        int x=0,y=0,f=0;
        while(x!=1 || y!=n-1)
        {
            /* 'if' begin */
            if(x==0 && y<n-1)
            /* 'if' inside */
            {
                /* 'if' begin */
                if(arr[x][y+1]=='1' && arr[x+1][y+1]=='1' && arr[x+1][y]=='1')
                /* 'if' inside */
                {
                    cout<<"NO\n";
                    f=1;
                    break;
                }
                else
                {
                    /* 'if' begin */
                    if(arr[x+1][y]=='0')
                    /* 'if' inside */
                    {
                        x++;
                    }
                    else /* 'if' begin */
                    if(arr[x+1][y+1]=='0')
                    /* 'if' inside */
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
            else /* 'if' begin */
            if(x==1 && y<n-1)
            /* 'if' inside */
            {
                if(arr[x][y+1]=='1' && arr[x-1][y+1]=='1' 
                {
                    cout<<"NO\n";
                    f=1;
                    break;
                }
                else
                {
                    
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
        /* 'if' begin */
        if(f==0)
        /* 'if' inside */
        {
            cout<<"YES\n";
        }
    }
    return 0;
}