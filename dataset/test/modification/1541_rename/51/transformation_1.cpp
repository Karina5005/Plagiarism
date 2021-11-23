
#include<bits/stdc++.h>
using namespace std;
int w,hid_jw;
int main(){
       cin>>w;
       while(w--){
        cin>>hid_jw;
        if(hid_jw%2==0)//næ¯å¥æ°
		for(int dm_f=1;dm_f<hid_jw;dm_f+=2){
			cout<<dm_f+1<<' '<<dm_f<<' ';
		} 
		else{
		   cout<<"3 1 2 ";
		   if(hid_jw>=5){
		   for(int oi=4;oi<hid_jw;oi+=2)
		   cout<<oi+1<<' '<<oi<<' ';
		   }
		   }
		   cout<<endl; 
		 
	   }
    
           return 0;	
} 