#include <iomanip>
#include <iostream>
#include <iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    long long t,i;
    cin>>t;
    {
    i=0;
    for ( ; i<t; ) 
{
        long long r,b,d;
        cin>>r >>b >>d;
        if(!(min(r,b)*(d+1)>=max(r,b))) cout<<"NO\n";
        else cout<<"YES\n";
    	i++; 
    
    }}
    return 0;
}
