#include<iostream>
#include<algorithm>
using namespace std;
int a[1005][1005];
int n;
bool check(int i,int j)
{
    int k;
    int s1=0,s2=0,s3=0;
    for(k=1;k<=n;k++)
    /* 'for' inside */
    {
        /* 'if' begin */
        if(a[k][i]==1&&a[k][j]==0)
        /* 'if' inside */
        {
            s1+=1;
        }
        else /* 'if' begin */
        if(a[k][i]==0&&a[k][j]==1)
        /* 'if' inside */
        {
            s2+=1;
        }
        else /* 'if' begin */
        if(a[k][i]==1&&a[k][j]==1)
        /* 'if' inside */
        {
            s3+=1;
        }
    }
    /* 'if' begin */
    if(s1+s2+s3==n&&s1+s3>=n/2&&s2+s3>=n/2)
    /* 'if' inside */
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
        for(i=1;i<=n;i++)
        /* 'for' inside */
        {
            for(j=1;j<=5;j++)
            /* 'for' inside */
            {
                cin>>a[i][j];
            }
        }
        int test=0;
        for(i=1;i<=5;i++)
        /* 'for' inside */
        {
            for(j=i+1;j<=5;j++)
            /* 'for' inside */
            {
                /* 'if' begin */
                if(check(i,j))
                /* 'if' inside */
                {
                    test=1;
                    break;
                }
               
            }
            /* 'if' begin */
            if(test)
            /* 'if' inside */
            break;
        }
        /* 'if' begin */
        if(test)
        /* 'if' inside */
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}
		  	  		  		 		 	  	  		 		 	