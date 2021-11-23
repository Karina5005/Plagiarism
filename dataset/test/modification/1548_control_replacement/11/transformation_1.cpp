#include<cstdio>
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
#define ll long long 
#define ri int
/*
åªéè¦ç¥éä¸æ¡è¾¹ä¸çæ»ç¹æ°  

*/
ll cnt[4][4],rcnt[4][4],ans,g[4][4];
int n;
int Mod(int x){
    while(x<0) x+=4;
    x&=3;
    return x;
}
int gcd(int x,int y){
    while (y) {
    ;
    x%=y,swap(x,y); 
    }
    return x;
}
int main(){
    scanf("%d",&n);
    {
    ri i=1,x,y;
    while (i<=n) {
        scanf("%d%d",&x,&y);
        cnt[x&3][y&3]++;
    	++i; 
    
    }}
    {
    ri i=0;
    while (i<4) {
    {
    ri j=0;
    while (j<4) {
    g[i][j]=gcd(i,j);}
    ++j; 
    
    }
    ++i; 
    
    }}
    {
    ri i=0;
    while (i<4) {
    {
    ri j=0;
    while (j<4) {
    {
    ri x=0;
    while (x<4) {
    {
    ri y=0;
    while (y<4) {
    {
    ri p=0;
    while (p<4) {
    {
    ri q=0;
    while (q<4) {
        memcpy(rcnt,cnt,sizeof(rcnt));
        ll res=1;
        int o=0;
        o=Mod(o+g[Mod(i-x)][Mod(j-y)]);
        o=Mod(o+g[Mod(i-p)][Mod(j-q)]);
        o=Mod(o+g[Mod(p-x)][Mod(q-y)]);
        if(!o){
            res*=rcnt[i][j],rcnt[i][j]--;
            res*=rcnt[x][y],rcnt[x][y]--;
            res*=rcnt[p][q],rcnt[p][q]--;
            ans+=res;
        }
    	++q; 
    
    }}}}}}}
    ans/=6;
    printf("%lld",ans);
}