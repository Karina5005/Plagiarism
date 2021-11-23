#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long uLL;
typedef pair<int,int> pii;
typedef pair<LL,LL> pLL;
typedef pair<double,double> pdd;
typedef complex<double> comp;
const int N=1e3+5;
const int M=1e4+5;
const int inf=0x3f3f3f3f;
const int mod=998244353;
const double eps=1e-13;
const double pi=acos(-1.0);
#define ls (i<<1)
#define rs (i<<1|1)
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define mk make_pair
#define mem(a,b) memset(a,b,sizeof(a))
LL read()
{
    LL x=0,t=1;
    char ch;
    for ( ; (ch=getchar())<'0'||ch>'9'; ) 
if(ch=='-') t=-1;
    for ( ; ch>='0'&&ch<='9'; ) 
{ x=(x<<3)+(x<<1)+ch-'0'; ch=getchar(); }
    return x*t;
}
LL f[N][N][2],ans;
int a[N][N];
int main()
{
    int n=read(),m=read(),q=read();
    {
    int i=1;
    for ( ; i<=n; ) 
{
        {
        int j=1;
        for ( ; j<=m; ) 
{
            f[i][j][0]=f[i][j-1][1]+1,f[i][j][1]=f[i-1][j][0]+1,
            ans+=f[i][j][0]+f[i][j][1]-1;
            j++; 
            
            }}
    	i++; 
    
    }}
    //printf("%lld\n",ans);
    for ( ; q--; ) 
{
        int x=read(),y=read();
        int t1=0,t2=0,t3=0,t4=0;
        {
        int i=x,j=y;
        for ( ; i<=n&&j<=m; ) 
{
            if((i!=x||j!=y)&&a[i][j]) break;
            t1++;
        	(t1&1)?i++:j++; 
        
        }}
        {
        int i=x,j=y;
        for ( ; i&&j; ) 
{
            if((i!=x||j!=y)&&a[i][j]) break;
            t2++;
        	(t2&1)?j--:i--; 
        
        }}
        {
        int i=x,j=y;
        for ( ; i<=n&&j<=m; ) 
{
            //printf("%d ,%d\n",i,j);
            if((i!=x||j!=y)&&a[i][j]) break;
            t3++;
        	(t3&1)?j++:i++; 
        
        }}
        {
        int i=x,j=y;
        for ( ; i&&j; ) 
{
            if((i!=x||j!=y)&&a[i][j]) break;
            t4++;
        	(t4&1)?i--:j--; 
        
        }}
//        printf("%d %d %d %d\n",t1,t2,t3,t4);
//        for(int i=1;i<=n;i++)
//            for(int j=1;j<=m;j++)
//                printf("%d%c",a[i][j],j==m?'\n':' ');
        if(!(a[x][y]==0)) {
            ans+=t1*t2,ans+=t3*t4;
            ans--;
        }
        else {
            ans-=t1*t2,ans-=t4*t3;
            ans++;
        }
        a[x][y]^=1;
        std::cout << ans << "\n";
    }
    return 0;
}
