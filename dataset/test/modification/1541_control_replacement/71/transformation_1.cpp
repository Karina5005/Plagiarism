#include<iostream>
#include<math.h>
using namespace std;
int main(){
          int t;
          cin>>t;
          while(t--){
                    int n;
                    cin>>n;
                    int a[n];
                    {
                    int i=0;
                    while (i<n) {
                              if(!(i%2)) a[i]=i+2;
                              else a[i]=i;
                    	i++; 
                    
                    }}//for(int i=0;i<n;i++) printf("%d ",a[i]);
                    if(n%2){a[n-1]=n;
                              a[n-1]+=a[n-2];
                              a[n-2]=a[n-1]-a[n-2];
                              a[n-1]-=a[n-2];
                    }
                    {
                    int i=0;
                    while (i<n) {
                    printf("%d ",a[i]);
                    i++; 
                    
                    }}
                    printf("\n");}
}
