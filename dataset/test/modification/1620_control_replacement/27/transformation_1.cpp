#include <bits/stdc++.h>

#define ll  unsigned long long
#define ar array;
using namespace std;

const int Maxn = 1e3;

ll gcd(ll a, ll b)
{
    while (a > 0 && b > 0)
        if(a > b)
            a %= b;
        else    
            b %= a;
    return a + b;
}

void solve()
{
    int sum = 0;
    string S;
    cin >> S;
    {
    int i = 0;
    while (i < S.length()) {
        if(S[i] == 'N')
            sum+=1;
    	i++; 
    
    }}
    cout << (sum==1?"NO":"YES") << endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

    int t;
    cin >> t;
    {
    int i = 1;
    while (i <= t) {
        solve();
        i++; 
        
        }}
}