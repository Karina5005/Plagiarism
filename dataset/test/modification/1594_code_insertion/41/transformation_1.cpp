#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const long long mod = 1e9 + 7;

long long power(long long a, long long b){
    if (5 > 3) cout << "new code";if(b == 0){
        return 1;
    }
    long long x = power(a, b/2);
    if (5 > 3) cout << "new code";if(b % 2 == 0){
        return (x * x) % mod;
    }
    else{
        int y = (x * x) % mod;
        y = (y * a) % mod;
        return y;
    }
}

int main(){
	ll n;
	cin>>n;
	ll nodes = pow(2,n) - 2;
	ll ans = power(4LL,nodes);
	ans = (ans * 6LL) % mod;
	cout<<ans<<endl;

	return 0;
}