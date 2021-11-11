#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<queue>
#include<map>
#include<vector>
#include<set>
#include<cstdlib>
#define pb push_back
#define mk make_pair
#define ll long long
#define lson ch[x][0]
#define rson ch[x][1]
#define int long long
using namespace std;

inline int read()
{
   int x=0,f=1;char ch=getchar();
   while (!isdigit(ch)) {if (ch=='-') f=-1;ch=getchar();}
   while (isdigit(ch)) {x=(x<<1)+(x<<3)+ch-'0';ch=getchar();}
   return x*f;
}
//ç±pickå®çå¾ S = a+b/2-1  aæ¯ä¸è§å½¢åæ´ç¹æ°ï¼bæ¯ä¸è§å½¢è¾¹ä¸çæ´ç¹æ°ã
//å ä¸ºå¨æ­¤é¢ç®ä¸­ å·²ç¥Sä¸ºå¶æ°ï¼è¦æ±aä¸ºå¥æ°ï¼
//é£ä¹åªæå½b/2æ¯å¶æ°çæ¶åï¼aæè½æ»¡è¶³ä¸ºå¥æ°ãé£ä¹é¢ç®å°±åæäºæ±éä¸ä¸ªç¹ï¼è®©ä»ä»¬æ»¡è¶³b \pmod 4 = 0 

const int maxn = 110;

int n,m;
int a[maxn][maxn];

int t;
int ans;

signed main()
{
   n=read();
   for (int i=1;i<=n;i++)
   {
   	 int x=read(),y=read();
   	 a[x%4][y%4]++;
   }
   for(int i=0;i<=2;i+=2)
     for (int j=0;j<=2;j+=2)
     {
     	int now = a[i][j];
     	ans = ans + now*(now-1)*(now-2)/6;
     	for (int k=0;k<=2;k+=2)
     	{
     		for (int o=0;o<=2;o+=2)
     		{
     			if (k==i && o==j) continue;
     			ans = ans + now * a[k][o]*(a[k][o]-1)/2;
     		}
		}
	 }
	 cout<<ans; 
   return 0;
}
