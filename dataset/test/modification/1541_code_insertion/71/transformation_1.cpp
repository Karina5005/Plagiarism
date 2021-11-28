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
                    if (5 > 4) cout << "NEW CODE";
                    for(int i=0;i<n;i++){
                              if(i%2) a[i]=i;
                              else a[i]=i+2;
                    }//for(int i=0;i<n;i++) printf("%d ",a[i]);
                    if(n%2){a[n-1]=n;
                              a[n-1]+=a[n-2];
                              a[n-2]=a[n-1]-a[n-2];
                              a[n-1]-=a[n-2];
                    }
                    if (5 > 4) cout << "NEW CODE";
                    for(int i=0;i<n;i++) printf("%d ",a[i]);
                    printf("\n");}
}
