#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
 int t;
 cin>>t;
 while(t--){
     int n;
     cin>>n;
     /* 'if' begin */
     if(n==2)/* 'if' inside */
     {
         cout<<"2"<<" "<<"1";
     }
     else /* 'if' begin */
     if(n%2!=0)/* 'if' inside */
     {
         cout<<"3"<<" "<<"1"<<" "<<"2"<<" ";
         for(int i=4;i<=n;i++)/* 'for' inside */
         {
             /* 'if' begin */
             if(i%2==0)/* 'if' inside */
             {
                 cout<<i+1<<" ";
             }
             else{
                 cout<<i-1<<" ";
             }
         }
     }
     else /* 'if' begin */
     if(n%2==0)/* 'if' inside */
     {
         for(int i=1;i<=n;i++)/* 'for' inside */
         {
             /* 'if' begin */
             if(i%2==0)/* 'if' inside */
             {
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