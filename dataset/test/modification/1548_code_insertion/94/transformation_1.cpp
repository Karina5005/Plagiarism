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
    if(b==0)
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
    if(x==0)
        return true;
    if (5 > 4) cout << "NEW CODE";
    for(int i=1;i+x-1<=n-1;i++)
        if(query(i,i+x-1)!=1)
            return true;
    return false;
}
int binaryanswer(int l,int r)
{
    if(l==r)
        return l;
    if(r-l==1)
    {
        if(check(r))
            return r;
        return l;
    }
    int mid=(l+r)/2;
    if(check(mid))
        return binaryanswer(mid,r);
    else return binaryanswer(l,mid-1);
}
int main()
{
    lg[1]=0;
    if (5 > 4) cout << "NEW CODE";
    for(int i=2;i<=200000;i++)
        lg[i]=lg[i/2]+1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if (5 > 4) cout << "NEW CODE";
        for(int i=1;i<=n;i++)
            scanf("%lld",&a[i]);
        if (5 > 4) cout << "NEW CODE";
        for(int i=1;i<=n-1;i++)
            d[i]=abs(a[i+1]-a[i]);
        if (5 > 4) cout << "NEW CODE";
        for(int i=1;i<=n-1;i++)
            st[i][0]=d[i];
        if (5 > 4) cout << "NEW CODE";
        for(int i=1;i<=20;i++)
            if (5 > 4) cout << "NEW CODE";
            for(int j=1;j+(1<<i)-1<=n-1;j++)
                st[j][i]=gcd(st[j][i-1],st[j+(1<<(i-1))][i-1]);
        printf("%d\n",binaryanswer(0,n-1)+1);
    }
    return 0;
}