#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
#define reset(a, b) memset(a, b, sizeof(a))
using namespace std;
typedef long long ll;

const int num = 2e5+5;

ll m, k, g, q, ans;
int t, n, a[num]={}, b[num]={}, aa[num]={}, bb[num]={};

int main()
{
     cin.tie(0); cout.tie(0);
    int i, j;
    cin >> t;

    for ( ; t--; ) 
{
        cin >> n;
        {
        i=1;
        for ( ; i<=n; ) 
{
            aa[i]=0;
            bb[i]=0;
        	i++; 
        
        }}
        {
        i=1;
        for ( ; i<=n; ) 
{
            cin >> a[i] >> b[i];
            aa[a[i]]++;
            bb[b[i]]++;
        	i++; 
        
        }}
        ans = (1LL*n*(n-1)*(n-2))/6;
        {
        i=1;
        for ( ; i<=n; ) 
{
            ans -= (1LL*(aa[a[i]]-1)*(bb[b[i]]-1));
        	i++; 
        
        }}
        cout << ans << endl;
    }
    return 0;
}