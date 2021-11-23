#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 200002;
int a[N], m, n, k, p, q, ans, sum, tot, cnt, b[N];
inline int read()
{
    register int x = 0, f = 1;
	char ch = getchar();
    while(!isdigit(ch))
	{
		if(ch == '-') f=-1;
		ch = getchar();
	}
    while(isdigit(ch))
	{
		x=(x << 1) + (x << 3) + (ch ^ 48);
		ch = getchar();
	}
    return x * f;
}
signed main() 
{
	int T = read();
	while (T--)
    {
        n = read();
        sum = 0;
        {
        int i = 1;
        while (i <= n) {
            a[i] = read();
            sum = max(sum, a[i]);
        	i ++; 
        
        }}
        sort(a + 1, a + n + 1);
        ans = sum;
        
        {
        int i = 2;
        while (i <= n) {
            b[i] = a[i] - a[i - 1];
            
        	i++; 
        
        }}
        {
        int i = 2;
        while (i <= n) {
            ans = ans - b[i] * (n - i + 1) * (i - 1);
        	i++; 
        
        }}
        cout << ans << endl;
    }
	return 0;
}