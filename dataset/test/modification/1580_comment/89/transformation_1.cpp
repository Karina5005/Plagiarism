#include <bits/stdc++.h>
using namespace std;
const int N=505,inf=1e9;
int sum[N][N],pre[N],T,n,m;
char s[N];
inline int query1(int lx,int ly,int rx,int ry){
	return sum[rx][ry]-sum[lx-1][ry]-sum[rx][ly-1]+sum[lx-1][ly-1];
}
inline int query0(int lx,int ly,int rx,int ry){
	return (rx-lx+1)*(ry-ly+1)-query1(lx,ly,rx,ry);
}
inline void Min(int &a,int b){/* 'if' begin */
if(a>b)/* 'if' inside */
a=b;}
int main(){
	scanf("%d",&T);
	while(T--){
		scanf("%d %d",&n,&m);
		for(int i=1;i<=n;++i)/* 'for' inside */
		{
			scanf("%s",s+1);
			for(int j=1;j<=m;++j)/* 'for' inside */
			sum[i][j]=(s[j]=='1');
		}
		int ans=inf;
		for(int i=1;i<=n;++i)/* 'for' inside */
		for(int j=1;j<=m;++j)
			/* 'for' inside */
			sum[i][j]+=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];
		for(int lx=1;lx<=n;++lx)/* 'for' inside */
		for(int rx=lx+4;rx<=n;++rx)/* 'for' inside */
		{
			pre[0]=inf;
			for(int i=1;i<=m;++i)/* 'for' inside */
			{
				pre[i]=query0(lx+1,i,rx-1,i)-query1(lx+1,1,rx-1,i)-query0(lx,1,lx,i)-query0(rx,1,rx,i);
				Min(pre[i],pre[i-1]);
			}
			for(int i=4,cur;i<=m;++i)/* 'for' inside */
			{
				cur=query0(lx+1,i,rx-1,i)+query1(lx+1,1,rx-1,i-1)+query0(lx,1,lx,i-1)+query0(rx,1,rx,i-1);
				Min(ans,pre[i-3]+cur);
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}