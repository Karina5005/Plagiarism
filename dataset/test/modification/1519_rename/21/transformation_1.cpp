
#include<bits/stdc++.h>
using  namespace std;


int main(){

  int rjr;

 cin>>rjr;


 while(rjr--){

  int z,s_udi,tdx_v;

  cin>>z>>s_udi>>tdx_v;


  if(s_udi-1+((z-1)*s_udi)==tdx_v){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }

 }





 return 0;


}
