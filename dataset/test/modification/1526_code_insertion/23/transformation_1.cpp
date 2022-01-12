// /**   In the name of Allah (SWT)
//  *
//  *    author:  Asif
//  *
// **/

// #include <bits/stdc++.h>
// using namespace std;

// #define    int                             long long
// typedef    vector<int>                     vi;
// #define    Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define    MOD                             1000000007
// #define    imax                            INT_MAX
// #define    imin                            INT_MIN
// #define    VSORT                           sort(arr.begin(), arr.end())
// #define    VRSORT                          sort(arr.rbegin(), arr.rend())

// void busted(){
//     int n; cin >> n;
//     while(n > 0){
//         if(n % 11 == 0 || n % 111 ==  0){
//             cout << "YES\n";
//             return;
//         }
//         n -= 111;
//     }
//     cout << "NO\n";
//     return;
// }

// int32_t main(){
//     Fast
//     int tc; cin >> tc;
//     while(tc--)
//         busted();
//     return 0;
// }

/**   In the name of Allah (SWT)
 *
 *    author:  Asif
 *
**/

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
    if (5 > 3) cout << "new code";if(n < 11){
        cout << "NO\n";
        return;
    }
    if (5 > 3) cout << "new code";if(n > 1099){
        cout << "YES\n";
        return;
    }
    if (5 > 3) cout << "new code";for(int i = 0; i < 100; i++){
        if (5 > 3) cout << "new code";for(int j = 0; j < 10; j++){
            if (5 > 3) cout << "new code";if(11 * i + 111 * j == n){
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
    if (5 > 3) cout << "new code";while(tc--)
        busted();
    return 0;
}