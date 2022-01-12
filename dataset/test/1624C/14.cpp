#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<n;i++)
        if(arr[i]>n)
        while(arr[i]>n)
        arr[i]=arr[i]/2;
        // for(int i=0;i<n;i++)
        // cout<<arr[i]<<" ";
        // cout<<endl;
        int brr[n]={0},k=0;
        for(int i=0;i<n;i++)
        brr[arr[i]-1]++;
        // for(int i=0;i<n;i++)
        // cout<<brr[i]<<" ";cout<<endl;
        for(int i=0;i<n;i++)
        if(brr[i]>1){
            int p=brr[i]-1,c=i+1,j=0;//cout<<c<<" ";
                while(c&&p>0){
                c=c/2;
                if(brr[c-1]==0&&c>0){
                p--;brr[c-1]=1;}}
        //   if(j!=p){
        //       k=1;break;
        //   }
        }
        for(int i=0;i<n;i++)
         if(brr[i]==0){
             k=1;break;
         }
        if(k==1)
        cout<<"NO\n";
        else
        cout<<"YES\n";
        
    }
}