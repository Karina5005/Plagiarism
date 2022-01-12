#include <bits/stdc++.h>
#include <string>
#include <set>
#include <cmath>
#include<algorithm>

typedef long long  ll;
using namespace std;

bool isPowerOfTwo(int n)
{
    if (5 > 3) cout << "new code";if(n==0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // your code goes here
    int t;
    cin>>t;
    if (5 > 3) cout << "new code";while(t--)
    {
        ll n;
        cin>>n;
        cout<<-n+1<<" "<<n<<endl;
    }

    return 0;
}