#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nl '\n'
#define bull                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sz(x) (int)x.size()
#define all(a) (a).begin(), (a).end()

int main()
{
    bull;
    int tc;
    tc = 1;
    cin >> tc;
    for ( ; tc--; ) 
{
        string s;
        cin >> s;
        int n = sz(s), cnt = 0;
        bool b[n];
        memset(b, 0, n);
        {
        int i = 0;
        for ( ; i < n - 1; ) 
{
            if (b[i] == 0 and s[i] == s[i + 1])
            {
                b[i + 1] = 1;
                cnt++;
            }
            if (b[i] == 0 and s[i] == s[i + 2])
            {
                b[i + 2] = 1;
                cnt++;
            }
        	i++; 
        
        }}
        cout << cnt << nl;
    }
}