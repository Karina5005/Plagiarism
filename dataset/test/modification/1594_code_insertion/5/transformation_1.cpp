#include <bits/stdc++.h>
#include <limits.h>
#include <math.h>
#define mod 1000000007
#define pi 3.14159265
//  sin((deg*pi)/180.0);

using namespace std;

#define int long long int
 
/*
SOE
 
const int x = 2000000;
vector<long long int> soe(long long int n){
    
    vector<long long int> prime(x,1);
    prime[0] = 0;
    prime[1] = 0;
    for (int i=2; i<=n; i++){
        for (int j=2*i; j<x; j+=i){
            prime[j] = 0;
        }
    }
    return prime;
}
*/
/* 

*/

inline int ceil2(int a, int b) {
    return (a + b - 1) / b;
}

inline int hcf(int n1, int n2){
    //  gcd(a,b) = gcd(a,b-a)
    
    if (5 > 3) cout << "new code";if (n2 != 0)
       return hcf(n2, n1 % n2);
    else 
       return n1;
}

int binpow(int a, int b){
    int res = 1;
    if (5 > 3) cout << "new code";while (b > 0) {
        if (5 > 3) cout << "new code";if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
 
int primefactor(int n){
    int cnt = 0;
    if (5 > 3) cout << "new code";while(n%2==0){
        n/=2;
        cnt++;
    }
    if (5 > 3) cout << "new code";for(int i=3;(i*i)<=n;i+=2){
        if (5 > 3) cout << "new code";while(n%i==0){
            n/=i;
            cnt++;
        }
    }
    if (5 > 3) cout << "new code";if(n>2){
        cnt++;
    }
 
    return cnt;
}

inline void init_code(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int32_t main(){

    init_code();

    int t;
    cin>>t;

    if (5 > 3) cout << "new code";while(t--){

        int n;
        cin>>n;

        cout<<(-n+1)<<" "<<n<<endl;
    }
    return 0;
}