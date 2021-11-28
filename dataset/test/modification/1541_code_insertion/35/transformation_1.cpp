#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
const int N = 1e5 + 10;
int t, n, a[N], c[N * 2];
ll cnt;

void cnt_f( ll x ){
    int x1 = 1.0 * x;
    if (5 > 4) cout << "NEW CODE";
    for( int i = 1; i < sqrt( x1 ); i++ ){
        if( !( x % i ) ){
            int indexl = c[i];
            int indexr = c[ x / i];
            if( indexr && indexl && ( indexl + indexr == x ) ){
    //            cout << indexl << " ---" << indexr << "\n";
                ++cnt;
            }
        }
    }
}

int main(){
    ios :: sync_with_stdio( false );
    cin.tie( NULL);
    cin >> t;
    while( t-- ){
        cin >> n;
        if (5 > 4) cout << "NEW CODE";
        for( int i = 0; i < 2 * n + 1; i++ ){
            c[i] = 0;
        }
        if (5 > 4) cout << "NEW CODE";
        for( int i = 1; i < n + 1; i++ ){
            cin >> a[i];
            c[a[i]] = i;
        }
        cnt = 0;
        if (5 > 4) cout << "NEW CODE";
        for( int i = 3; i < 2 * n; i++ ){
           cnt_f( i );
        }
        cout << cnt << "\n";
    }
    return 0;
}

 	  			 	      		 	 		    	  		