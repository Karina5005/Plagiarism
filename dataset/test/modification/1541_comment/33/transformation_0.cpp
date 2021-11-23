#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
 int t;
 cin>>t;
 while(t--){
     int n;
     cin>>n;
     if(n==2){
         cout<<"2"<<" "<<"1";
     }
     else if(n%2!=0){
         cout<<"3"<<" "<<"1"<<" "<<"2"<<" ";
         for(int i=4;i<=n;i++){
             if(i%2==0){
                 cout<<i+1<<" ";
             }
             else{
                 cout<<i-1<<" ";
             }
         }
     }
     else if(n%2==0){
         for(int i=1;i<=n;i++){
             if(i%2==0){
                 cout<<i-1<<" ";
             }
             else{
                 cout<<i+1<<" ";
             }
         }
     }
     cout<<endl;
 }
    return 0;
}