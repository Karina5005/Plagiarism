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
    {
    int i=1;
    while (i+x-1<=n-1) {
        if(query(i,i+x-1)!=1)
            return true;
            i++; 
            
            }}
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
    if(!(check(mid)))
        return binaryanswer(l,mid-1);
    else return binaryanswer(mid,r);
}
int main()
{
    lg[1]=0;
    {
    int i=2;
    while (i<=200000) {
        lg[i]=lg[i/2]+1;
        i++; 
        
        }}
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        {
        int i=1;
        while (i<=n) {
            scanf("%lld",&a[i]);
            i++; 
            
            }}
        {
        int i=1;
        while (i<=n-1) {
            d[i]=abs(a[i+1]-a[i]);
            i++; 
            
            }}
        {
        int i=1;
        while (i<=n-1) {
            st[i][0]=d[i];
            i++; 
            
            }}
        {
        int i=1;
        while (i<=20) {
            {
            int j=1;
            while (j+(1<<i)-1<=n-1) {
                st[j][i]=gcd(st[j][i-1],st[j+(1<<(i-1))][i-1]);}
                j++; 
                
                }
                i++; 
                
                }}
        printf("%d\n",binaryanswer(0,n-1)+1);
    }
    return 0;
}