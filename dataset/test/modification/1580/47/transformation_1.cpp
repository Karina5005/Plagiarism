#include<bits/stdc++.h>
#define For(i,a,b) for(register int i=(a);i<=(b);++i)
#define Rep(i,a,b) for(register int i=(a);i>=(b);--i)

using namespace std;
inline int read()
{
    char c=getchar();int x=0;bool f=0;
    for(;!isdigit(c);c=getchar())/* 'for' inside */
    f^=!(c^45);
    for(;isdigit(c);c=getchar())/* 'for' inside */
    x=(x<<1)+(x<<3)+(c^48);
    /* 'if' begin */
    if(f)/* 'if' inside */
    x=-x;return x;
}

int mod;
typedef unsigned long long ull;
namespace FM{
	typedef __uint128_t L;
	struct FastMod{
	    ull b,m;
	    FastMod(ull b):b(b),m(ull((L(1)<<64)/b)){}
	    ull reduce(ull a){ull q=(ull)((L(m)*a)>>64),r=a-q*b;return r>=b?r-b:r;}
	};
	FastMod F(2);
}

struct modint{
    int x;
    modint(int o=0){x=o;}
    modint &operator = (int o){return x=o,*this;}
    modint &operator +=(modint o){return x=x+o.x>=mod?x+o.x-mod:x+o.x,*this;}
    modint &operator -=(modint o){return x=x-o.x<0?x-o.x+mod:x-o.x,*this;}
    modint &operator *=(modint o){return x=FM::F.reduce(1ull*x*o.x),*this;}
    modint &operator ^=(int b){
        modint a=*this,c=1;
        for(;b;b>>=1,a*=a)/* 'for' inside */
        /* 'if' begin */
        if(b&1)/* 'if' inside */
        c*=a;
        return x=c.x,*this;
    }
    modint &operator /=(modint o){return *this *=o^=mod-2;}
    modint &operator +=(int o){return x=x+o>=mod?x+o-mod:x+o,*this;}
    modint &operator -=(int o){return x=x-o<0?x-o+mod:x-o,*this;}
    modint &operator *=(int o){return x=FM::F.reduce(1ull*x*o),*this;}
    modint &operator /=(int o){return *this *= ((modint(o))^=mod-2);}
    template<class I>friend modint operator +(modint a,I b){return a+=b;}
    template<class I>friend modint operator -(modint a,I b){return a-=b;}
    template<class I>friend modint operator *(modint a,I b){return a*=b;}
    template<class I>friend modint operator /(modint a,I b){return a/=b;}
    friend modint operator ^(modint a,int b){return a^=b;}
    friend bool operator ==(modint a,int b){return a.x==b;}
    friend bool operator !=(modint a,int b){return a.x!=b;}
    bool operator ! () {return !x;}
    modint operator - () {return x?mod-x:0;}
};

modint C[105][105],fac[105];
inline void initC(int n){
	fac[0]=1;
	For(i,0,n){
		C[i][0]=1;
		/* 'if' begin */
		if(i)/* 'if' inside */
		fac[i]=fac[i-1]*i;
		For(j,1,i)C[i][j]=C[i-1][j]+C[i-1][j-1];
	}
}

#define fi first
#define se second
#define pb push_back
#define mkp make_pair
typedef pair<int,int>pii;
typedef vector<int>vi;

#define maxn 105
#define inf 0x3f3f3f3f

int n,m,k;
modint f[maxn][maxn][maxn];
bool vis[maxn][maxn][maxn];

modint F(int n,int k,int m)
{
	/* 'if' begin */
	if(vis[n][k][m])/* 'if' inside */
	return f[n][k][m];
	/* 'if' begin */
	if(m==1)/* 'if' inside */
	{
		/* 'if' begin */
		if(!n)/* 'if' inside */
		return (k==0);
		/* 'if' begin */
		if(k!=1)/* 'if' inside */
		return 0;
		return 
				fac[n];
	}
	/* 'if' begin */
	if(!n)/* 'if' inside */
	return (k==0);
	/* 'if' begin */
	if(k && n<=m+k-3)/* 'if' inside */
	return 0;
	modint res=0;
	For(s,0,n-1){
		For(t,0,k){
			res += C[n-1][s]*F(s,t,m-1)*F(n-1-s,k-t,m-1);
		}
	}
	
	vis[n][k][m]=1;

	return f[n][k][m]=res;
}

signed main()
{
	n=read(),m=read(),k=read(),mod=read(),FM::F=FM::FastMod(mod);
	initC(n);
	cout<<F(n,k,m).x<<endl;
	return 0;
}
