#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int gs, rzb, kj, tqm[101];
    int u_c = 0;
    cin >> gs;
    for (int pta = 0; pta < gs; pta++) {
        cin >> rzb;
        if (rzb % 2 == 0) {
            for (int pr_sm = 1; pr_sm <= rzb; pr_sm++) {
                if (pr_sm % 2 == 0) {
                    tqm[pr_sm-1] = pr_sm;
                }
                else {
                    tqm[pr_sm+1] = pr_sm;
                }
            }
            for (int idz = 1; idz <= rzb; idz++) {
                cout << tqm[idz] << " ";
            }
            cout << endl;
        }
        else {
            for (int xr_iq = 1; xr_iq <= rzb; xr_iq++) {
                if (xr_iq == rzb - 2) {
                    tqm[xr_iq +1] = xr_iq;
                }
                else if (xr_iq == rzb - 1) {
                    tqm[xr_iq +1] = xr_iq;
                }
                else if (xr_iq == rzb) {
                    tqm[xr_iq - 2] = xr_iq;
                }
                else if (xr_iq % 2 == 0) {
                    tqm[xr_iq - 1] = xr_iq;
                }
                else {
                    tqm[xr_iq + 1] = xr_iq;
                }
            }
            for (int r = 1; r <= rzb; r++) {
                cout << tqm[r] << " ";
            }
            cout << endl;
        }


    }
}
		 	 	 		   		 	 			 	  		 	