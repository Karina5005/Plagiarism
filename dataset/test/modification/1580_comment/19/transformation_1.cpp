#include <bits/stdc++.h>
#define reg register
#define fi first
#define se second
#define mp std::make_pair
#define pb push_back
typedef long long ll;
typedef unsigned long long ull;
template<class T> T dmax(T x,T y) { return x>y?x:y; }
template<class T> T dmin(T x,T y) { return x<y?x:y; }
int rd(){
	reg int x=0,f=0; reg char ch=getchar();
	while(!isdigit(ch)) (ch=='-')&&(f=1),ch=getchar();
	while(isdigit(ch)) x=(x<<1)+(x<<3)+(ch^48),ch=getchar();
	return f?-x:x;
}
const int MAXN=410;
int n,m,a[MAXN][MAXN],b[MAXN][MAXN],c[MAXN][MAXN],sum[MAXN][MAXN];
main(){
	for(reg int _=rd();_;_--)/* 'for' inside */
	{
		n=rd(),m=rd();
		for(reg int i=1;i<=n;++i)/* 'for' inside */
		{
			std::string s;
			std::cin>>s;
			for(reg int j=1;j<=m;++j)/* 'for' inside */
			{
				a[i][j]=(s[j-1]=='1'),c[i][j]=a[i][j]+c[i][j-1];
				sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i][j];
			}
		}
		for(reg int i=1;i<=m;++i) /* 'for' inside */
		for(reg int j=1;j<=n;++j) /* 'for' inside */
		b[j][i]=a[j][i]+b[j-1][i];
		int ans=0x3f3f3f3f;
		for(reg int i=1;i<=n;++i) /* 'for' inside */
		for(reg int j=i+4;j<=n;++j)/* 'for' inside */
		{
			int cnt=0;
			cnt+=j-i-1-(b[j-1][1]-b[i][1]);
			for(reg int k=2;k<4;++k) /* 'for' inside */
			cnt+=(a[i][k]==0)+(a[j][k]==0)+(b[j-1][k]-b[i][k]);
			ans=dmin(ans,cnt+j-i-1-(b[j-1][4]-b[i][4]));
			for(reg int l=5;l<=m;++l)/* 'for' inside */
			{
				cnt+=(a[i][l-1]==0)+(a[j][l-1]==0)+(b[j-1][l-1]-b[i][l-1]);
				/* 'if' begin */
				if(sum[j-1][l-1]-sum[j-1][l-3]-sum[i][l-1]+sum[i][l-3]+j-i-1-b[j-1][l-3]+b[i][l-3]+4-(c[i][l-1]
					-c[i][l-3]+c[j][l-1]-c[j][l-3])<=cnt)
					/* 'if' inside */
					cnt=sum[j-1][l-1]-sum[j-1][l-3]-sum[i][l-1]+sum[i][l-3]+j-i-1-b[j-1][l-3]+b[i][l-3]+4-(c[i][l-1]
					-c[i][l-3]+c[j][l-1]-c[j][l-3]);
				ans=dmin(ans,cnt+j-i-1-(b[j-1][l]-b[i][l]));
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}