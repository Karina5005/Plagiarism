#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        long long a,b,c;
        cin>>a>>b>>c;

        if(( ((2*b-a-c)%a==0 || (2*b-a-c)%c==0) && (2*b-a-c)>=0) || (a+c)%(2*b)==0) {
            cout<<"YES";
        }
        else{cout<<"NO";}
        cout<<endl;
    }

}