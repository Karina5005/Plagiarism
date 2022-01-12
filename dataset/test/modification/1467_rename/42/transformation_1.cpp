#include<bits/stdc++.h>
using namespace std;
int main(){
 
 
long long t;
cin>>t;
while(t--){

    long long int  nqw;
  
  cin>>nqw;
  if(nqw==3){
      cout<<"989"<<endl;
  }else if(nqw==2){
      cout<<"98"<<endl;
  }else if(nqw==1){
      cout<<"9"<<endl;
  }else{
      long long cai_mbx=0;
      cout<<"989";
      for(int kr=0 ; kr<=nqw-4 ; kr++){
            cout<<cai_mbx%10;
            cai_mbx++;
      }
      cout<<endl;
  }
}
}