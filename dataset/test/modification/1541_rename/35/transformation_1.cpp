#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
const int nzu = 1e5 + 10;
int g, j_uzn, ipq[nzu], t_hcw[nzu * 2];
ll xg_w;

void l( ll mo ){
    int z = 1.0 * mo;
    for( int ok_d = 1; ok_d < sqrt( z ); ok_d++ ){
        if( !( mo % ok_d ) ){
            int y = t_hcw[ok_d];
            int zo = t_hcw[ mo / ok_d];
            if( zo && y && ( y + zo == mo ) ){
    //            cout << indexl << " ---" << indexr << "\n";
                ++xg_w;
            }
        }
    }
}

int main(){
    ios :: sync_with_stdio( false );
    cin.tie( NULL);
    cin >> g;
    while( g-- ){
        cin >> j_uzn;
        for( int vgb_vb = 0; vgb_vb < 2 * j_uzn + 1; vgb_vb++ ){
            t_hcw[vgb_vb] = 0;
        }
        for( int w_gvm = 1; w_gvm < j_uzn + 1; w_gvm++ ){
            cin >> ipq[w_gvm];
            t_hcw[ipq[w_gvm]] = w_gvm;
        }
        xg_w = 0;
        for( int tic = 3; tic < 2 * j_uzn; tic++ ){
           l( tic );
        }
        cout << xg_w << "\n";
    }
    return 0;
}

 	  			 	      		 	 		    	  		