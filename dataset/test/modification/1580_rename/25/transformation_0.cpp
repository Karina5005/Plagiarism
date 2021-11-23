#include<bits/stdc++.h>
using namespace std;
int n,m,k,ceng[105]={0};
long long p,jie[105]={0};
long long dp[105][105][105]={0},cc[105][105]={0};
int main(){
    scanf("%d%d%d%lld",&n,&m,&k,&p);
    jie[0]=jie[1]=1%p;
    for(int i=2;i<=n;i++){
        jie[i]=jie[i-1]*i%p;
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            for(int z=0;z<=k;z++){
                dp[i][j][z]=-1;
            }
        }
    }
    for(int i=1;i<=n;i++)cc[i][0]=cc[i][i]=1%p;
    for(int i=2;i<=n;i++){
        for(int j=1;j<i;j++){
            cc[i][j]=(cc[i-1][j-1]+cc[i-1][j])%p;
        }
    }
    for(int i=1;i<=n;i++){
        dp[1][i][i==m]=1%p;
        dp[0][i][0]=1%p;
    }
    ceng[0]=ceng[1]=0;
    for(int i=2;i<=3;i++)ceng[i]=1;
    for(int i=4;i<=7;i++)ceng[i]=2;
    for(int i=8;i<=15;i++)ceng[i]=3;
    for(int i=16;i<=31;i++)ceng[i]=4;
    for(int i=32;i<=63;i++)ceng[i]=5;
    for(int i=64;i<=102;i++)ceng[i]=6;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=min(m-1,n-ceng[i]);j++){
            for(int zuo=0;zuo<i;zuo++){
                for(int k1=0;k1<=min(k,zuo);k1++){
                    for(int k2=0;k1+k2<=min(k,i);k2++){
                        if(dp[zuo][j+1][k1]>=0 && dp[i-1-zuo][j+1][k2]>=0){
                            dp[i][j][k1+k2+(j==m)]=max(dp[i][j][k1+k2+(j==m)],1ll*0);
                            dp[i][j][k1+k2+(j==m)]+=((dp[zuo][j+1][k1]*dp[i-1-zuo][j+1][k2])%p*cc[i-1][zuo]%p);
                            dp[i][j][k1+k2+(j==m)]%=p;
                        }
                    }
                }
            }
        }
        for(int j=min(m-1,n-ceng[i])+1;j<=n-ceng[i];j++)dp[i][j][j==m]=jie[i];
    }
    printf("%lld",max(dp[n][1][k],1ll*0));
    return 0;
}