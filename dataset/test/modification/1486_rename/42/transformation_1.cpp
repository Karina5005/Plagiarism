#include "bits/stdc++.h"
using namespace std;

#define MOD 1000000007
#define endl "\n"

void vea(){
    int xh_wr;
    cin >> xh_wr;
    int ae[xh_wr];
    for(int jba_k = 0; jba_k < xh_wr; jba_k++)
        cin >> ae[jba_k];
    long long i = 0, am = 0;
    for(int a = 0; a < xh_wr; a++) {
        i += a;
        am += ae[a];
        if(am < i){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int lvv;
    cin >> lvv;
    while(lvv--)
        vea();
    return 0;
}
