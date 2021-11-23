#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>

#define x first
#define y second
#define ll long long
#define ull unsigned long long

using namespace std;

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

void solve() {
    int n; cin >> n;
    vector<vector<int>> v(n, vector<int>(5));
    {
    int i = 0;
    for ( ; i < n; ) 
{
        {
        int bit = 0;
        for ( ; bit < 5; ) 
{
            cin >> v[i][bit];
            ++bit; 
            
            }}
    	++i; 
    
    }}

    // Iterate through every possible pair of days
    bool found = false;
    {
    int a = 0;
    for ( ; a < 5 && !found; ) 
{
        {
        int b = a + 1;
        for ( ; b < 5 && !found; ) 
{
            // Count every possible type of student
            int cnt0 = 0, cnta = 0, cntb = 0;
            {
            int i = 0;
            for ( ; i < n; ) 
{
                if (v[i][a])
                    ++cnta;
                if (v[i][b])
                    ++cntb;
                if (!v[i][a] && !v[i][b])
                    ++cnt0;
            	++i; 
            
            }}

            // Decide if the even split is possible
            if (!cnt0 && cnta >= n / 2 && cntb >= n / 2)
                found = true;
        	++b; 
        
        }}
    	++a; 
    
    }}

    cout << (found ? "YES\n" : "NO\n");
}

int main() {
    
    cin.tie(0), cout.tie(0);

    int T; cin >> T;
    for ( ; T--; ) 
solve();
    return 0;
}
