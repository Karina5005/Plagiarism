#include<bits/stdc++.h>
using namespace std;
#define in inline
#define ll long long

in int read()
{
    int w=0,r=1;
    char ch=getchar();
    while(!isdigit(ch)){if(ch=='-')r=-1;ch=getchar();}
    while(isdigit(ch)){w=(w<<1)+(w<<3)+(ch^48);ch=getchar();}
    return w*r;
}

int T;
ll a[4];
void solve()
{
    a[1]=read();a[2]=read();a[3]=read();
    ll d=a[2]-a[1];
    if(a[2]+d>0&&(a[2]+d)%a[3]==0)
    {
        puts("YES");
        return ;
    }
    if((a[3]-a[1])%2==0)
    {
        d=(a[3]-a[1])>>1;
        if(a[1]+d>0&&(a[1]+d)%a[2]==0)
        {
            puts("YES");
            return ;
        }
    }
    d=a[3]-a[2];
    if(a[2]-d>0&&(a[2]-d)%a[1]==0)
    {
        puts("YES");
        return ;
    }
    puts("NO");
}
int main()
{
    // freopen("1.in","r",stdin);
    // freopen("1.out","w",stdout);
    T=read();
    while(T--)solve();
    return 0;
}