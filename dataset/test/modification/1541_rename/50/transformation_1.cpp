
#include<bits/stdc++.h>
using namespace std;
int b,xo;
int main(){
       cin>>b;
       while(b--){
        cin>>xo;
        if(xo%2==0)
		for(int qrb_gx=1;qrb_gx<xo;qrb_gx+=2){
			cout<<qrb_gx+1<<' '<<qrb_gx<<' ';
		} 
		else{
		   cout<<"3 1 2 ";
		   if(xo>=5){
		   for(int lzd=4;lzd<xo;lzd+=2)
		   cout<<lzd+1<<' '<<lzd<<' ';
		   }
		   }
		   cout<<endl; 
		 
	   }
    
           return 0;	
} 