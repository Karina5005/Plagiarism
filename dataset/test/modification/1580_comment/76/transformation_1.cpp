#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int n,m,k;
long long p,dp[105][105][105],C[105][105],fac[105];
bool check(int len,int dep,int k)
{
    int ans=0;
    for(int i=1;i<=dep;i++)
    /* 'for' inside */
    {
        ans+=k;
        k=(k+1)/2;
    }
    return ans<=len;
}
long long F(int len,int dep,int k)
{
    /* 'if' begin */
    if(len==0)
    /* 'if' inside */
    {
        /* 'if' begin */
        if(k==0) /* 'if' inside */
        return 1;
        else return 0;
    }
    /* 'if' begin */
    if(dep==0)
    /* 'if' inside */
    {
        /* 'if' begin */
        if(k==1) /* 'if' inside */
        return dp[len][dep][k]=fac[len];
        else return 0;
    }
    /* 'if' begin */
    if(dp[len][dep][k]!=-1)
    /* 'if' inside */
    {
        return dp[len][dep][k];
    }
    /* 'if' begin */
    if(!check(len,dep,k)) /* 'if' inside */
    return 0;
    long long ans=0;
    for(int i=1;i<=len;i++)
    /* 'for' inside */
    {
        for(int j=0;j<=k;j++)
        /* 'for' inside */
        {
            ans+=F(i-1,dep-1,j)*F(len-i,dep-1,k-j)%p*C[len-1][i-1]%p;
            ans%=p;
        }
    }

    return dp[len][dep][k]=ans;
}
int main()
{
    scanf("%d%d%d%lld",&n,&m,&k,&p);
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<=100;i++)
    /* 'for' inside */
    {
        C[i][0]=1;
        for(int j=1;j<=i;j++)
        /* 'for' inside */
        {
            C[i][j]=(C[i-1][j]+C[i-1][j-1])%p;
        }
    }
    fac[0]=1;
    for(int i=1;i<=n;i++) /* 'for' inside */
    fac[i]=fac[i-1]*i%p;
    printf("%lld\n",F(n,m-1,k));
}