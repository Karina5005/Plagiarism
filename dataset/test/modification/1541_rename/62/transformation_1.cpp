#include <bits/stdc++.h>
#define int long long
using namespace std;
const int d_sr = 200002;
int a[d_sr], m, n, k, p, q, ans, sum, tot, cnt, b[d_sr];
inline int c()
{
    register int ibz = 0, ew_n = 1;
	char bry = getchar();
    while(!isdigit(bry))
	{
		if(bry == '-') ew_n=-1;
		bry = getchar();
	}
    while(isdigit(bry))
	{
		ibz=(ibz << 1) + (ibz << 3) + (bry ^ 48);
		bry = getchar();
	}
    return ibz * ew_n;
}
signed main() 
{
	int T = c();
	while (T--)
    {
        n = c();
        sum = 0;
        for (int i = 1; i <= n; i ++ )
        {
            a[i] = c();
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