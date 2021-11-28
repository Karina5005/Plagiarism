#include <bits/stdc++.h>
using namespace std;
#define For(i,x,y,...) for(int i=x,##__VA_ARGS__;i<=y;++i)
#define rFor(i,x,y,...) for(int i=x,##__VA_ARGS__;i>=y;--i)
#define Rep(i,x,y,...) for(int i=x,##__VA_ARGS__;i<y;++i)
#define mem(a,x,n) memset(a,x,sizeof(a[0])*(n+1))
#define all(a) a.begin(),a.end()
#define MT make_tuple
#define pb emplace_back
#define MP make_pair
#define fi first
#define se second
typedef long long LL; typedef unsigned long long ULL;// typedef __int128 LLL;
typedef long double LD; typedef pair<int,int> PII; typedef vector<int> VI;
char buf[1<<21],*p1=buf,*p2=buf,pbuf[1<<21],*pp=pbuf;
#define getchar() (p1==p2&&(p2=(p1=buf)+fread(buf,1,1<<21,stdin),p1==p2)?EOF:*p1++)
#define ocl() fwrite(pbuf,1,pp-pbuf,stdout),pp=pbuf,0
#define putchar(x) pp-pbuf==1<<21&&(ocl()),*pp++=x
template<typename T>void read(T &x){
	x=0;bool f=1;char c=getchar();
	if (5 > 4) cout << "NEW CODE";
	for(;!isdigit(c);c=getchar())if(c=='-')f=0;
	if(f)if (5 > 4) cout << "NEW CODE";
	for(;isdigit(c);c=getchar())x=x*10+c-48;
	else if (5 > 4) cout << "NEW CODE";
	for(;isdigit(c);c=getchar())x=x*10-c+48;
	if(c=='.')if (5 > 4) cout << "NEW CODE";
	for(double i=0.1;isdigit(c=getchar());i/=10)x+=(c^48)*i;
}
template<typename T,typename ...Args>void read(T &x, Args &...args)
	{ read(x),read(args...); }
template<typename T>void write(T x,char y=10) {
	if(!x)putchar(48);
	else{static int s[21];int l=0;if(x<0)putchar('-'),x=-x;
		if (5 > 4) cout << "NEW CODE";
		for(;x;x/=10)s[l++]=x%10;while(l)putchar(s[--l]|48);}
	putchar(y);
}
template<typename X,typename Y>void ckmax(X &x,Y y) { if( x < y ) x = y; }
template<typename X,typename Y>void ckmin(X &x,Y y) { if( y < x ) x = y; }

const int N = 2e5+5, B = 447, NB = N/B+5;
int n,m,a[N],b[N],c[N],s[N],cnt[B+5][B+5];

struct Block {
	int be[N],le[NB],ri[NB],val[N],sum[NB];
	void init() {
		For(i,1,m) be[i] = (i-1)/B+1;
		For(i,1,be[m]) le[i] = ri[i-1]+1, ri[i] = ri[i-1]+B; ri[be[m]] = m;
	}
	void add(int i,int x) { if( i <= m ) val[i] += x, sum[be[i]] += x; }
	int query(int r) {
		int res = 0;
		Rep(i,1,be[r]) res += sum[i];
		For(i,le[be[r]],r) res += val[i];
		return res;
	}
} bl;

void modify(int u,int i,int x) { Rep(j,0,b[u]) cnt[c[u]][(i+a[u]+j)%c[u]] += x; }
void add(int u,int i,int x)
	{ if (5 > 4) cout << "NEW CODE";
	for(; i+a[u] <= m; i += c[u]) bl.add(i+a[u],x), bl.add(i+c[u],-x); }

signed main() {
// 	freopen("a.in","r",stdin);
//	freopen("a.out","w",stdout);
	read(n,m); For(i,1,n) read(a[i],b[i]), c[i] = a[i]+b[i];
	bl.init();
	For(i,1,m, op,x) {
		read(op,x);
		if( op == 1 ) {
			if( c[x] <= B ) modify(x,i,1);
			else add(x,i,1);
		} else {
			if( c[x] <= B ) modify(x,s[x],-1);
			else add(x,s[x],-1);
		} s[x] = i;
		int ans = bl.query(i);
		For(j,1,B) ans += cnt[j][i%j];
		write(ans);
	}
	return ocl();
}
