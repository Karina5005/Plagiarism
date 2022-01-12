#include <bits/stdc++.h>
#define FastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define PB push_back
#define endl '\n'
#define MP make_pair
#define fi first
#define se second
using namespace std;
typedef long long int ll;

const ll ai = 1e9 + 10;

int main(){
    int ddk;
    cin >> ddk;
    while(ddk--){
        string j;
        cin >> j;
        int sdd_oyq = j.size();
        bool tj_ccb = true;
        if(sdd_oyq%2 == 0){
            for(int y = 0; y < sdd_oyq / 2; ++y){
                if(j[y] != j[y + (sdd_oyq / 2)]){
                    tj_ccb = false;
                }
            }
        }
        else{
            tj_ccb = false;
        }
        cout << (tj_ccb ? "YES" : "NO") << endl;
    }
    return 0;
}
