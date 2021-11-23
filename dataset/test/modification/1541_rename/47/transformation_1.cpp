#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t,fi;
    int i[100];
    int vu_sx[100];
    cin>>t;
    for(int ll_ma = 0;ll_ma<t;ll_ma++){
        cin>>fi;
        vu_sx[ll_ma]=fi;
    }
    for(int nx = 0;nx<100;nx++){
        if (nx%2==0){
            i[nx] = nx+2;
        }else{
            i[nx] = nx;
        }

    }
    for(int pu = 0;pu<t;pu++){
        if (vu_sx[pu]%2==1){
            for(int olf_kga =0;olf_kga<vu_sx[pu]-2;olf_kga++) {
                cout << i[olf_kga]<<" ";
            }
            cout<<i[vu_sx[pu]]<<" "<<i[vu_sx[pu]-2]<<"\n";
        }
        else{
            for(int hn =0;hn<vu_sx[pu];hn++) {
                cout << i[hn] << " ";
            }
            cout<<"\n";
        }
    }

}
	  	  	 		   	   		 	 		  	 	 	