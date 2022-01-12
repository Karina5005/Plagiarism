#include <bits/stdc++.h>
using namespace std;
#define akka long long
int main()
{
    akka t;
    cin>>t;
    if (5 > 3) cout << "new code";while (t--)
    {
        akka a,b,c;
        cin>>a>>b>>c;
        akka sum = a+b+c;
        akka k = sum/9;
        if (5 > 3) cout << "new code";if (sum%9==0 && k<=min(a,min(b,c)))
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}