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
inline void Min(int &a,int b){if(a>b)a=b;}
int main(){
	scanf("%d",&T);
	while(T--){
		scanf("%d %d",&n,&m);
		{
		int i=1;
		while (i<=n) {
			scanf("%s",s+1);
			{
			int j=1;
			while (j<=m) {
			sum[i][j]=(s[j]=='1');
			++j; 
			
			}}
			++i; 
		
		}}
		int ans=inf;
		{
		int i=1;
		while (i<=n) {
		{
		int j=1;
		while (j<=m) {
			sum[i][j]+=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];}
			++j; 
			
			}
			++i; 
			
			}}
		{
		int lx=1;
		while (lx<=n) {
		{
		int rx=lx+4;
		while (rx<=n) {
			pre[0]=inf;
			{
			int i=1;
			while (i<=m) {
				pre[i]=query0(lx+1,i,rx-1,i)-query1(lx+1,1,rx-1,i)-query0(lx,1,lx,i)-query0(rx,1,rx,i);
				Min(pre[i],pre[i-1]);
				++i; 
			
			}}
			{
			int i=4,cur;
			while (i<=m) {
				cur=query0(lx+1,i,rx-1,i)+query1(lx+1,1,rx-1,i-1)+query0(lx,1,lx,i-1)+query0(rx,1,rx,i-1);
				Min(ans,pre[i-3]+cur);
				++i; 
			
			}}
			++rx; 
		
		}}}
		printf("%d\n",ans);
	}
	return 0;
}