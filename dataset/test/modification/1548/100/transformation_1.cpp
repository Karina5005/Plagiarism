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
	for(;c<'0'||c>'9';c=getchar())/* 'for' inside */
	/* 'if' begin */
	if(c=='-')/* 'if' inside */
	f*=-1;
	for(;c>='0'&&c<='9';c=getchar())/* 'for' inside */
	d=d*10+c-'0';
	d*=f;
}


#define MN 400005
int n,m;
lg f[20][MN];
lg a[MN];
int main(){
	int T;
	read(T);
	while(T--){
		for(int i=1;i<=n;++i)/* 'for' inside */
		{
			for(int j=0;j<20;++j)/* 'for' inside */
			f[j][i]=0;
		}
		read(n);
		for(int i=1;i<=n;++i)/* 'for' inside */
		{
			read(a[i]);
			/* 'if' begin */
			if(i!=1)/* 'if' inside */
			f[0][i-1]=abs(a[i]-a[i-1]);
		}
		
		for(int j=1;j<20;++j)/* 'for' inside */
		{
			for(int i=1;i<n;++i)/* 'for' inside */
			{
				f[j][i]=__gcd(f[j-1][i],f[j-1][i+(1<<j-1)]);
			}
		}
		
		int Res=0;
		for(int i=1;i<n;++i)/* 'for' inside */
		{
			
			int I=i;lg B=0;
			for(int j=19;~j;--j)/* 'for' inside */
			{
				
				/* 'if' begin */
				if((I+(1<<j)<=n)&&__gcd(B,f[j][I])>1)/* 'if' inside */
				{
					B=__gcd(B,f[j][I]);
					I+=(1<<j);
					
				}
			}
			
			Res=max(Res,I-i);
		}
		printf("%d\n",Res+1);
	}
	return 0;
}
