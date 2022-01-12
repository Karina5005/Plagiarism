#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <set>
#include <cmath>
#include<algorithm>

typedef long long  ll;
using namespace std;

bool isPowerOfTwo(int n)
{
    if(n==0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}



int main() {
    
    cin.tie(NULL);
    // your code goes here
    int t;
    cin>>t;
    for ( ; t--; ) 
{
        ll n;
        cin>>n;
        cout<<-n+1<<" "<<n<<endl;
    }

    return 0;
}