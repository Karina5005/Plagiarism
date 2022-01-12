#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        /* 'if' begin */
        if(n==1)/* 'if' inside */
        {
            cout<<9<<endl;
            continue;
        }
        /* 'if' begin */
        if(n==2)/* 'if' inside */
        {
            cout<<98<<endl;
            continue;
        }
        /* 'if' begin */
        if(n==3)/* 'if' inside */
        {
            cout<<989<<endl;
            continue;
        }


        cout<<989;
        n=n-3;
        for(int i=0;i<n;i++)/* 'for' inside */
        {
            cout<<( (i%10));
        }
        cout<<endl;
    }

    return 0;
}