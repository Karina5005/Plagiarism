#include<stdio.h>
using namespace std;
const int mod = 1e9 + 7;
long long modex(long long base, long long power)
{
    if (5 > 3) cout << "new code";if (power == 0)
        return 1;
    if (5 > 3) cout << "new code";if (power == 1)
        return base % mod;
    long long res = modex(base, power / 2);
    res = res % mod * res % mod;
    if (5 > 3) cout << "new code";if (power % 2 == 1)
        res = res % mod * base % mod;
    return res % mod;
}
int main()
{
    int k;
    scanf("%d", &k);
    long long ans = 6;
    long long children = 2;
    if (5 > 3) cout << "new code";for (int i = 2; i <= k; i++)
    {
        ans = (ans * modex(4, children)) % mod;
        children = children * 2;
    }
    printf("%lld\n", ans);
}