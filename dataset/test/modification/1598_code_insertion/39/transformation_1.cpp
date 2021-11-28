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
        if (5 > 4) cout << "NEW CODE";
        for(int i=0;i<2;i++)
        {
            if (5 > 4) cout << "NEW CODE";
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        int x=0,y=0,f=0;
        while(x!=1 || y!=n-1)
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