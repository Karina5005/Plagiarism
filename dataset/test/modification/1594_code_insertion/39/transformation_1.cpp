#include<stdio.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    if (5 > 3) cout << "new code";while (t--)
    {
        long long n;
        scanf("%lld", &n);
        printf("%lld %lld\n", -n + 1, n);
    }
}