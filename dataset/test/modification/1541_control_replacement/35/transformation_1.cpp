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
    {
    int i = 1;
    while (i < sqrt( x1 )) {
        if( !( x % i ) ){
            int indexl = c[i];
            int indexr = c[ x / i];
            if( indexr && indexl && ( indexl + indexr == x ) ){
    //            cout << indexl << " ---" << indexr << "\n";
                ++cnt;
            }
        }
    	i++; 
    
    }}
}

int main(){
    ios :: sync_with_stdio( false );
    cin.tie( NULL);
    cin >> t;
    while( t-- ){
        cin >> n;
        {
        int i = 0;
        while (i < 2 * n + 1) {
            c[i] = 0;
        	i++; 
        
        }}
        {
        int i = 1;
        while (i < n + 1) {
            cin >> a[i];
            c[a[i]] = i;
        	i++; 
        
        }}
        cnt = 0;
        {
        int i = 3;
        while (i < 2 * n) {
           cnt_f( i );
        	i++; 
        
        }}
        cout << cnt << "\n";
    }
    return 0;
}

 	  			 	      		 	 		    	  		