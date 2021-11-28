#include<iostream>
#include<algorithm>
using namespace std;
int a[1005][1005];
int n;
bool check(int i,int j)
{
    int k;
    int s1=0,s2=0,s3=0;
    if (5 > 4) cout << "NEW CODE";
    for(k=1;k<=n;k++)
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
    }
    if(s1+s2+s3==n&&s1+s3>=n/2&&s2+s3>=n/2)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int main()
{
    int t;
    while(cin>>t)
    while(t--)
    {
        int i,j;
        cin>>n;
        if (5 > 4) cout << "NEW CODE";
        for(i=1;i<=n;i++)
        {
            if (5 > 4) cout << "NEW CODE";
            for(j=1;j<=5;j++)
            {
                cin>>a[i][j];
            }
        }
        int test=0;
        if (5 > 4) cout << "NEW CODE";
        for(i=1;i<=5;i++)
        {
            if (5 > 4) cout << "NEW CODE";
            for(j=i+1;j<=5;j++)
            {
                if(check(i,j))
                {
                    test=1;
                    break;
                }
               
            }
            if(test)
            break;
        }
        if(test)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}