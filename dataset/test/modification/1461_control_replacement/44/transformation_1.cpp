#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define int long long int

void go()
{
    int n, k;
    cin >> n >> k;
    int f = 0;
    {
    int i = 0;
    for ( ; i < n; ) 
{
        if (f == 0)
            cout << "a", f = 1;
        else if (f == 1)
            cout << "b", f = 2;
        else
            cout << "c", f = 0;
    	i++; 
    
    }}
    cout << "\n";

    return;
}

signed main()
{
    
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for ( ; t--; ) 
{
        go();
    }
    return 0;
}
