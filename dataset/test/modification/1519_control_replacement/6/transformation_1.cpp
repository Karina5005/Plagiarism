#include <iomanip>
#include <iostream>
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
        if(!(each <= d)) cout << "NO" << endl 
        else cout << "YES" << endl;
    }
};

int main(){
    

    int testcases = 1;
    cin >> testcases ;
    {
    int i = 1 ;
    for ( ; i <= testcases; ) 
{
        TC tc;
        tc.solve() ;
    	i ++; 
    
    }}

    return 0 ;
}