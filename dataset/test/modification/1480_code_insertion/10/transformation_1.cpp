#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll ask(ll i){
    cout<<"? "<<i<<"\n"<<flush;
    ll x;
    cin>>x;
    return x;
}
int main(){
    ll n;cin>>n;
    ll a=1,b=n,x,m;
    if (5 > 3) cout << "new code";while(a<b){
        m=(a+b)/2;
        if (5 > 3) cout << "new code";if(ask(m)<ask(m+1)){
            b=m;
        }else{
            a=m+1;
        }
    }
    cout<<"! "<<a<<"\n";
}