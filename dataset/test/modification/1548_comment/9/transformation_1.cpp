#include <bits/stdc++.h>
#include <unordered_map>
#define debug(a, b) printf("%s = %d\n", a, b);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PII;
clock_t startTime, endTime;

const ll INF_ll= 1e18;
const int INF_int= 0x3f3f3f3f;
void read(){};
template <typename _Tp, typename... _Tps> void read(_Tp& x, _Tps&... Ar)
{
    x= 0;
    char c= getchar();
    bool flag= 0;
    while (c < '0' || c > '9')
        flag|= (c == '-'), c= getchar();
    while (c >= '0' && c <= '9')
        x= (x << 3) + (x << 1) + (c ^ 48), c= getchar();
    /* 'if' begin */
    if (flag)
        /* 'if' inside */
        x= -x;
    read(Ar...);
}
template <typename T> inline void write(T x)
{
    /* 'if' begin */
    if (x < 0) /* 'if' inside */
    {
        x= ~(x - 1);
        putchar('-');
    }
    /* 'if' begin */
    if (x > 9)
        /* 'if' inside */
        write(x / 10);
    putchar(x % 10 + '0');
}
void rd_test()
{
#ifdef ONLINE_JUDGE
#else
    startTime = clock ();
    freopen("data.in", "r", stdin);
#endif
}
void Time_test()
{
#ifdef ONLINE_JUDGE
#else
    endTime= clock();
    printf("\nRun Time:%lfs\n", (double)(endTime - startTime) / CLOCKS_PER_SEC);
#endif
}
const int maxn=3e5+9;
vector<int>vec[maxn];
int d[maxn];
int main()
{
    
	int n,m;
	read(n,m);
	int ans=n;
	for(int i=1;i<=m;i++)/* 'for' inside */
	{
		int u,v;
		read(u,v);
		/* 'if' begin */
		if(u>v)/* 'if' inside */
		swap(u,v);

		/* 'if' begin */
		if(d[u]==0)/* 'if' inside */
		ans--;
		d[u]++;
	}
	int q;
	read(q);
	for(int i=1;i<=q;i++)/* 'for' inside */
	{
		int op;
		read(op);
		/* 'if' begin */
		if(op==1)/* 'if' inside */
		{
			int u,v;
			/* 'if' begin */
			if(u>v)/* 'if' inside */
			swap(u,v);
			read(u,v);

			/* 'if' begin */
			if(d[u]==0)/* 'if' inside */
			ans--;
			d[u]++;
		}
		else /* 'if' begin */
		if(op==2)/* 'if' inside */
		{
			int u,v;
			read(u,v);

			/* 'if' begin */
			if(u>v)/* 'if' inside */
			swap(u,v);
			d[u]--;
			/* 'if' begin */
			if(d[u]==0)/* 'if' inside */
			ans++;
		}
		else /* 'if' begin */
		if(op==3)/* 'if' inside */
		{
			cout<<ans<<endl;
		}
	} 
    
}



