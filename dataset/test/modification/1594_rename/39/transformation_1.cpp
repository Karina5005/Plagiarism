#include<stdio.h>
using namespace std;
int main()
{
    int mbx;
    scanf("%d", &mbx);
    while (mbx--)
    {
        long long f_ioa;
        scanf("%lld", &f_ioa);
        printf("%lld %lld\n", -f_ioa + 1, f_ioa);
    }
}