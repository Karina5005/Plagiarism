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
                    for(int i=0;i<n;i++)/* 'for' inside */
                    {
                              /* 'if' begin */
                              if(i%2) /* 'if' inside */
                              a[i]=i;
                              else a[i]=i+2;
                    }
                    /* 'if' begin */
                    if(n%2)/* 'if' inside */
                    {a[n-1]=n;
                              a[n-1]+=a[n-2];
                              a[n-2]=a[n-1]-a[n-2];
                              a[n-1]-=a[n-2];
                    }
                    for(int i=0;i<n;i++) /* 'for' inside */
                    printf("%d ",a[i]);
                    printf("\n");}
}
