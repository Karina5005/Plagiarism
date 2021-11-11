#include<iostream>
#include<cstring>
#include<cassert>
#include<cmath>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<vector>
#include<time.h>
#include<bitset>
#include<cstdio>
#include<algorithm>
#include<cctype>
# include<climits>

using namespace std;

# define Rep(i,a,b) for(int i=a;i<=b;i++)
# define _Rep(i,a,b) for(int i=a;i>=b;i--)
# define RepG(i,u) for(int i=head[u];~i;i=e[i].next)

const int N=3e6+5;
const int mod=1e9+7;

typedef long long ll;
typedef double db;

# define chkmax(a,b) a=max(a,b)
# define chkmin(a,b) a=min(a,b)
# define PII pair<int,int>
# define mkp make_pair
# define pb push_back

template<typename T> void read(T &x){
    x=0;int f=1;
    char c=getchar();
    for(;!isdigit(c);c=getchar())/* 'for' inside */
    /* 'if' begin */
    if(c=='-')/* 'if' inside */
    f=-1;
    for(;isdigit(c);c=getchar())/* 'for' inside */
    x=(x<<1)+(x<<3)+c-'0';
    x*=f;
}

int n,q;
int A[N],B[N];
int fac[N],inv[N];

int Qpow(int base,int ind){
	int res=1;
	while(ind){
		/* 'if' begin */
		if(ind&1)/* 'if' inside */
		res=1ll*res*base%mod;
		base=1ll*base*base%mod;
		ind>>=1;	
	}
	return res;
}

int C(int n,int m){
	return 1ll*fac[n]*inv[m]%mod*inv[n-m]%mod;
}

int main()
{
	read(n),read(q);
	fac[0]=1;
	Rep(i,1,3*n+3)fac[i]=1ll*fac[i-1]*i%mod;
	inv[3*n+3]=Qpow(fac[3*n+3],mod-2);
	_Rep(i,3*n+2,0)inv[i]=1ll*inv[i+1]*(i+1)%mod;
	Rep(i,0,3*n+3)A[i]=mod-C(3*n+3,i);
	A[0]++;
	int inv=Qpow(mod-1,mod-2); 
	_Rep(i,3*n,0){
		B[i]=1ll*A[i+3]*inv%mod;
		A[i+3]=0;
		A[i+2]=(A[i+2]-1ll*(mod-3)*B[i]%mod+mod)%mod;
		A[i+1]=(A[i+1]-1ll*(mod-3)*B[i]%mod+mod)%mod;
	}
	while(q--){
		int x;
		read(x);
		printf("%d\n",B[x]);	
	}
	return 0;
}
