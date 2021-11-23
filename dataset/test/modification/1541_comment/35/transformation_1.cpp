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
    for( int i = 1; i < sqrt( x1 ); i++ )/* 'for' inside */
    {
        /* 'if' begin */
        if( !( x % i ) )/* 'if' inside */
        {
            int indexl = c[i];
            int indexr = c[ x / i];
            /* 'if' begin */
            if( indexr && indexl && ( indexl + indexr == x ) )/* 'if' inside */
            {
    
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
        for( int i = 0; i < 2 * n + 1; i++ )/* 'for' inside */
        {
            c[i] = 0;
        }
        for( int i = 1; i < n + 1; i++ )/* 'for' inside */
        {
            cin >> a[i];
            c[a[i]] = i;
        }
        cnt = 0;
        for( int i = 3; i < 2 * n; i++ )/* 'for' inside */
        {
           cnt_f( i );
        }
        cout << cnt << "\n";
    }
    return 0;
}

 	  			 	      		 	 		    	  		