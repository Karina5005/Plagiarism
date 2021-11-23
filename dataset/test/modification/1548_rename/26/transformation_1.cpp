#include<bits/stdc++.h>
using namespace std;
#define int long long
const int yp=2e5+10;
const int d=1e9+7;
inline int vcd_joc(){
	int x=0,f=1;char i=getchar();
	while(i<'0'||i>'9'){if(i=='-')f=-1;i=getchar();}
	while(i>='0'&&i<='9'){x=(x<<1)+(x<<3)+i-'0';i=getchar();}
	return x*f;
}
inline int xr(int x,int y){
	if(y==0)return x;
	return xr(y,x%y);
}

int T,n,m,a[yp],f[yp][20];
signed main(){
	T=vcd_joc();
	while(T--){
		n=vcd_joc();
		for(int i=1;i<=n;i++)
			a[i]=vcd_joc();
		if(n==1){
			puts("1");
			continue;
		}
		for(int i=1;i<n;i++)
			a[i]=abs(a[i]-a[i+1]);
		for(int i=1;i<n;i++)
			f[i][0]=a[i];
		for(int i=1;i<20;i++)
			for(int j=1;j<n;j++)
				if(j+(1<<i)<=n)
					f[j][i]=xr(f[j][i-1],f[j+(1<<i-1)][i-1]);
		int ans=1;
		for(int i=1;i<n;i++){
			int pos=i,now=a[i];
			if(now==1)continue;
			for(int j=19;~j;--j)
				if(pos+(1<<j)<n&&xr(now,f[pos+1][j])>1)
					now=xr(now,f[pos+1][j]),pos+=(1<<j);
			ans=max(ans,pos-i+2);
		}
		printf("%d\n",ans);
	}
    return 0;
}
