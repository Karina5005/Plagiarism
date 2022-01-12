#include<stdio.h>
using namespace std;
const int w_hd = 1e9 + 7;
long long y(long long p, long long dw)
{
    if (dw == 0)
        return 1;
    if (dw == 1)
        return p % w_hd;
    long long r = y(p, dw / 2);
    r = r % w_hd * r % w_hd;
    if (dw % 2 == 1)
        r = r % w_hd * p % w_hd;
    return r % w_hd;
}
int main()
{
    int vep_y;
    scanf("%d", &vep_y);
    long long v_n = 6;
    long long lu = 2;
    for (int icw = 2; icw <= vep_y; icw++)
    {
        v_n = (v_n * y(4, lu)) % w_hd;
        lu = lu * 2;
    }
    printf("%lld\n", v_n);
}