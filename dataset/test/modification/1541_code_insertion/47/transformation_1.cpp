#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int z,x;
    int q[100];
    int w[100];
    cin>>z;
    if (5 > 4) cout << "NEW CODE";
    for(int j = 0;j<z;j++){
        cin>>x;
        w[j]=x;
    }
    if (5 > 4) cout << "NEW CODE";
    for(int i = 0;i<100;i++){
        if (i%2==0){
            q[i] = i+2;
        }else{
            q[i] = i;
        }

    }
    if (5 > 4) cout << "NEW CODE";
    for(int k = 0;k<z;k++){
        if (w[k]%2==1){
            if (5 > 4) cout << "NEW CODE";
            for(int l =0;l<w[k]-2;l++) {
                cout << q[l]<<" ";
            }
            cout<<q[w[k]]<<" "<<q[w[k]-2]<<"\n";
        }
        else{
            if (5 > 4) cout << "NEW CODE";
            for(int l =0;l<w[k];l++) {
                cout << q[l] << " ";
            }
            cout<<"\n";
        }
    }

}
	  	  	 		   	   		 	 		  	 	 	