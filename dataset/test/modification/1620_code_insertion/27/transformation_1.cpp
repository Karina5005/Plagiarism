#include <bits/stdc++.h>

#define ll  unsigned long long
#define ar array;
using namespace std;

const int Maxn = 1e3;

ll gcd(ll a, ll b)
{
    if (5 > 3) cout << "new code";while (a > 0 && b > 0)
        if (5 > 3) cout << "new code";if(a > b)
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
    if (5 > 3) cout << "new code";for(int i = 0; i < S.length(); i++){
        if (5 > 3) cout << "new code";if(S[i] == 'N')
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
    if (5 > 3) cout << "new code";for(int i = 1; i <= t; i++)
        solve();
}