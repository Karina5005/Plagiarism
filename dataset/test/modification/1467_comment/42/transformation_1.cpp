#include<bits/stdc++.h>
using namespace std;
int main(){
 
 
long long t;
cin>>t;
while(t--){

    long long int  n;
  
  cin>>n;
  /* 'if' begin */
  if(n==3)/* 'if' inside */
  {
      cout<<"989"<<endl;
  }else /* 'if' begin */
  if(n==2)/* 'if' inside */
  {
      cout<<"98"<<endl;
  }else /* 'if' begin */
  if(n==1)/* 'if' inside */
  {
      cout<<"9"<<endl;
  }else{
      long long q=0;
      cout<<"989";
      for(int i=0 ; i<=n-4 ; i++)/* 'for' inside */
      {
            cout<<q%10;
            q++;
      }
      cout<<endl;
  }
}
}