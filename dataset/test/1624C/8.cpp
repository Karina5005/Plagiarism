#include<bits/stdc++.h> 
using namespace std;        

int main()
{
   int t;
   cin>>t;
   while(t--){
       long long n;
       cin>>n;
       long long a[n],b[n+1];
       for(int i=0;i<n;i++){
           cin>>a[i];
           b[i+1]=0;
       }
       
       sort(a,a+n);
       reverse(a,a+n);
       for(int i=0;i<n;i++){
           while(a[i]!=0){
               if(a[i]<=n&&b[a[i]]==0){
                   b[a[i]]=1;
                   break;
               }
               a[i]/=2;
           }
       }
       
       long long x=1;
       for(int i=1;i<=n;i++){
           if(b[i]==0){
               cout<<"NO\n";
               x=0;
               break;
           }
       }
       if(x){
           cout<<"YES\n";
       }
       
   }
   return 0;
}
