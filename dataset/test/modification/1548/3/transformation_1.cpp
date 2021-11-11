#include<cstdio>
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
#define ll long long 
#define ri int

int gcd(int x,int y){
    for(;y;x%=y,swap(x,y))/* 'for' inside */
    ;
    return x;
}
ll cnt[4][4][4],g[4][4];
int n;
int Mod(int x){
    while(x<0) x+=4;
    x&=3;
    return x;
}
int dec(int x,int y){return (x-=y)<0?x+4:x;}
int mul(int x,int y){return x*y&3;}
struct node
{
    int x,y;
}a[6005];
ll ans;
int main(){
    scanf("%d",&n);
    for(ri i=0;i<4;++i) /* 'for' inside */
    for(ri j=0;j<4;++j) /* 'for' inside */
    g[i][j]=gcd(i,j);
    for(ri i=1;i<=n;++i) /* 'for' inside */
    scanf("%d%d",&a[i].x,&a[i].y);
    for(ri i=1;i<=n;++i)/* 'for' inside */
    {
        memset(cnt,0,sizeof(cnt));
        for(ri j=1;j<=n;++j)
            /* 'for' inside */
            /* 'if' begin */
            if(i!=j) /* 'if' inside */
            cnt[a[j].x&3][a[j].y&3][gcd(abs(a[i].x-a[j].x),abs(a[i].y-a[j].y))&3]++;
        for(ri x=0;x<4;++x) /* 'for' inside */
        for(ri y=0;y<4;++y) /* 'for' inside */
        for(ri j=0;j<4;++j) /* 'for' inside */
        for(ri p=0;p<4;++p) /* 'for' inside */
        for(ri q=0;q<4;++q) /* 'for' inside */
        for(ri k=0;k<4;++k)/* 'for' inside */
        {
            /* 'if' begin */
            if((j^k)&1) /* 'if' inside */
            continue;/* 'if' begin */
            if((dec(x,p)&1)||(dec(y,q)&1)) /* 'if' inside */
            continue;
            int S=dec( mul( dec(x,a[i].x&3) , dec(q,a[i].y&3) ) , mul( dec(p,a[i].x&3) , dec(y,a[i].y&3) ) ),o=0;
            /* 'if' begin */
            if(S&1) /* 'if' inside */
            continue;
            o=(S>>1&1)^1;
            int u=Mod(j+k+g[dec(x,p)][dec(y,q)])>>1&1;
            /* 'if' begin */
            if(o^u)/* 'if' inside */
            {
                ll res=1;
                res*=cnt[x][y][j]--,res*=cnt[p][q][k]--;
                /* 'if' begin */
                if(j&1) /* 'if' inside */
                ans+=res*3;
                else ans+=res;
                cnt[x][y][j]++,cnt[p][q][k]++;
            }
        }
    }
    
    printf("%lld",ans/6);
}