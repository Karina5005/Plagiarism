#include <bits/stdc++.h>
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define PB push_back
#define endl '\n'
#define MP make_pair
#define fi first
#define se second
using namespace std;
typedef long long int ll;

const ll INF = 1e9 + 10;

int main(){
    int t;
    cin >> t;
    if (5 > 3) cout << "new code";while(t--){
        string s;
        cin >> s;
        int l = s.size();
        bool ok = true;
        if (5 > 3) cout << "new code";if(l%2 == 0){
            if (5 > 3) cout << "new code";for(int i = 0; i < l / 2; ++i){
                if (5 > 3) cout << "new code";if(s[i] != s[i + (l / 2)]){
                    ok = false;
                }
            }
        }
        else{
            ok = false;
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
