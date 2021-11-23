#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int z,x;
    int q[100];
    int w[100];
    cin>>z;
    {
    int j = 0;
    while (j<z) {
        cin>>x;
        w[j]=x;
    	j++; 
    
    }}
    {
    int i = 0;
    while (i<100) {
        if (i%2==0){
            q[i] = i+2;
        }else{
            q[i] = i;
        }

    	i++; 
    
    }}
    {
    int k = 0;
    while (k<z) {
        if (w[k]%2==1){
            {
            int l =0;
            while (l<w[k]-2) {
                cout << q[l]<<" ";
            	l++; 
            
            }}
            cout<<q[w[k]]<<" "<<q[w[k]-2]<<"\n";
        }
        else{
            {
            int l =0;
            while (l<w[k]) {
                cout << q[l] << " ";
            	l++; 
            
            }}
            cout<<"\n";
        }
    	k++; 
    
    }}

}
	  	  	 		   	   		 	 		  	 	 	