#include <bits/stdc++.h>

#define ll  unsigned long long
#define ar array;
using namespace std;

const int Maxn = 1e3;

ll gcd(ll a, ll b)
{
    while (a > 0 && b > 0)
        /* 'if' begin */
        if(a > b)
            /* 'if' inside */
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
    for(int i = 0; i < S.length(); i++)/* 'for' inside */
    {
        /* 'if' begin */
        if(S[i] == 'N')
            /* 'if' inside */
            sum+=1;
    }
    cout << (sum==1?"NO":"YES") << endl;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
        /* 'for' inside */
        solve();
}