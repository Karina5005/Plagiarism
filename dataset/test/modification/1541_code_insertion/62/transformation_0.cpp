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
        for (int i = 1; i <= n; i ++ )
        {
            a[i] = read();
            sum = max(sum, a[i]);
        }
        sort(a + 1, a + n + 1);
        ans = sum;
        
        for(int i = 2; i <= n; i++)
        {
            b[i] = a[i] - a[i - 1];
            
        }
        for(int i = 2; i <= n; i++)
        {
            ans = ans - b[i] * (n - i + 1) * (i - 1);
        }
        cout << ans << endl;
    }
	return 0;
}