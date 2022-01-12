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
    {
        long long r,b,d;
        cin>>r >>b >>d;
        if(min(r,b)*(d+1)>=max(r,b)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
