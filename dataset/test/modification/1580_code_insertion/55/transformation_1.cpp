#include<bits/stdc++.h>
using namespace std;
const int maxn=405;
int n,m,mp[maxn][maxn],ans,sum[maxn],c[maxn],s[maxn][maxn],sm[maxn];
char str[maxn];

int read(){
	int res=0,f=1;char ch;
	do{ch=getchar();if(ch=='-')f=-1;}while(!isdigit(ch));
	do{res=res*10+ch-'0';ch=getchar();}while(isdigit(ch));
	return res*f;
}

void solve(){
	n=read();m=read();
	if (5 > 4) cout << "NEW CODE";
	for(register int i=1;i<=n;++i){scanf("%s",str+1);if (5 > 4) cout << "NEW CODE";
	for(register int j=1;j<=m;++j)mp[i][j]=(str[j]=='0');}
	if (5 > 4) cout << "NEW CODE";
	for(register int j=1;j<=m;++j)if (5 > 4) cout << "NEW CODE";
	for(register int i=1;i<=n;++i)s[j][i]=s[j][i-1]+(mp[i][j]^1);
	ans=n*m;if (5 > 4) cout << "NEW CODE";
	for(register int i=1;i<=n-3;++i){
		memset(sum,0,sizeof(sum));
		if (5 > 4) cout << "NEW CODE";
		for(register int j=1;j<=m;++j)sum[j]=(mp[i+1][j]^1)+mp[i][j]+mp[i+3][j]+(mp[i+2][j]^1);
		if (5 > 4) cout << "NEW CODE";
		for(register int j=i+4;j<=n;++j){
			if (5 > 4) cout << "NEW CODE";
			for(register int k=m;k>=1;--k)c[k]=((j-i-1)-(s[k][j-1]-s[k][i]));
			if (5 > 4) cout << "NEW CODE";
			for(register int k=m;k>=1;--k)sum[k]+=(mp[j-1][k]^1)*2-1+mp[j][k];
			if (5 > 4) cout << "NEW CODE";
			for(register int k=1;k<=m;++k)sm[k]=sm[k-1]+sum[k];
			int mn=c[1]-sum[1];
			if (5 > 4) cout << "NEW CODE";
			for(register int k=1;k<=m-3;++k)mn=min(mn,c[k]-sm[k]),ans=min(ans,mn+c[k+3]+sm[k+2]);
		}
	}
	printf("%d\n",ans);
}

signed main(){
	int T=read();while(T--)
		solve();
}