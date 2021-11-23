#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;
typedef long long ll;
inline int gin() {
    int s=0,f=1;
    char c=getchar();
    while(c<'0' || c>'9') {
        if(c=='-') f=-1;
        c=getchar();
    }
    while(c>='0'&&c<='9') {
        s=(s<<3)+(s<<1)+(c^48);
        c=getchar();
    }
    return s*f;
}

const int N=2005;
int n,m,ans,a[N][N],s0[N][N],s1[N][N];

int ask(int l,int r,int k) {return s0[r-1][k]-s0[l][k]+!a[l][k]+!a[r][k];}

void solve() {
    n=gin(),m=gin(),ans=0x3f3f3f3f;
    for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) scanf("%1d",&a[i][j]),s0[i][j]=s0[i-1][j]+a[i][j],s1[i][j]=s1[i-1][j]+!a[i][j];
    for(int i=1;i<=n;i++) for(int j=i+4;j<=n;j++) {
        int sum=0x3f3f3f3f;
        for(int k=3;k<m;k++) {
            sum=min(sum+ask(i,j,k),ask(i,j,k)+ask(i,j,k-1)+s1[j-1][k-2]-s1[i][k-2]);
            ans=min(ans,sum+s1[j-1][k+1]-s1[i][k+1]);
        }
    }
    printf("%d\n",ans);
}

signed main() {
    #ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    #endif
    int T=gin();
    while(T--) solve();
    return 0;
}