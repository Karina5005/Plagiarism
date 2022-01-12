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

inline int lni(int a, int b) {
    return (a + b - 1) / b;
}

inline int p(int n1, int n2){
    //  gcd(a,b) = gcd(a,b-a)
    
    if (n2 != 0)
       return p(n2, n1 % n2);
    else 
       return n1;
}

int binpow(int a, int b){
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
 
int primefactor(int n){
    int cnt = 0;
    while(n%2==0){
        n/=2;
        cnt++;
    }
    for(int i=3;(i*i)<=n;i+=2){
        while(n%i==0){
            n/=i;
            cnt++;
        }
    }
    if(n>2){
        cnt++;
    }
 
    return cnt;
}

inline void fij(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int32_t main(){

    fij();

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        cout<<(-n+1)<<" "<<n<<endl;
    }
    return 0;
}