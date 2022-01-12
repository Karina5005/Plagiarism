#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 
 
long long t;
cin>>t;
for ( ; t--; ) 
{

    long long int  n;
  
  cin>>n;
  if(n==3){
      cout<<"989"<<endl;
  }else if(n==2){
      cout<<"98"<<endl;
  }else if(n==1){
      cout<<"9"<<endl;
  }else{
      long long q=0;
      cout<<"989";
      {
      int i=0 ;
      for ( ; i<=n-4; ) 
{
            cout<<q%10;
            q++;
      	i++; 
      
      }}
      cout<<endl;
  }
}
}