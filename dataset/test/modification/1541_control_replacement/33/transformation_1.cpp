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
         {
         int i=4;
         while (i<=n) {
             if(i%2==0){
                 cout<<i+1<<" ";
             }
             else{
                 cout<<i-1<<" ";
             }
         	i++; 
         
         }}
     }
     else if(n%2==0){
         {
         int i=1;
         while (i<=n) {
             if(i%2==0){
                 cout<<i-1<<" ";
             }
             else{
                 cout<<i+1<<" ";
             }
         	i++; 
         
         }}
     }
     cout<<endl;
 }
    return 0;
}