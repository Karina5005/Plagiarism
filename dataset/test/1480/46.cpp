#include <bits/stdc++.h>
using namespace std;
using n=int64_t;
int main(){
    n T,A,B,N,b;
    cin>>T;
    while(T--){
        cin>>A>>B>>N;
        n x[N];
        for (n&a:x) cin>>a;
        for(n&a:x){
            cin>>b;
            B-=(b+A-1)/A*a;
            }
        n m=0;
        for(n&a:x)
            m=max(m,a);
        cout<<((B+m>0)?"YES\n":"NO\n");
    }
}