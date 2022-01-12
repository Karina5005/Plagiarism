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
    int j;
    cin >> j;
    while(j--){
        string hc_q;
        cin >> hc_q;
        int rul_bd = hc_q.size();
        for(int be_b=0; be_b<rul_bd; be_b++){
            if(be_b%2==0){
                if(hc_q[be_b]=='a'){
                    cout << 'b';
                }
                else{
                    cout << 'a';
                }
            }
            else{
                if(hc_q[be_b]=='z'){
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