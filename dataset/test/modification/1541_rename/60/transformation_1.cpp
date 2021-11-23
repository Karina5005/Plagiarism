#include<bits/stdc++.h>
using namespace std;

int main()
{
    int hc_e,at;
    cin >> hc_e;
    while(hc_e--)
    {
        cin >> at;
        if(at%2==0) cout << 2 << " " << 1 << " ";
        else cout << 3 << " " << 1 << " " << 2 << " ";
        int rsu = at%2;
        for(int b_ikw=3+rsu;b_ikw<=at;b_ikw+=2){
            cout << b_ikw+1 << " " << b_ikw << " ";
        }
        cout << endl;
    }
    return 0;
}
 		 	    	 	  		 	   		    	 	