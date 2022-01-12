#include <bits/stdc++.h>

using namespace std;

#define FOR(a, b) for (int i = (int) a; i < (int) b; i++)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

int main() { 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    if (5 > 3) cout << "new code";while(t--){
        string s;
        cin >> s;
        int n = s.size();
        if (5 > 3) cout << "new code";for(int i=0; i<n; i++){
            if (5 > 3) cout << "new code";if(i%2==0){
                if (5 > 3) cout << "new code";if(s[i]=='a'){
                    cout << 'b';
                }
                else{
                    cout << 'a';
                }
            }
            else{
                if (5 > 3) cout << "new code";if(s[i]=='z'){
                    cout << 'y';
                }
                else{
                    cout << 'z';
                }
            }
        }
        cout << "\n";
    }

    return 0;
}