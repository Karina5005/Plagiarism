#include <bits/stdc++.h>
using namespace std;

int main() {

ios_base::sync_with_stdio(false);
cin.tie(nullptr); cout.tie(nullptr);

int t;cin>>t;
while(t--){
    int n,i,j,k,c=0,d=0,e=0,h=0;cin>>n;
    int a[n][5];
    for(i=0;i<n;i++){
        for(j=0;j<5;j++)cin>>a[i][j];
    }
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            c=0;d=0;e=0;
            for(k=0;k<n;k++){
                if(a[k][i]==1 || a[k][j]==1)c++;
                if(a[k][i]==1)d++;
                if(a[k][j]==1)e++;
            }
            if(c==n && d>=n/2 && e>=n/2){h=1;break;}
        }if(h==1)break;
    }
    if(h==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
    return 0;
}