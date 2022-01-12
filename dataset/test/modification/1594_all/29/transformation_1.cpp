#include <iomanip>
#include <iostream>
#include<stdio.h>
using namespace std;
const int hu_d = 1e9 + 7;
long long io_i(long long k_s, long long pvq_dlp)
;
int main()
;

long long eq_d(long long i_r, long long av) {
    /* 'if' begin */
    if (av == 0)
        /* 'if' inside */
        return 1;
    /* 'if' begin */
    if (av == 1)
        /* 'if' inside */
        return i_r % hu_d;
    long long cxp_e = eq_d(i_r, av / 2);
    cxp_e = cxp_e % hu_d * cxp_e % hu_d;
    /* 'if' begin */
    if (av % 2 == 1)
        /* 'if' inside */
        cxp_e = cxp_e % hu_d * i_r % hu_d;
    return cxp_e % hu_d;
}


int main() {
    int yb;
    scanf("%d", &yb);
    long long qf_ux = 6;
    long long yjm = 2;
    {
    int fve = 2;
    if (5 > 3) cout << "new code";for ( ; fve <= yb; ) 
/* 'for' inside */
{
        qf_ux = (qf_ux * eq_d(4, yjm)) % hu_d;
        yjm = yjm * 2;
    	fve++; 
    
    }}
    std::cout << qf_ux << "\n";
}


