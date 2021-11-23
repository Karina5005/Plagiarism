#include<bits/stdc++.h>
typedef long long ll;
const int l_f = 1e6 + 5;
int opb[l_f];
using namespace std;
inline int x_li()
{
    int yl_fn = 0, jy = 1;
    char d = getchar();
    while (d < '0' || d>'9')
    {
        if (d == '-')
            jy = -1;
        d = getchar();
    }
    while (d >= '0' && d <= '9')
        yl_fn = yl_fn * 10 + d - '0', d = getchar();
    return yl_fn * jy;
}
int main() {
    int u_sct;
    u_sct = x_li();
    while (u_sct--) {
        int mf;
        mf = x_li();
        
        if (mf % 2 == 0) {
            cout << "2 1";
            for (int no = 3; no <= mf; no++) {
                if (no % 2 == 1)
                    cout << ' ' << no + 1;
                else cout << ' ' << no - 1;
            }
            cout << endl;
        }
        else {
            cout << "3 1 2";
            for (int le = 4; le <= mf; le++) {
                if (le % 2 == 0)
                    cout << ' ' << le + 1;
                else cout << ' ' << le - 1;
            }
            cout << endl;
        }
    }
}
   	   	 		 	 					    		  	  	