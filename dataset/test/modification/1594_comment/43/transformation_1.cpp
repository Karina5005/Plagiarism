#include <stdio.h>
#include <string.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long int n;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        printf("%lld %lld\n",-n+1,n);
    }
	return 0;
}