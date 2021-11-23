#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxn=2e5+10;
const int mod=1e9+7;
inline int read(){
	int x=0,f=1;char c=getchar();
	while(c<'0'||c>'9'){/* 'if' begin */
	if(c=='-')/* 'if' inside */
	f=-1;c=getchar();}
	while(c>='0'&&c<='9'){x=(x<<1)+(x<<3)+c-'0';c=getchar();}
	return x*f;
}
inline int gcd(int x,int y){
	/* 'if' begin */
	if(y==0)/* 'if' inside */
	return x;
	return gcd(y,x%y);
}

int T,n,m,a[maxn],f[maxn][20];
signed main(){
	T=read();
	while(T--){
		n=read();
		for(int i=1;i<=n;i++)
			/* 'for' inside */
			a[i]=read();
		/* 'if' begin */
		if(n==1)/* 'if' inside */
		{
			puts("1");
			continue;
		}
		for(int i=1;i<n;i++)
			/* 'for' inside */
			a[i]=abs(a[i]-a[i+1]);
		for(int i=1;i<n;i++)
			/* 'for' inside */
			f[i][0]=a[i];
		for(int i=1;i<20;i++)
			/* 'for' inside */
			for(int j=1;j<n;j++)
				/* 'for' inside */
				/* 'if' begin */
				if(j+(1<<i)<=n)
					/* 'if' inside */
					f[j][i]=gcd(f[j][i-1],f[j+(1<<i-1)][i-1]);
		int ans=1;
		for(int i=1;i<n;i++)/* 'for' inside */
		{
			int pos=i,now=a[i];
			/* 'if' begin */
			if(now==1)/* 'if' inside */
			continue;
			for(int j=19;~j;--j)
				/* 'for' inside */
				/* 'if' begin */
				if(pos+(1<<j)<n&&gcd(now,f[pos+1][j])>1)
					/* 'if' inside */
					now=gcd(now,f[pos+1][j]),pos+=(1<<j);
			ans=max(ans,pos-i+2);
		}
		printf("%d\n",ans);
	}
    return 0;
}
