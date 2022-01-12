#include <iomanip>
#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for ( ; t--; ) 
{
        long long n;
        scanf("%lld", &n);
        std::cout << -n + 1 << " " << n << "\n";
    }
}