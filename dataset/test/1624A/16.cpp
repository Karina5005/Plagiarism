#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int t,n,min=0,max=0,op;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        sort(arr, arr+n);
        //for (int i=0; i<n; i++){
        //cout<<arr[i]<<" ";
        //}
        min=arr[0]; 
        max=arr[n-1]; 
        op=max-min; 
        cout<<op<<endl; 
    }
    
    return 0;
}
      