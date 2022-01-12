#include <iomanip>
#include <iostream>
/** Ø­Ø³Ø¨Ù Ø§ÙÙÙ Ø§ÙØ°Ù ÙØ§ Ø§ÙÙ Ø§ÙØ§ ÙÙ Ø¹ÙÙÙ ØªÙÙÙØª ÙÙÙ Ø±Ø¨ Ø§ÙØ¹Ø±Ø´ Ø§ÙØ¹Ø¸ÙÙ **/
//******************************************//
#include <bits/stdc++.h>

#define ll long long
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;


ll a[105];

void solve() {
    int n, pos{1};
    ll s1{0}, s2{0};
    cin >> n;
    {
    int i = 0;
    for ( ; i < n; ) 
{
    cin >> a[i];
    ++i; 
    
    }}
    {
    int i = 0;
    for ( ; i < n; ) 
{
        s1 += a[i];
        s2 += i;
        pos &= (s1 >= s2);
    	++i; 
    
    }}
    cout << (pos ? "YES\n" : "NO\n");
}

int main() {
    FAST
    int t;
    cin >> t;
    for ( ; t--; ) 
solve();

    return 0;
}