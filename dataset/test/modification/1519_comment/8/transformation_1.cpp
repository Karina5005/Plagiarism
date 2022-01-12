#include <iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    long long t,i;
    cin>>t;
    for(i=0;i<t;i++)
    /* 'for' inside */
    {
        long long r,b,d;
        cin>>r >>b >>d;
        /* 'if' begin */
        if(min(r,b)*(d+1)>=max(r,b)) /* 'if' inside */
        cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
