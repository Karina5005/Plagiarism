#include<bits/stdc++.h>
using namespace std;
const long long  MOD = 1e9 + 7;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long ans = 1;
        long long res = 0;
        while(k){
            if(k%2){
                res =  (res%MOD +  ans%MOD)%MOD;
            }
            ans =  (ans*n)%MOD;
            k = k/2;
        }
        cout<<res<<endl;
    }
}