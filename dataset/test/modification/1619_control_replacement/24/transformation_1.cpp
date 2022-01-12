#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s.size() % 2 == 1)
    {
        cout << "NO\n";
        return;
    }
    int n = s.size();
    int mid = n / 2;
    {
    int i = 0;
    for ( ; i < mid; ) 
{
        if (s[i] != s[i + mid])
        {
            cout << "NO\n";
            return;
        }
    	i++; 
    
    }}
    cout << "YES\n";
    return;
}

int main()
{
    // ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    for ( ; t--; ) 
{
        solve();
    }
    return 0;
}