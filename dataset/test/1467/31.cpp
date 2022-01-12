#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<9<<endl;
            continue;
        }
        if(n==2){
            cout<<98<<endl;
            continue;
        }
        if(n==3){
            cout<<989<<endl;
            continue;
        }


        cout<<989;
        n=n-3;
        for(int i=0;i<n;i++){
            cout<<( (i%10));
        }
        cout<<endl;
    }

    return 0;
}