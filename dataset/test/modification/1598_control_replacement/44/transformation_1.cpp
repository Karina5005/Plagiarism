#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#define P 1000000007
#define INF 2147483647
#define int long long
#define N 200005
using namespace std;
int a[N], b[N], sum[N];
inline int read()
{
    int X = 0, w = 0;
    char ch = 0;
    for ( ; !isdigit(ch); ) 
{
        w |= ch == '-';
        ch = getchar();
    }
    for ( ; isdigit(ch); ) 
X = (X << 3) + (X << 1) + (ch ^ 48), ch = getchar();
    return w ? -X : X;
}
void work()
{
    int n = read();
    vector<int> s1(n + 1), s2(n + 1);
    {
    int i = 1;
    for ( ; i <= n; ) 
{
        a[i] = read(), b[i] = read();
        s1[a[i]]++;
        s2[b[i]]++;
    	i++; 
    
    }}
    int ans = n * (n - 1ll) * (n - 2ll) / 6ll;
    {
    int i = 1;
    for ( ; i <= n; ) 
{
        ans -= (s1[a[i]] - 1ll) * (s2[b[i]] - 1ll);
        i++; 
        
        }}
    std::cout << ans << "\n";
}
signed main()
{
    int T = 1;
    T = read();
    for ( ; T--; ) 
work();
    return 0;
}