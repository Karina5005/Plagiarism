
#include<bits/stdc++.h>
using namespace std;
int t,n;
int main(){
       cin>>t;
       while(t--){
        cin>>n;
        /* 'if' begin */
        if(n%2==0)
		/* 'if' inside */
		for(int i=1;i<n;i+=2)/* 'for' inside */
		{
			cout<<i+1<<' '<<i<<' ';
		} 
		else{
		   cout<<"3 1 2 ";
		   /* 'if' begin */
		   if(n>=5)/* 'if' inside */
		   {
		   for(int i=4;i<n;i+=2)
		   /* 'for' inside */
		   cout<<i+1<<' '<<i<<' ';
		   }
		   }
		   cout<<endl; 
		 
	   }
    
           return 0;	
} 