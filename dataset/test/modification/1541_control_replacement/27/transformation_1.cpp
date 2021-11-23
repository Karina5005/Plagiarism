#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve()
{
   int n;
   cin>>n;
   int arr[n];
   {
   int i=0;
   while (i<n) {
       arr[i]=i+1;
   	i++; 
   
   }}
   if(n%2==0)
   {
       {
       int i=0;
       while (i<n-1) {
           swap(arr[i],arr[i+1]);
           cout<<arr[i]<<" "<<arr[i+1]<<" ";
           i=i+2;
       }
       cout<<endl;
   }
   else
   {
       cout<<3<<" "<<1<<" "<<2<<" ";
       {
       int i=3;
       while (i<n) {
            swap(arr[i],arr[i+1]);
           cout<<arr[i]<<" "<<arr[i+1]<<" ";
           i=i+2;
       }
       cout<<endl;
   }
    
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
        solve();
    return 0;
}

