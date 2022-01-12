#include<bits/stdc++.h>
using namespace std;
int main(){
 
 
long long t;
cin>>t;
while(t--){

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
      for(int i=0 ; i<=n-4 ; i++){
            cout<<q%10;
            q++;
      }
      cout<<endl;
  }
}
}