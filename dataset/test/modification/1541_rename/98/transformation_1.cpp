#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define nl "\n"
#define deb(x)  cout << #x << " : " << x << nl
#define ll long long
#define MOD 1000000007
#define N 100001


void ai() {   
    int ddk;
    cin >> ddk;

    if(ddk % 2 == 0) {
        for(int j = 1; j <= ddk; j+=2) {
            cout << j + 1 << " " << j << " ";
        }
        cout << nl;
    }
    else {
        for(int sdd_oyq = 1; sdd_oyq <= ddk - 3; sdd_oyq+=2) {
            cout << sdd_oyq + 1 << " " << sdd_oyq << " ";
        }
        cout << ddk << " ";
        for(int tj_ccb = ddk - 2; tj_ccb < ddk; tj_ccb++) {
            cout << tj_ccb << " ";
        }
        cout << nl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int y = 1;
    cin >> y;
    while(y--) {
        ai();
    }
}