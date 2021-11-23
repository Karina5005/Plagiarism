#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define lg long long
#define db double
#define lb(x) ((x)&-(x))
#define ft first
#define sd second

#define HII cerr<<"HI"<<endl
#define LLLINE cerr<<"@@@@@@@@@@@@@@@@@@@@"<<endl

template <class _T_>
void read(_T_& d){
	d=0;int f=1;char c=getchar();
	while (c<'0'||c>'9') {
	if(c=='-')f*=-1;
	c=getchar(); 
	}
	while (c>='0'&&c<='9') {
	d=d*10+c-'0';
	c=getchar(); 
	}
	d*=f;
}

/************************************************/
#define MN 400005
int n,m;
lg f[20][MN];
lg a[MN];
int main(){
	int T;
	read(T);
	while(T--){
		{
		int i=1;
		while (i<=n) {
			{
			int j=0;
			while (j<20) {
			f[j][i]=0;
			++j; 
			
			}}
			++i; 
		
		}}
		read(n);
		{
		int i=1;
		while (i<=n) {
			read(a[i]);
			if(i!=1)f[0][i-1]=abs(a[i]-a[i-1]);
			++i; 
		
		}}
		//for(int i=1;i<n;++i)cerr<<f[0][i]<<' ';cerr<<endl;
		{
		int j=1;
		while (j<20) {
			{
			int i=1;
			while (i<n) {
				f[j][i]=__gcd(f[j-1][i],f[j-1][i+(1<<j-1)]);
				++i; 
			
			}}
			++j; 
		
		}}
		//cerr<<f[1][1]<<"~~~~~"<<endl;
		//cerr<<"????"<<endl;
		int Res=0;
		{
		int i=1;
		while (i<n) {
			//cerr<<i<<"????"<<endl;
			int I=i;lg B=0;
			{
			int j=19;
			while (~j) {
				//cerr<<j<<' '<<I<<"~~~~"<<' '<<f[j][I]<<' '<<B<<' '<<__gcd(B,f[j][I])<<endl;
				if((I+(1<<j)<=n)&&__gcd(B,f[j][I])>1){
					B=__gcd(B,f[j][I]);
					I+=(1<<j);
					//cerr<<B<<"??????"<<endl;
				}
				--j; 
			
			}}
			//cerr<<i<<' '<<I<<endl;
			Res=max(Res,I-i);
			++i; 
		
		}}
		printf("%d\n",Res+1);
	}
	return 0;
}
