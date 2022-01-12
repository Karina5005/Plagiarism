#include<stdio.h>
bool check(int a,int b,int c){
    if(a+c==2*b) return 1;
    if(2*b-c>a&&(2*b-c)%a==0) return 1;
    if(2*b-a>c&&(2*b-a)%c==0) return 1;
    if((a+c)%(2*b)==0) return 1;
    return 0;
}
int main(void){
    /*freopen("1.in","r",stdin);
    freopen("1.out","w",stdout);*/
    int t;
    scanf("%d",&t);
    int a,b,c;
    while(t--){
        scanf("%d%d%d",&a,&b,&c);
        bool f=check(a,b,c);
        if(f) printf("YES\n");
        else printf("NO\n");
    }
}