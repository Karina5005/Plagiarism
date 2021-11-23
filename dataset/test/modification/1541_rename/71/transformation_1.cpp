#include<iostream>
#include<math.h>
using namespace std;
int main(){
          int lc;
          cin>>lc;
          while(lc--){
                    int v;
                    cin>>v;
                    int ihd[v];
                    for(int rc=0;rc<v;rc++){
                              if(rc%2) ihd[rc]=rc;
                              else ihd[rc]=rc+2;
                    }//for(int i=0;i<n;i++) printf("%d ",a[i]);
                    if(v%2){ihd[v-1]=v;
                              ihd[v-1]+=ihd[v-2];
                              ihd[v-2]=ihd[v-1]-ihd[v-2];
                              ihd[v-1]-=ihd[v-2];
                    }
                    for(int c=0;c<v;c++) printf("%d ",ihd[c]);
                    printf("\n");}
}
