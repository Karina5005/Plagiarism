

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
    while(n > 0){
        /* 'if' begin */
        if(n % 11 == 0 || n % 111 ==  0)/* 'if' inside */
        {
            cout << "YES\n";
            return;
        }
        n -= 111;
    }
    cout << "NO\n";
    return;
}

int32_t main(){
    Fast
    int tc; cin >> tc;
    while(tc--)
        busted();
    return 0;
}