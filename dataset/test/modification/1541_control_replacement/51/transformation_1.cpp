
#include<bits/stdc++.h>
using namespace std;
int t,n;
int main(){
       cin>>t;
       while(t--){
        cin>>n;
        if(!(n%2==0))//næ¯å¥æ°
		{
		   cout<<"3 1 2 ";
		   if(n>=5){
		   {
		   int i=4;
		   while (i<n) {
		   cout<<i+1<<' '<<i<<' ';
		   i+=2; 
		   
		   }}
		   }
		   } 
		else{
		int i=1;
		while (i<n) {
			cout<<i+1<<' '<<i<<' ';
			i+=2; 
		
		}}
		   cout<<endl; 
		 
	   }
    
           return 0;	
} 