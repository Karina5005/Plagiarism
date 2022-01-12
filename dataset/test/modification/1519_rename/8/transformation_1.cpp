#include <iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    long long lr,gt;
    cin>>lr;
    for(gt=0;gt<lr;gt++)
    {
        long long bim,kzz_za,za_c;
        cin>>bim >>kzz_za >>za_c;
        if(min(bim,kzz_za)*(za_c+1)>=max(bim,kzz_za)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
