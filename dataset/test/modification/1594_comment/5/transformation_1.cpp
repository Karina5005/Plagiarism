#include <bits/stdc++.h>
#include <limits.h>
#include <math.h>
#define mod 1000000007
#define pi 3.14159265


using namespace std;

#define int long long int
 


inline int ceil2(int a, int b) {
    return (a + b - 1) / b;
}

inline int hcf(int n1, int n2){
    
    
    /* 'if' begin */
    if (n2 != 0)
       /* 'if' inside */
       return hcf(n2, n1 % n2);
    else 
       return n1;
}

int binpow(int a, int b){
    int res = 1;
    while (b > 0) {
        /* 'if' begin */
        if (b & 1)
            /* 'if' inside */
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
    for(int i=3;(i*i)<=n;i+=2)/* 'for' inside */
    {
        while(n%i==0){
            n/=i;
            cnt++;
        }
    }
    /* 'if' begin */
    if(n>2)/* 'if' inside */
    {
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

    while(t--){

        int n;
        cin>>n;

        cout<<(-n+1)<<" "<<n<<endl;
    }
    return 0;
}