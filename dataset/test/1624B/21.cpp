#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((b-a)==(c-b)){
            cout<<"YES"<<endl;
            continue;
        }
        int flag=0;
        int p=2*b;
        if((p!=c)&&(p-c)%a==0){
            ll m=(p-c)/a;
            m=(ll)m*a;
            if((m>0)&&(b-m)==(c-b)){
                flag=1;
            }
        }
        if((p!=a) && (p-a)%c==0){
           ll m=(p-a)/c;
           m=(ll)m*c;
           if((m>0)&&(b-a)==(m-b)){
               flag=1;
           }
        }
        if((a+c)%p==0){
            ll m=(a+c)/p;
            m=(ll)m*b;
            if((m>0)&&(m-a)==(c-m)){
                flag=1;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
