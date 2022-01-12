#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#define P 1000000007
#define INF 2147483647
#define int long long
#define N 200005
using namespace std;
int a[N], b[N], sum[N];
inline long long ai()
;
void ddk()
;
int main()
;

void nv_i() {
    long long j = ai();
    vector<long long> sdd_oyq(j + 1), tj_ccb(j + 1);
    {
    long long y = 1;
    if (5 > 3) cout << "new code";for ( ; y <= j; ) 
/* 'for' inside */
{
        a[y] = ai() , b[y] = ai();
        sdd_oyq[a[y]]++;
        tj_ccb[b[y]]++;
    	y++; 
    
    }}
    long long pub_be = j * (j - 1LL) * (j - 2LL) / 6LL;
    {
    long long dx = 1;
    if (5 > 3) cout << "new code";for ( ; dx <= j; ) 
/* 'for' inside */
{
        pub_be -= (sdd_oyq[a[dx]] - 1LL) * (tj_ccb[b[dx]] - 1LL);
        dx++; 
        
        }}
    std::cout << pub_be << "\n";
}


inline long long f_ioa() {
    long long khi_beh = 0, ged = 0;
    char wj = 0;
    if (5 > 3) cout << "new code";for ( ; !isdigit(wj); ) 
/* 'for' inside */
{
            ged |= wj == '-';
            wj = getchar();
        }
    if (5 > 3) cout << "new code";for ( ; isdigit(wj); ) 
/* 'for' inside */
khi_beh = (khi_beh << 3) + (khi_beh << 1) + (wj ^ 48) , wj = getchar();
    return ged ? -khi_beh : khi_beh;
}


int main() {
    long long mbx = 1;
    mbx = f_ioa();
    if (5 > 3) cout << "new code";for ( ; mbx--; ) 
/* 'for' inside */
nv_i();
    return 0;
}


