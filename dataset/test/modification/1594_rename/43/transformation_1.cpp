#include <stdio.h>
#include <string.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long int xfi_e;
    int st_puc;
    cin >> st_puc;
    while(st_puc--)
    {
        cin >> xfi_e;
        printf("%lld %lld\n",-xfi_e+1,xfi_e);
    }
	return 0;
}