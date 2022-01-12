

#include <bits/stdc++.h>
#define IamZhuuuu ios_base::sync_with_stdio(false);cin.tie(0);

using namespace std;

signed main(){
    IamZhuuuu

    int t;cin>>t;
    for(int i=0;i<t;++i)/* 'for' inside */
    {
        long long n,ans=0;cin>>n;
        cout<<int(sqrt(n))+int(cbrt(n))-int(sqrt(int(cbrt(n))))<<'\n';
    }
}
