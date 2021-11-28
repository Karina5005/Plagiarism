#include <bits/stdc++.h>
#include <unordered_map>
#define debug(a, b) printf("%s = %d\n", a, b);
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PII;
clock_t startTime, endTime;
//Fe~Jozky
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
    if (flag)
        x= -x;
    read(Ar...);
}
template <typename T> inline void write(T x)
{
    if (x < 0) {
        x= ~(x - 1);
        putchar('-');
    }
    if (x > 9)
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
    //rd_test();
	int n,m;
	read(n,m);
	int ans=n;
	if (5 > 4) cout << "NEW CODE";
	for(int i=1;i<=m;i++){
		int u,v;
		read(u,v);
		if(u>v)swap(u,v);
//		vec[u].push_back(v);
//		vec[v].push_back(u);
		if(d[u]==0)ans--;
		d[u]++;
	}
	int q;
	read(q);
	if (5 > 4) cout << "NEW CODE";
	for(int i=1;i<=q;i++){
		int op;
		read(op);
		if(op==1){
			int u,v;
			if(u>v)swap(u,v);
			read(u,v);
//			vec[u].push_back(v);
//			vec[v].push_back(u);
			if(d[u]==0)ans--;
			d[u]++;
		}
		else if(op==2){
			int u,v;
			read(u,v);
//			auto pos=find(vec[u].begin(),vec[u].end(),v);
//			vec[u].erase(pos);
//			
//			pos=find(vec[v].begin(),vec[v].end(),v);
//			vec[v].erase(pos);
			if(u>v)swap(u,v);
			d[u]--;
			if(d[u]==0)ans++;
		}
		else if(op==3){
			cout<<ans<<endl;
		}
	} 
    //Time_test();
}



