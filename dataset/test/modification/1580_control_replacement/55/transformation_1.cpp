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
	{
	register int i=1;
	while (i<=n) {scanf("%s",str+1);{
	register int j=1;
	while (j<=m) {
	mp[i][j]=(str[j]=='0');	++i; 
	
	}
	++j; 
	
	}}}
	{
	register int j=1;
	while (j<=m) {
	{
	register int i=1;
	while (i<=n) {
	s[j][i]=s[j][i-1]+(mp[i][j]^1);}
	++i; 
	
	}
	++j; 
	
	}}
	ans=n*m;{
	register int i=1;
	while (i<=n-3) {
		memset(sum,0,sizeof(sum));
		{
		register int j=1;
		while (j<=m) {
		sum[j]=(mp[i+1][j]^1)+mp[i][j]+mp[i+3][j]+(mp[i+2][j]^1);
		++j; 
		
		}}
		{
		register int j=i+4;
		while (j<=n) {
			{
			register int k=m;
			while (k>=1) {
			c[k]=((j-i-1)-(s[k][j-1]-s[k][i]));
			--k; 
			
			}}
			{
			register int k=m;
			while (k>=1) {
			sum[k]+=(mp[j-1][k]^1)*2-1+mp[j][k];
			--k; 
			
			}}
			{
			register int k=1;
			while (k<=m) {
			sm[k]=sm[k-1]+sum[k];
			++k; 
			
			}}
			int mn=c[1]-sum[1];
			{
			register int k=1;
			while (k<=m-3) {
			mn=min(mn,c[k]-sm[k]),ans=min(ans,mn+c[k+3]+sm[k+2]);
			++k; 
			
			}}
			++j; 
		
		}}
		++i; 
	
	}}
	printf("%d\n",ans);
}

signed main(){
	int T=read();while(T--)
		solve();
}