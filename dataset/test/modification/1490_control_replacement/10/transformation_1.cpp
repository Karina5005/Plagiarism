#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define el '\n'
#define popCount(x) __builtin_popcountll(x)
#define Beevo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void testCase() {
    int n;
    cin >> n;
    map<int, int> mp;
    {
    int i = 0;
    for ( ; i < n; ) 
{
        int a;
        cin >> a;
        mp[a]++;
    	i++; 
    
    }}
    vector<int> freq(n + 1);
    for (auto i: mp)
        freq[i.second]++;
    int sol = INT_MAX;
    {
    int i = n;
    for ( ; i > 0; ) 
{
        sol = min(sol, n - i * freq[i]);
        freq[i - 1] += freq[i];
    	i--; 
    
    }}
    cout << min(sol, n) << el;
}

int main() {
    Beevo
    int T = 1;
    cin >> T;
    for ( ; T--; ) 
testCase();
    return 0;
}