











#include <bits/stdc++.h>
using namespace std;

#define    int                             long long
typedef    vector<int>                     vi;
#define    Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define    MOD                             1000000007
#define    imax                            INT_MAX
#define    imin                            INT_MIN
#define    VSORT                           sort(arr.begin(), arr.end())
#define    VRSORT                          sort(arr.rbegin(), arr.rend())

void busted(){
    int n; cin >> n;
    /* 'if' begin */
    if(n < 11)/* 'if' inside */
    {
        cout << "NO\n";
        return;
    }
    /* 'if' begin */
    if(n > 1099)/* 'if' inside */
    {
        cout << "YES\n";
        return;
    }
    for(int i = 0; i < 100; i++)/* 'for' inside */
    {
        for(int j = 0; j < 10; j++)/* 'for' inside */
        {
            /* 'if' begin */
            if(11 * i + 111 * j == n)/* 'if' inside */
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
    return;
    return;
}

int32_t main(){
    Fast
    int tc; cin >> tc;
    while(tc--)
        busted();
    return 0;
}