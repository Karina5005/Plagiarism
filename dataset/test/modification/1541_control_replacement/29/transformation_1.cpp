#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int arr[200];
       {
       int i=1;
       while (i<=n) {
            arr[i]=i;
            i++; 
            
            }}
       if(n%2==0)
            {
            int i=2;
            while (i<=n) {
                    swap(arr[i],arr[i-1]);
                    i+=2; 
                    
                    }}
            else
                {
                int i=2;
                while (i<=n) {

                swap(arr[i-1],arr[i]);
                if(i==n-1)
                    i++;
                else
                    i+=2;

            }

           {
           int i=1;
           while (i<=n) {
                cout<<arr[i]<<" ";
                i++; 
                
                }}
           cout<<endl;

    }
    return 0;
}
