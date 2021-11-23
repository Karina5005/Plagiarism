#include <cstdio>
#include <algorithm>
using namespace std;
long long a[200005];
long long d[200005];
long long st[200005][21];
int lg[200005];
int t,n;
long long gcd(long long a,long long b)
{
    /* 'if' begin */
    if(b==0)
        /* 'if' inside */
        return a;
    return gcd(b,a%b);
}
long long query(int l,int r)
{
    int x=lg[r-l+1];
    return gcd(st[l][x],st[r-(1<<x)+1][x]);
}
bool check(int x)
{
    /* 'if' begin */
    if(x==0)
        /* 'if' inside */
        return true;
    for(int i=1;i+x-1<=n-1;i++)
        /* 'for' inside */
        /* 'if' begin */
        if(query(i,i+x-1)!=1)
            /* 'if' inside */
            return true;
    return false;
}
int binaryanswer(int l,int r)
{
    /* 'if' begin */
    if(l==r)
        /* 'if' inside */
        return l;
    /* 'if' begin */
    if(r-l==1)
    /* 'if' inside */
    {
        /* 'if' begin */
        if(check(r))
            /* 'if' inside */
            return r;
        return l;
    }
    int mid=(l+r)/2;
    /* 'if' begin */
    if(check(mid))
        /* 'if' inside */
        return binaryanswer(mid,r);
    else return binaryanswer(l,mid-1);
}
int main()
{
    lg[1]=0;
    for(int i=2;i<=200000;i++)
        /* 'for' inside */
        lg[i]=lg[i/2]+1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            /* 'for' inside */
            scanf("%lld",&a[i]);
        for(int i=1;i<=n-1;i++)
            /* 'for' inside */
            d[i]=abs(a[i+1]-a[i]);
        for(int i=1;i<=n-1;i++)
            /* 'for' inside */
            st[i][0]=d[i];
        for(int i=1;i<=20;i++)
            /* 'for' inside */
            for(int j=1;j+(1<<i)-1<=n-1;j++)
                /* 'for' inside */
                st[j][i]=gcd(st[j][i-1],st[j+(1<<(i-1))][i-1]);
        printf("%d\n",binaryanswer(0,n-1)+1);
    }
    return 0;
}