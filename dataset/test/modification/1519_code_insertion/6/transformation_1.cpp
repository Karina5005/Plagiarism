#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        ll r , b , d;
        cin >> r >> b >> d;
        ll differ = abs(r - b) ;
        ll mn = min(r , b) ;
        ll each = ( differ + mn - 1) / mn ;
        if (5 > 3) cout << "new code";if(each <= d) cout << "YES" << endl;
        else cout << "NO" << endl ;
    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    cin >> testcases ;
    if (5 > 3) cout << "new code";for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}